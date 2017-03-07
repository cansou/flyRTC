package com.kctdemo.activity;

import java.util.ArrayList;
import java.util.Arrays;

import com.kctdemo.R;
import com.yzx.tcp.TcpTools;
import com.yzx.tools.CustomLog;
import com.kctdemo.action.UIDfineAction;
import com.kctdemo.tools.Config;
import com.kctdemo.tools.DfineAction;
import com.kctdemo.tools.LoginConfig;

import android.annotation.SuppressLint;
import android.content.Context;
import android.content.Intent;
import android.os.Bundle;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.view.Window;
import android.widget.BaseAdapter;
import android.widget.ImageView;
import android.widget.ListView;
import android.widget.RelativeLayout;
import android.widget.TextView;

public class VideoActivity extends BaseActivity{
	
	private ListView video_list;
	private videoAdapter adapter;
	private TextView video_clients;
	private RelativeLayout rl_back;
	private int num;
	
	@Override
	protected void onCreate(Bundle savedInstanceState) {
		requestWindowFeature(Window.FEATURE_NO_TITLE);
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_video);
		initviews();
	}
	
	@Override
	public void onBackPressed() {
		sendBroadcast(new Intent(UIDfineAction.ACTION_TCP_LOGIN_RESPONSE).putExtra(UIDfineAction.RESULT_KEY, 2));
		TcpTools.tcpDisconnection();
		super.onBackPressed();
	}

	private void initviews() {
		video_list = (ListView)findViewById(R.id.video_list);
		video_clients = (TextView) findViewById(R.id.video_bottom);
		rl_back = (RelativeLayout) findViewById(R.id.rl_back);
		adapter = new videoAdapter(this);
		video_list.setAdapter(adapter);
		video_clients.setText("共"+(Arrays.asList(Config.getClient_id().split(",")).size()-1)+"个Client账号");
		rl_back.setOnClickListener(new View.OnClickListener() {  
            public void onClick(View v) {
            	sendBroadcast(new Intent(UIDfineAction.ACTION_TCP_LOGIN_RESPONSE).putExtra(UIDfineAction.RESULT_KEY, 2));
            	TcpTools.tcpDisconnection();
            	finish();
            }  
        });
	}
	
	class videoAdapter extends BaseAdapter{
		private ArrayList<String> clientList = new ArrayList<String>();
		private ArrayList<String> phoneList = new ArrayList<String>();
		private LayoutInflater mInflater;
		private ArrayList<ChildClient> clients = new ArrayList<ChildClient>();
		
		public videoAdapter(Context context) {
			clientList.addAll(Arrays.asList(Config.getClient_id().split(",")));
			phoneList.addAll(Arrays.asList(Config.getMobile().split(",")));
			mInflater = LayoutInflater.from(context);
			CustomLog.i(DfineAction.TAG_TCP, LoginConfig.getCurrentClientId(context));
			int len = clientList.size();
			for(int i=0;i<len;i++){
				if(clientList.get(i).equals(LoginConfig.getCurrentClientId(context))){
					clientList.remove(i);
					num=i;
					break;
				}
			}
			for(int i=0;i<clientList.size();i++){
				ChildClient child = new ChildClient();
				child.setClientid(clientList.get(i));
				clients.add(child);
			}
		}
		
		@Override
		public int getCount() {
			return clientList.size();
		}


		@Override
		public Object getItem(int position) {
			return clientList.get(position);
		}

		@Override
		public long getItemId(int position) {
			return position;
		}

		@SuppressLint("InflateParams") 
		@Override
		public View getView(final int position, View convertView, ViewGroup parent) {
			ViewHolder viewHolder = null;
			if (null == convertView) {
				viewHolder = new ViewHolder();
				convertView = mInflater.inflate(R.layout.listitem_common, null);
				viewHolder.video_list_iv = (ImageView) convertView.findViewById(R.id.common_list_iv);
				viewHolder.video_list_bt = (RelativeLayout) convertView.findViewById(R.id.common_list_rl);
				viewHolder.video_list_tv_client = (TextView) convertView.findViewById(R.id.common_list_tv_client);
				viewHolder.video_list_tv_phone = (TextView) convertView.findViewById(R.id.common_list_tv_phone);
				convertView.setTag(viewHolder);
			} else {
				viewHolder = (ViewHolder) convertView.getTag();
			}
			int pos=position;
			if(num<position || num==position){
				pos++;
			}
			switch(pos){
			case 0:
				viewHolder.video_list_iv.setBackgroundResource(R.drawable.head1_small);
				break;
			case 1:
				viewHolder.video_list_iv.setBackgroundResource(R.drawable.head2_small);
				break;
			case 2:
				viewHolder.video_list_iv.setBackgroundResource(R.drawable.head3_small);
				break;
			case 3:
				viewHolder.video_list_iv.setBackgroundResource(R.drawable.head4_small);
				break;
			case 4:
				viewHolder.video_list_iv.setBackgroundResource(R.drawable.head5_small);
				break;
			case 5:
				viewHolder.video_list_iv.setBackgroundResource(R.drawable.head6_small);
				break;
			}
			viewHolder.video_list_tv_client.setText(clientList.get(position));
			viewHolder.video_list_tv_phone.setText(Config.getMobile(clientList.get(position)));
			
			final String call_client=clientList.get(position);
			viewHolder.video_list_bt.setOnClickListener(new View.OnClickListener() {
				
				@Override
				public void onClick(View v) {
					//无网络或2G网络时不能视频通话
					/*if (!checkNetwork()){
						return;
					}*/
					Intent intent = new Intent(VideoActivity.this, VideoConverseActivity.class); 
					intent.setFlags(Intent.FLAG_ACTIVITY_REORDER_TO_FRONT);
					intent.putExtra("phoneNumber", call_client);
					startActivity(intent);
					notifyDataSetChanged();
				}
			});

			return convertView;
		}
		
		class ViewHolder{
			public ImageView video_list_iv;
			public RelativeLayout video_list_bt;
			public TextView video_list_tv_client;
			public TextView video_list_tv_phone;
		}	
	}
	
	class ChildClient{
		private String clientid="";
		private String phone="";
	
		public String getClientid() {
			return clientid;
		}
		
		public void setClientid(String clientid) {
			this.clientid = clientid;
		}
		
		public String getPhone() {
			return phone;
		}
		
		public void setPhone(String phone) {
			this.phone = phone;
		}
	}
	
	/**
	 * 检查网络，无网络或2G网络时不能视频通话
	 * @return
	 */
	/*private  boolean checkNetwork(){
		int netstate = NetWorkTools.getCurrentNetWorkType(VideoActivity.this);
		
		if(netstate == NetWorkTools.NETWORK_ON){
			Toast.makeText(VideoActivity.this, NETSTATE_ERROR, Toast.LENGTH_SHORT).show();
			return false;
		}else if (netstate == NetWorkTools.NETWORK_EDGE) {
			Toast.makeText(VideoActivity.this, EDGE_ERROR, Toast.LENGTH_SHORT).show();
			return false;
		}
		return true;
	}*/
}
