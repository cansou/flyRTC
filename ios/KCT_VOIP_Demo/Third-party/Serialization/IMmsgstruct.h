#pragma once

#include "iTLVPickle.h"

#define UPDATE_VERSION "2014-03-01:1646"

#ifdef __cplusplus
extern "C" {
#endif

#define IM_TYPE_DEFINE	(1024)
#define IM_FUNC_DEFINE	(19995)

enum {
	eTypeIMMsgEchoInfo = Comm::eTypeSKUserDefine + IM_TYPE_DEFINE,
	eTypeIMBaseRequest,
	eTypeIMBuiltinIP,
	eTypeIMBuiltinIPList,
	eTypeIMCDNDnsInfo,
	eTypeIMAuthRequest,
	eTypeIMRegRequest,
	eTypeIMBaseResponse,
	eTypeIMNetworkControl,
	eTypeIMPluginKey,
	eTypeIMPluginKeyList,
	eTypeIMHost,
	eTypeIMHostList,
	eTypeIMAuthResponse,
	eTypeIMRegResponse,
	eTypeIMUserInfoSetRequest,
	eTypeIMUserInfoSetResponse,
	eTypeIMCmdItem,
	eTypeIMNewInitRequest,
	eTypeIMNewInitResponse,
	eTypeIMSnsUserInfo,
	eTypeIMCustomizedInfo,
	eTypeIMSearchContactRequest,
	eTypeIMSearchContactItem,
	eTypeIMSearchContactResponse,
	eTypeIMVerifyUser,
	eTypeIMVerifyUserRequest,
	eTypeIMVerifyUserResponse,
	eTypeIMPossibleFriend,
	eTypeIMSyncFriendRequest,
	eTypeIMSyncFriendResponse,
	eTypeIMRoomInfo,
	eTypeIMChatRoomMember,
	eTypeIMModContact,
	eTypeIMGetContactRequest,
	eTypeIMGetContactResponse,
	eTypeIMDelContact,
	eTypeIMAuthBySKRequest,
	eTypeIMAuthBySKResponse,
	
	//��Ϣ��� Begin 
	eTypeIMMsgRequest,
	eTypeIMSendMsgRequest,
	eTypeIMMsgResponse,
	eTypeIMSendMsgResponse,
	eTypeIMKeyVal,
	eTypeIMSyncKey,
	//��Ϣ��� End
	
	//ͬ����� Begin
	eTypeIMAddMsg,
	eTypeIMCmdList,
	eTypeIMOpCmdResp,
	eTypeIMOpCmdRespList,
	eTypeIMNewSyncRequest,
	eTypeIMNewSyncResponse,
	eTypeIMSyncRequest,
	eTypeIMSyncResponse,
	//ͬ����� End
	
	// lbs
	eTypeIMLbsRequest,
	eTypeIMLbsContactInfo,
	eTypeIMLbsResponse,
	eTypeIMGetLocationRequest,
	eTypeIMGetLocationResponse,
	eTypeIMLbsMatchRequest,
	eTypeIMLbsMatchResponse,
	eTypeIMSyncLbsMatchRequest,
	eTypeIMSyncLbsMatchResponse,
	eTypeIMLbsMatchContactInfo,

	eTypeIMBatchGetHeadImgRequest,
	eTypeIMImgPair,
	eTypeIMBatchGetHeadImgResponse,
	eTypeIMUploadHDHeadImgRequest,
	eTypeIMUploadHDHeadImgResponse,
	eTypeIMGetHDHeadImgRequest,
	eTypeIMGetHDHeadImgResponse,
	eTypeIMUploadVoiceRequest,
	eTypeIMUploadVoiceResponse,
	eTypeIMDownloadVoiceRequest,
	eTypeIMDownloadVoiceResponse,

	eTypeIMUploadVideoRequest,
	eTypeIMUploadVideoResponse,
	eTypeIMDownloadVideoRequest,
	eTypeIMDownloadVideoResponse,
	eTypeIMUploadMsgImgRequest,
	eTypeIMUploadMsgImgResponse,
	eTypeIMDownloadMsgImgRequest,
	eTypeIMDownloadMsgImgResponse,

	eTypeIMEmojiUploadInfoReq,
	eTypeIMUploadEmojiRequest,
	eTypeIMEmojiUploadInfoResp,
	eTypeIMUploadEmojiResponse,
	eTypeIMEmojiDownloadInfoReq,
	eTypeIMDownloadEmojiRequest,
	eTypeIMEmojiDownloadInfoResp,
	eTypeIMDownloadEmojiResponse,

	//Ⱥ���begin
	eTypeIMModChatRoomNotify,
	eTypeIMModChatRoomMember,
	eTypeIMQuitChatRoom,	
	eTypeIMQuitChatRoomRequest,
	eTypeIMQuitChatRoomResponse,
	eTypeIMSearchChatRoom,	
	eTypeIMSearchChatRoomRequest,
	eTypeIMSearchChatRoomResponse,
	eTypeIMChatRoomResult,
	eTypeIMModChatRoomTopic,
	eTypeIMModGroupTopic,
	eTypeIMModChatRoomMemberDisplayName,
	eTypeIMModChatRoomMemberFlag,

	eTypeIMMemberReq,
	eTypeIMMemberResp,
	eTypeIMDelMemberReq,
	eTypeIMDelMemberResp,
	eTypeIMGroupCardReq,
	eTypeIMCreateChatRoomRequest,
	eTypeIMCreateChatRoomResponse,
	eTypeIMAddChatRoomMemberRequest,	
	eTypeIMAddChatRoomMemberResponse,
	eTypeIMDelChatRoomMemberRequest,
	eTypeIMDelChatRoomMemberResponse,

	eTypeIMLbsChatRoomRequest,
	eTypeIMLbsChatRoom,
	eTypeIMLbsChatRoomResponse,
	eTypeIMVerifyChatRoomMemberRequest,
	eTypeIMVerifyChatRoomMemberResponse,
	eTypeIMInviteChatRoomMemberRequest,
	eTypeIMInviteChatRoomMemberResponse,
	eTypeIMCloseChatRoomRequest,
	eTypeIMCloseChatRoomResponse,
	//Ⱥ���end

	//���������begin
	eTypeIMCreateGroupRequest,
	eTypeIMCreateGroupResponse,
	eTypeIMAddGroupMemberRequest,	
	eTypeIMAddGroupMemberResponse,
	eTypeIMDelGroupMemberRequest,
	eTypeIMDelGroupMemberResponse,
	eTypeIMQuitGroupRequest,
	eTypeIMQuitGroupResponse,
	//���������end

	//GetProfile���begin
	eTypeIMDisturbTimeSpan,
	eTypeIMDisturbSetting,
	eTypeIMGmailInfo,
	eTypeIMGmailList,
	eTypeIMFacebookInfo,
	eTypeIMSafeDevice,
	eTypeIMSafeDeviceList,
	eTypeIMUserInfoExt,
	eTypeIMModUserInfo,
	eTypeIMGetProfileRequest,
	eTypeIMGetProfileResponse,
	eTypeIMUploadCoverImgRequest,
	eTypeIMUploadCoverImgResponse,
	eTypeIMGetCoverImgRequest,
	eTypeIMGetCoverImgResponse,
	eTypeIMHobby,
	eTypeIMBirthday,
	//GetProfile���end

	//newsync���-- add by yihuang
	eTypeIMFunctionSwitch,
	//
	//�ֻ���
	eTypeIMMobileOptRequest,
	eTypeIMMobileOptResponse,
	//�����
	eTypeIMEmailOptRequest,
	eTypeIMEmailOptResponse,
	//��������ϵ���ϴ�
	eTypeIMUploadPlugFriendsRequest,
	eTypeIMUploadPlugFriendsResponse,

	//�����������(Iphone token reg/unreg/sound open/close)
	eTypeIMPushSettingRequest,
	eTypeIMPushSettingResponse,

	//�û��޸��û���
	eTypeIMModUserNameRequest,
	eTypeIMModUserNameResponse,

	//�û��޸�����
	eTypeIMModPwdRequest,
	eTypeIMModPwdResponse,

	//�û�ͨ���ֻ��һ�����
	eTypeIMModPwdByMobileRequest,
	eTypeIMModPwdByMobileResponse,
	//������IP��Ϣ
	eTypeIMWebProxyInfo,
	//add here 1

	//�ٱ�
	eTypeIMReportProfileRequest,
	eTypeIMReportProfileResponse,
	eTypeIMReportGroupRequest,
	eTypeIMReportGroupResponse,
	eTypeIMSendLocationRequest,
	eTypeIMSendLocationResponse,

	eTypeIMSendCustomMsgRequest,
	eTypeIMSendCustomMsgResponse,

	eTypeIMCustomMsgRequest
};

enum {
	eFuncIMMsgSKGetSelfSvnInfo = IM_FUNC_DEFINE,
	eFuncIMMsgSKGetMetainfoFull,
	eFuncIMMsgSKGetMetainfo,
	eFuncIMMsgSKEcho
};

#pragma pack(1)

#if 1

typedef struct tagIMMsgEchoInfo {
	unsigned int iEchoLen;
	char * pcEchoStr;
} IMMsgEchoInfo_t;

//////////////////////// ����/////////////////////////////////////

typedef struct tagIMHobby {
    unsigned int iArtFlag; //Art����Ȥ���ñ�־λ�ĺϼ�����־λ������enMMArtFlag
    unsigned int iSportsFlag; //Sports����Ȥ���ñ�־λ�ĺϼ�����־λ������enMMSportsFlag
    unsigned int iSocialActivitiesFlag; //SocialActivities����Ȥ���ñ�־λ�ĺϼ�����־λ������enMMSocialActivitiesFlag
    unsigned int iTechnologyFlag; //Technology����Ȥ���ñ�־λ�ĺϼ�����־λ������enMMTechnologyFlag
    unsigned int iLifestyleFlag; //Lifestyle����Ȥ���ñ�־λ�ĺϼ�����־λ������enMMLifestyleFlag
} IMHobby_t;

typedef struct tagIMBirthday {
	unsigned int iYear;
	unsigned int iMonth;
	unsigned int iDay;
} IMBirthday_t;


//////////////////////// ע�� & ��¼ ////////////////////////////

typedef struct tagIMBaseRequest {
	char sSessionKey[36];				//SESSION KEY
	unsigned int iUin;					//UIN
	unsigned char cDeviceID[16];		//�豸ID
	int iClientVersion;					//�ͻ��˰汾��
	char sDeviceType[132];				//�豸����
	unsigned int iScene;				//������ʶ�����ο�enSceneStatus�궨�壩
	unsigned int iSeq;
} IMBaseRequest_t;

typedef struct tagIMBuiltinIP {
	unsigned int iType;
	unsigned int iPort;
	char sIP[128];
} IMBuiltinIP_t;

typedef struct tagIMBuiltinIPList {
	unsigned int iLongConnectIPCount;
	unsigned int iShortConnectIPCount;
	unsigned int iSeq;
	IMBuiltinIP_t * ptLongConnectIPList;

	IMBuiltinIP_t * ptShortConnectIPList;
} IMBuiltinIPList_t;

typedef struct tagIMCDNDnsInfo {
	unsigned int iVer;
	unsigned int iUin;
	unsigned int iExpireTime;
	int iFrontID;
	int iFrontIPCount;
	Comm::SKBuiltinString_t * ptFrontIPList;

	char * pcZoneDomain;

	Comm::SKBuiltinBuffer_t tAuthKey;
	int iZoneID;
	int iZoneIPCount;
	Comm::SKBuiltinString_t * ptZoneIPList;
} IMCDNDnsInfo_t;

typedef struct tagIMWebProxyInfo {
	int iIPCount;
	Comm::SKBuiltinString_t * ptIPList;
} IMWebProxyInfo_t;

typedef struct tagIMAuthRequest {
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tAccount;		//�˺�
	Comm::SKBuiltinString_t tPwd;			//���루��ҪMD5���������FB�û�����дTOKEN������ҪMD5��
	char * pcTimeZone;						//ʱ��
	char * pcLanguage;						//�豸����
	char * pcAuthTicket;						
	char * pcRealCountry;						//����
	Comm::SKBuiltinString_t tRandomEncryKey;	//�ͻ��˲��������������Կ
	Comm::SKBuiltinString_t tDevSid;
	Comm::SKBuiltinString_t tDevPwd;
	Comm::SKBuiltinString_t tLoginToken;
} IMAuthRequest_t;

typedef struct tagIMRegRequest {
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tAccount;	//�˺�
	Comm::SKBuiltinString_t tPwd;		//���루��ҪMD5��
	Comm::SKBuiltinString_t tTicket;
	char * pcTimeZone;				//ʱ��
	char * pcLanguage;				//�豸����
	char * pcCountry;					//����
	Comm::SKBuiltinString_t tRandomEncryKey;	//�ͻ��˲��������������Կ
} IMRegRequest_t;

typedef struct tagIMBaseResponse {
	int iRet;
	Comm::SKBuiltinString_t tErrMsg;
	unsigned int iSeq;
} IMBaseResponse_t;

typedef struct tagIMNetworkControl {
	char * pcPortList;

	char * pcTimeoutList;
} IMNetworkControl_t;

typedef struct tagIMPluginKey {
	char * pcKey;

	unsigned int iId;
} IMPluginKey_t;

typedef struct tagIMPluginKeyList {
	unsigned int iCount;
	IMPluginKey_t * ptList;
} IMPluginKeyList_t;

typedef struct tagIMHost {
	char * pcOrigin;

	char * pcSubstitute;
} IMHost_t;

typedef struct tagIMHostList {
	unsigned int iCount;
	IMHost_t * ptList;
} IMHostList_t;

typedef struct tagIMAuthResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iUin;							//UIN
	Comm::SKBuiltinString_t tUserName;			//�û���
	Comm::SKBuiltinString_t tNickName;			//�ǳ�
	Comm::SKBuiltinString_t tBindEmail;
	Comm::SKBuiltinString_t tBindMobile;
	unsigned int iStatus;
	char sSessionKey[36];						//SESSION KEY
	Comm::SKBuiltinBuffer_t tImgBuf;			//ͷ��BUFF
	unsigned int iNewVersion;					//�°汾��Ϣ��0���ʾ�Ѿ�������
	unsigned int iRegType;						//ע������
	unsigned int iProfileFlag;
	unsigned int iUserSex;						//�Ա𣨲���enMMSexType�궨�壩
	unsigned int iUserStatus;					//�û�״̬enUserStatus
	Comm::SKBuiltinString_t tFirstName;			
	Comm::SKBuiltinString_t tLastName;	
	IMBirthday_t tBirthday;
	IMWebProxyInfo_t tWebProxyInfo;            //������IP��Ϣ
	Comm::SKBuiltinString_t tSafeUserName;		//Safe�û���
	Comm::SKBuiltinString_t tClientNumber;
	Comm::SKBuiltinString_t tAppid;
} IMAuthResponse_t;

typedef struct tagIMRegResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iUin;							//UIN
	char sSessionKey[36];						//SESSION KEY
	char * pcUserName;						//UserName
} IMRegResponse_t;


//////////////////////////////////////////////////////////////////////////////
typedef struct tagIMModUserNameRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcUserName;
} IMModUserNameRequest_t;

typedef struct tagIMModUserNameResponse{
	IMBaseResponse_t tBaseResponse;
} IMModUserNameResponse_t;

typedef struct tagIMModPwdRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcOldPwd;
	char * pcNewPwd;
} IMModPwdRequest_t;

typedef struct tagIMModPwdResponse{
	IMBaseResponse_t tBaseResponse;
} IMModPwdResponse_t;

typedef struct tagIMModPwdByMobileRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcMobile;
	char * pcTicket;
	char * pcNewPwd;
	Comm::SKBuiltinString_t tRandomEncryKey;//�ͻ��˲��������������Կ
} IMModPwdByMobileRequest_t;

typedef struct tagIMModPwdByMobileResponse{
	IMBaseResponse_t tBaseResponse;
} IMModPwdByMobileResponse_t;

typedef struct tagIMMobileOptRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcCountryCode;
	char * pcMobile;
	int iOptCode;
	char * pcVerifycode;
	Comm::SKBuiltinString_t tRandomEncryKey;//�ͻ��˲��������������Կ
} IMMobileOptRequest_t;

typedef struct tagIMMobileOptResponse {
	IMBaseResponse_t tBaseResponse;
	int iOptCode;
	char * pcTicket;
} IMMobileOptResponse_t;

typedef struct tagIMEmailOptRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcEmail;
	int iOptCode;
	char * pcVerifyCode;
	Comm::SKBuiltinString_t tRandomEncryKey;//�ͻ��˲��������������Կ
} IMEmailOptRequest_t;

typedef struct tagIMEmailOptResponse {
	IMBaseResponse_t tBaseResponse;
	int iOptCode;
} IMEmailOptResponse_t;

typedef struct tagIMUploadPlugFriendsRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iOptCode;						
	unsigned int iFriendType;
	unsigned int iFriendCount;
	Comm::SKBuiltinString_t * pcFriendBuffer;
} IMUploadPlugFriendsRequest_t;

typedef struct tagIMUploadPlugFriendsResponse {
	IMBaseResponse_t tBaseResponse;
} IMUploadPlugFriendsResponse_t;

typedef struct tagIMPushSettingRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iOptCode;						//�ο�enIMPushSetOptö�ٶ���
	char * pcToken;							//Token
	char * pcSound;							//��Ϊ��
	unsigned int iStatus;						//��0
	char * pcVoipSound;						//��Ϊ��
    unsigned int isDev;
} IMPushSettingRequest_t;

typedef struct tagIMPushSettingResponse {
	IMBaseResponse_t tBaseResponse;
} IMPushSettingResponse_t;
//////////////////////////////////////////////////////////////////////////////


/////////////////////// ��ʼ������ϵ���б�/������Ϣ�ȵȣ� /////////////////////////////

typedef struct tagIMCmdItem {
	int iCmdId;
	Comm::SKBuiltinBuffer_t tCmdBuf;
} IMCmdItem_t;

typedef struct tagIMNewInitRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcUserName;	//����

	Comm::SKBuiltinBuffer_t tCurrentSynckey;	//��ǰkeyֵ�� �����һ�θ���ʱΪ0��֮�����˷�����Ӧֵ
	Comm::SKBuiltinBuffer_t tMaxSynckey;		//���keyֵ�� �����һ�θ���ʱΪ0��֮�����˷�����Ӧֵ
	char * pcLanguage;							//�������ͣ����������˷��ص���������
} IMNewInitRequest_t;

typedef struct tagIMNewInitResponse {
	IMBaseResponse_t tBaseResponse;
	Comm::SKBuiltinBuffer_t tCurrentSynckey;
	Comm::SKBuiltinBuffer_t tMaxSynckey;
	unsigned int iContinueFlag;			// �Ƿ����ͬ����0��ʾ���ã�����ֵ����Ҫ��iContinueFlag | MM_SYNC_CONTINUE = 1��ʾcontact��Ҫͬ��
	unsigned int iSelectBitmap;			// ���µ���Ŀ��λ���� iSelectBitmap = ��(1<<6) - 1��^ (1 << (eMMSeqMsg-1)) ^ (1 << ( eMMSeqWXContact - 1 )) ^ (1 << ( eMMSeqProfile - 1 ))
	unsigned int iCmdCount;
	IMCmdItem_t * ptCmdList;			

	unsigned int iRatio;				// ͬ�����ʣ� ����maxkey=10, curKey=5, �����Ϊ50.  ��cli_cur_key * 100 / cli_max_key;��
} IMNewInitResponse_t;

typedef struct tagIMKeyVal {
	unsigned int iKey;				// ���� 1:userProfile 2:msg 3:contact ��ʱֻ��3
	unsigned int iVal;				// ֵ
} IMKeyVal_t;

typedef struct tagIMSyncKey {
	unsigned int iKeyCount;
	IMKeyVal_t * ptKey;
} IMSyncKey_t;

///////////////////////// ������ϵ�� //////////////////////////

typedef struct tagIMSnsUserInfo {
	unsigned int iSnsFlag;
	char * pcSnsBGImgID;

	unsigned long long llSnsBGObjectID;
	unsigned int iSnsFlagEx;
} IMSnsUserInfo_t;

typedef struct tagIMCustomizedInfo {
	unsigned int iBrandFlag;
	char * pcExternalInfo;

	char * pcBrandInfo;

	char * pcBrandIconURL;
} IMCustomizedInfo_t;

typedef struct tagIMSearchContactRequest {
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tUserName;	// �û���������
} IMSearchContactRequest_t;

typedef struct tagIMSearchContactItem {
	Comm::SKBuiltinString_t tUserName;
	Comm::SKBuiltinString_t tNickName;
	Comm::SKBuiltinString_t tPYInitial;
	Comm::SKBuiltinString_t tQuanPin;
	int iSex;
	Comm::SKBuiltinBuffer_t tImgBuf;
	char * pcProvince;

	char * pcCity;

	char * pcSignature;

	unsigned int iPersonalCard;
	unsigned int iVerifyFlag;
	char * pcVerifyInfo;
	int  iNeedVerify;	// �Ƿ���Ҫ��֤  0:����Ҫ  1:��Ҫ

	char * pcWeibo;

	char * pcAlias;

	char * pcWeiboNickname;

	unsigned int iWeiboFlag;
	int iAlbumStyle;
	int iAlbumFlag;
	char * pcAlbumBGImgID;

	IMSnsUserInfo_t tSnsUserInfo;
	char * pcCountry;

	char * pcMyBrandList;

	IMCustomizedInfo_t tCustomizedInfo;
	char * pcBigHeadImgUrl;

	char * pcSmallHeadImgUrl;

	Comm::SKBuiltinString_t tSafeUserName;
} IMSearchContactItem_t;

typedef struct tagIMSearchContactResponse {
	IMBaseResponse_t tBaseResponse;
	Comm::SKBuiltinString_t tUserName;	// �������ĵ�һ���û��� ���������Խ�Ϊ��һ���û����ԣ���IMSearchContactItem_t�⣩
	Comm::SKBuiltinString_t tNickName;
	Comm::SKBuiltinString_t tPYInitial;
	Comm::SKBuiltinString_t tQuanPin;
	int iSex;
	Comm::SKBuiltinBuffer_t tImgBuf;
	char * pcProvince;

	char * pcCity;

	char * pcSignature;

	unsigned int iPersonalCard;
	unsigned int iVerifyFlag;
	char * pcVerifyInfo;
	int  iNeedVerify;	// �Ƿ���Ҫ��֤  0:����Ҫ  1:��Ҫ

	char * pcWeibo;

	char * pcAlias;

	char * pcWeiboNickname;

	unsigned int iWeiboFlag;
	int iAlbumStyle;
	int iAlbumFlag;
	char * pcAlbumBGImgID;

	IMSnsUserInfo_t tSnsUserInfo;
	char * pcCountry;

	char * pcMyBrandList;

	IMCustomizedInfo_t tCustomizedInfo;
	unsigned int iContactCount;
	IMSearchContactItem_t * ptContactList;		// �����������û�����1ʱ�����б����ֵ��

	char * pcBigHeadImgUrl;

	char * pcSmallHeadImgUrl;

	Comm::SKBuiltinString_t tSafeUserName;
} IMSearchContactResponse_t;

///////////////////////// ������֤ ///////////////////////////

typedef struct tagIMVerifyUser {
	char * pcValue;

	char * pcVerifyUserTicket;
} IMVerifyUser_t;

typedef struct tagIMVerifyUserRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iOpcode;
	unsigned int iVerifyUserListSize;
	IMVerifyUser_t * ptVerifyUserList;

	char * pcVerifyContent;

	unsigned int iSceneListCount;
	unsigned int * piSceneList;
} IMVerifyUserRequest_t;

typedef struct tagIMVerifyUserResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iOpcode;	//�ͻ����Ϸ���iOpcode
	char*  pcUserName;		//�������ptVerifyUserList�ĵ�һ���û�����
} IMVerifyUserResponse_t;

///////////////////////// ɾ������ ///////////////////////////

typedef struct tagIMDelContact {
	Comm::SKBuiltinString_t tUserName; 
} IMDelContact_t;

////////////////////////// ����ͬ�� /////////////////////////

typedef struct tagIMSyncFriendRequest {
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tUserName;
	unsigned int iSyncKey;
	int iScene;
} IMSyncFriendRequest_t;

typedef struct tagIMSyncFriendResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iNewSyncKey;
	int iContinueFlag; // ͬ�����Ϊ�� | MM_NEWSYNC_FRIENDΪ1��ʾ��Ҫ����ͬ��
	unsigned int iCmdCount;
	IMCmdItem_t * ptCmdList;
} IMSyncFriendResponse_t;

// IMSyncFriendResponse_t��ptCmdList����ת�ɸø�ʽ
typedef struct tagIMPossibleFriend {
	char * pcUserName;
	char * pcNickName;
	char * pcPYInitial;
	char * pcQuanPin;
	int iSex;
	unsigned int iImgFlag;
	unsigned int iContactType;
	char * pcDomainList;
	char * pcSource;
	unsigned int iFriendScene;
	char * pcThirdID;
	int iNeedVerify; // �Ƿ���Ҫ��֤
	char* pcFBUserName;
} IMPossibleFriend_t;

////////////////////////// ��ȡ��ϵ����ϸ��Ϣ //////////////////////////
typedef struct tagIMRoomInfo {
	Comm::SKBuiltinString_t tUserName;
	Comm::SKBuiltinString_t tNickName;
} IMRoomInfo_t;

typedef struct tagIMChatRoomMember
{	
	Comm::SKBuiltinString_t tMemberName;
	Comm::SKBuiltinString_t tMemberSafeName;
	Comm::SKBuiltinString_t tNickName;
	int iSex;
	char * pcSignature;		
	char * pcCountry;
	IMBirthday_t tBirthday; //����
} IMChatRoomMember_t;
/*
typedef struct tagIMModContact1 {
	Comm::SKBuiltinString_t tUserName;				//�û�����ʹ���û���ͨ��BatchHeadImg��������ȡ����ͷ��
	Comm::SKBuiltinString_t tNickName;				//�ǳ�
	Comm::SKBuiltinString_t tPYInitial;
	Comm::SKBuiltinString_t tQuanPin;
	int iSex;										//�Ա�
	Comm::SKBuiltinBuffer_t tImgBuf;
	unsigned int iBitMask;
	unsigned int iBitVal;
	unsigned int iImgFlag;
	Comm::SKBuiltinString_t tRemark;
	Comm::SKBuiltinString_t tRemarkPYInitial;
	Comm::SKBuiltinString_t tRemarkQuanPin;
	unsigned int iContactType;						//�������ͣ��ο�enIMContactType�꣬���ڶ���Ĭ��ֵIM_CONTACT_IM��
	unsigned int iRoomMemberCount;					// Ⱥ��Ա��
	IMChatRoomMember_t * ptRoomMemberList;			// Ⱥ��Ա�б�

	Comm::SKBuiltinString_t tDomainList;			
	unsigned int iChatRoomNotify;					
	unsigned int iAddContactScene;					
	char * pcProvince;

	char * pcCity;									//����

	char * pcSignature;

	unsigned int iPersonalCard;
	unsigned int iHasWeiXinHdHeadImg;
	unsigned int iVerifyFlag;						//��֤��־
	char * pcVerifyInfo;

	int iLevel;
	unsigned int iSource;
	char * pcWeibo;

	char * pcVerifyContent;							//

	char * pcAlias;

	char * pcChatRoomOwner;

	char * pcWeiboNickname;

	unsigned int iWeiboFlag;
	int iAlbumStyle;
	int iAlbumFlag;
	char * pcAlbumBGImgID;

	IMSnsUserInfo_t tSnsUserInfo;					//����Ȧ��ҳ��Ϣ����ʱ���ã�
	char * pcCountry;								//����

	char * pcBigHeadImgUrl;							//��ͷ��CND����ʱ�գ�

	char * pcSmallHeadImgUrl;						//Сͷ��CND����ʱ�գ�

	char * pcMyBrandList;							

	IMCustomizedInfo_t tCustomizedInfo;			
	char * pcChatRoomData;							

	char * pcHeadImgMd5;							//ͷ���MD5�루ûɶ���壩
	
	Comm::SKBuiltinString_t tSafeUserName;			//SafeUserName
	IMBirthday_t tBirthday; //����
	unsigned int iAge; //���䣬�������ռ���
	IMHobby_t tHobby; //��Ȥ����
	unsigned int iIntentionFlag; //������Ը��������enMMIntentionFlag
	unsigned int iMaxMemberCount; // Ⱥ��Ա����
	char * pcMobile;
	unsigned long long llFBUserID;
} IMModContact1_t;
*/
typedef struct tagIMModContact {
	Comm::SKBuiltinString_t tUserName;		// �û�����ʹ���û���ͨ��BatchHeadImg��������ȡ����ͷ��
	Comm::SKBuiltinString_t tNickName;		// �ǳ�
	Comm::SKBuiltinString_t tPYInitial;		// �ǳ�ƴ������ĸ
	Comm::SKBuiltinString_t tQuanPin;		// �ǳ�ȫƴ
	int iSex;								// �Ա�
	unsigned int iBitMask;					// ��ϵ����λ
	unsigned int iBitVal;					// ��ϵ����ֵ
	Comm::SKBuiltinString_t tRemark;		// ��ע
	Comm::SKBuiltinString_t tRemarkPYInitial;	// ��ע����ĸ
	Comm::SKBuiltinString_t tRemarkQuanPin;		// ��עȫƴ
	unsigned int iContactType;				// �������ͣ��ο�enIMContactType�꣬���ڶ���Ĭ��ֵIM_CONTACT_IM��
	unsigned int iSource;					// �������;��
	char * pcSignature;						// ǩ��
	char * pcHeadImgMd5;					// Сͷ��MD5��
	char * pcCoverImgMD5;					// ����MD5
	char * pcCountry;						// ����
	char * pcProvince;						// ʡ��
	char * pcCity;							// ���� (Ŀǰ��ַ�ֶ�)
	int iVerifyFlag;						// ��֤��־										
	Comm::SKBuiltinString_t tSafeUserName;	// SafeUserName
	IMBirthday_t tBirthday; 				// ����
	char * pcMobile;						// �ֻ��ţ��Ǻ��ѣ������/ע����ֻ������û����ֻ�ͨѶ¼��ʱ���Ż��·���
	unsigned long long llFBUserID;			// facebook ID

	unsigned int iRoomMemberCount;			// Ⱥ��Ա��
	IMChatRoomMember_t * ptRoomMemberList;	// Ⱥ��Ա�б�			
	char * pcChatRoomOwner;					// Ⱥ��Username
	unsigned int iMaxMemberCount; 			// Ⱥ���Ա����
	int iType;								// Ⱥ����
	float fLongitude; 						// ȺGPS����
	float fLatitude; 						// ȺGPSγ��
} IMModContact_t;

typedef struct tagIMGetContactRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iUserCount;
	Comm::SKBuiltinString_t * ptUserNameList;
} IMGetContactRequest_t;

typedef struct tagIMGetContactResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iContactCount;
	IMModContact_t * ptContactList;

	int * piRet;
} IMGetContactResponse_t;

////////////////////////// ����֮���Զ���½ //////////////////////////

typedef struct tagIMAuthBySKRequest {
	IMBaseRequest_t tBaseRequest;				//iScene�ֶ� ��дMM_SCENE_REAUTH
} IMAuthBySKRequest_t;

typedef struct tagIMAuthBySKResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iUin;							//Uin(�ͻ����õõ����ã��ò������Բ����)
	unsigned int iNewVersion;					//�°汾��Ϣ
	IMWebProxyInfo_t tWebProxyInfo;            //������IP��Ϣ
	unsigned int iSysTime;					//ʱ���
} IMAuthBySKResponse_t;


////////////////////////// ��ȡͷ�� ////////////////////////////
typedef struct tagIMBatchGetHeadImgRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iCount;						//���������֧��������ȡ��
	Comm::SKBuiltinString_t * ptUserNameList;	//�û����б�
} IMBatchGetHeadImgRequest_t;

typedef struct tagIMImgPair {
	Comm::SKBuiltinBuffer_t tImgBuf;			//ͷ��BUFF
	Comm::SKBuiltinString_t tUsername;			//�û���
} IMImgPair_t;

typedef struct tagIMBatchGetHeadImgResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iCount;						//ͷ�����
	IMImgPair_t * ptImgPairList;				//ͷ����Ϣ
} IMBatchGetHeadImgResponse_t;

//////////////////////////// �޸�ͷ����ʱ��ʹ�ã� //////////////////////////
typedef struct tagIMModifyHeadImgRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcUserName;							//�û���
	Comm::SKBuiltinBuffer_t tImgBuf;			//ͷ��BUFF
} IMModifyHeadImgRequest_t;

typedef struct tagIMModifyHeadImgResponse {
	IMBaseResponse_t tBaseResponse;
} IMModifyHeadImgResponse_t;

///////////////////////////// �ϴ�����ͷ�� ///////////////////////////
typedef struct tagIMUploadHDHeadImgRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iTotalLen;						//�ܴ�С
	unsigned int iStartPos;						//��ʼλ��
	unsigned int iHeadImgType;					//���ͣ��ο�enIMHeadImgType�궨�壩
	Comm::SKBuiltinBuffer_t tData;				//BUFF(����+���ݳ���)
	char * pcImgHash;							//IM_HEADIMG#UserName#time(null)

	char * pcUserName;							//�û���

	char * pcMD5;								//<MD5>
	char * pcCDNImgUrl;							//CND ͷ��URL �ݲ���
	char * pcAESKey;							//CND ��Կ
	int iEncryVer;								//CND ���
	int iCDNImgSize;							//�ϴ���CND��ͷ�����ݴ�С
} IMUploadHDHeadImgRequest_t;

typedef struct tagIMUploadHDHeadImgResponse {
	IMBaseResponse_t tBaseResponse;			
	unsigned int iTotalLen;						//�ܴ�С
	unsigned int iStartPos;						//��һ��������ʼλ��

	char * pcFinalImgMd5sum;					//<MD5>
	char * pcImgHash;							//(Req)
} IMUploadHDHeadImgResponse_t;

////////////////////////////// ���ظ���ͷ�� /////////////////////////////
typedef struct tagIMGetHDHeadImgRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcUserName;							//�û���

	unsigned int iImgWidth;						//�ͻ���ָ�����
	unsigned int iImgHeight;					//�ͻ���ָ���߶�
	char * pcImgFormat;							//�ͻ���ָ����ʽ

	unsigned int iTotalLen;						//�ܴ�С����һ������0��
	unsigned int iStartPos;						//��ʼλ�ã���һ������0��
	unsigned int iHeadImgType;					//���ͣ��ο�enIMHeadImgType�궨�壩
} IMGetHDHeadImgRequest_t;

typedef struct tagIMGetHDHeadImgResponse {
	IMBaseResponse_t tBaseResponse;
	char * pcUserName;							//�û���

	unsigned int iTotalLen;						//�ܴ�С
	unsigned int iStartPos;						//(Req)
	Comm::SKBuiltinBuffer_t tData;				//BUFF(����+���ݳ���)
} IMGetHDHeadImgResponse_t;

///////////////////////////// �ϴ����� ///////////////////////////
typedef struct tagIMUploadVoiceRequest {
	char * pcFromUserName;					//�����û�

	char * pcToUserName;					//Ŀ���û����û������߷�������

	unsigned int iOffset;					//��ʼλ�ã���һ������0��
	unsigned int iLength;					//��ǰBUFF����
	char * pcClientMsgId;					//IM_VOICE#FromeUserName#ToUser Name#time(NULL)

	unsigned int iMsgId;					//��һ������0�������İ���д���������ص�ID��
	unsigned int iVoiceLength;				//ʱ�䳤��
	Comm::SKBuiltinBuffer_t tData;			//����BUFF
	unsigned int iEndFlag;					//������־��MM_VOICE_UPLOADING|MM_VOICE_UPLOADEND��
	IMBaseRequest_t tBaseRequest;
	unsigned int iCancelFlag;				//ȡ����־��ȡ������=1������=0��
	char * pcMsgSource;						

	unsigned int iVoiceFormat;				//������ʽ
	unsigned int iUICreateTime;				//ʱ���
	unsigned int iForwardFlag;				//��0
} IMUploadVoiceRequest_t;

typedef struct tagIMUploadVoiceResponse {
	char * pcFromUserName;					//��Req��

	char * pcToUserName;					//��Req��

	unsigned int iOffset;					//��һ��������ʼλ��
	unsigned int iLength;					//��Req��
	unsigned int iCreateTime;				//��ʱ����
	char * pcClientMsgId;					//��Req��

	unsigned int iMsgId;					//������������MsgId
	unsigned int iVoiceLength;				//��Req��
	unsigned int iEndFlag;					//��Req��
	IMBaseResponse_t tBaseResponse;		
	unsigned int iCancelFlag;				//��Req��
} IMUploadVoiceResponse_t;

//////////////////////// �������� /////////////////////////

typedef struct tagIMDownloadVoiceRequest {
	unsigned int iMsgId;					//������notify��msgId
	unsigned int iOffset;					//��ʼλ��
	unsigned int iLength;					//���󳤶�
	char * pcClientMsgId;					//������notify��ClientMsgId

	IMBaseRequest_t tBaseRequest;			
} IMDownloadVoiceRequest_t;

typedef struct tagIMDownloadVoiceResponse {
	unsigned int iMsgId;					//��req��
	unsigned int iOffset;					//��req��
	unsigned int iLength;					//ʵ�ʳ���
	unsigned int iVoiceLength;				//���ų���
	char * pcClientMsgId;					//ClientMsgId

	Comm::SKBuiltinBuffer_t tData;			//����BUFF
	unsigned int iEndFlag;					//������־
	IMBaseResponse_t tBaseResponse;
	unsigned int iCancelFlag;				//ȡ����־
} IMDownloadVoiceResponse_t;

///////////////////////// �ϴ���Ƶ //////////////////////////
typedef struct tagIMUploadVideoRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcClientMsgId;					//IM_VOICE#FromeUserName#ToUserName#time(NULL)

	char * pcFromUserName;					//�������û���

	char * pcToUserName;					//�������û���

	unsigned int iThumbTotalLen;			//����ͼ�ܴ�С
	unsigned int iThumbStartPos;			//����ͼ������ʼλ��
	Comm::SKBuiltinBuffer_t tThumbData;		//����ͼ���ݣ�����+��С��
	unsigned int iVideoTotalLen;			//��Ƶ�����ܴ�С
	unsigned int iVideoStartPos;			//��Ƶ������ʼλ��
	Comm::SKBuiltinBuffer_t tVideoData;		//��Ƶ���ݣ�����+��С��
	unsigned int iPlayLength;				//��Ƶ���ų���
	unsigned int iNetworkEnv;				//��ʱ�ò���
	unsigned int iCameraType;				//��ʱ�ò���
	unsigned int iFuncFlag;					//��ʱ�ò���
	char * pcMsgSource;						//��ʱ�ò���

	char * pcCDNVideoUrl;					//CDN URL

	char * pcAESKey;						//CDN KEY

	int iEncryVer;							//CDN��ز���
} IMUploadVideoRequest_t;

typedef struct tagIMUploadVideoResponse {
	IMBaseResponse_t tBaseResponse;
	char * pcClientMsgId;					//(Req)

	unsigned int iMsgId;					//���������ɵ�msgId
	unsigned int iThumbStartPos;			//��һ��������ʼλ��
	unsigned int iVideoStartPos;			//��һ��������ʼλ��
} IMUploadVideoResponse_t;

///////////////////////// ������Ƶ //////////////////////////////////

typedef struct tagIMDownloadVideoRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iMsgId;
	unsigned int iTotalLen;
	unsigned int iStartPos;
	unsigned int iNetworkEnv;
	unsigned int iMxPackSize;
} IMDownloadVideoRequest_t;

typedef struct tagIMDownloadVideoResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iMsgId;
	unsigned int iTotalLen;
	unsigned int iStartPos;
	Comm::SKBuiltinBuffer_t tData;
} IMDownloadVideoResponse_t;


typedef struct tagIMSendLocationRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcClientMsgId;	
	char * pcFromUserName;
	char * pcToUserName;
	char * pcContent;
	unsigned int iTotalLen;						//�ܴ�С
	unsigned int iStartPos;						//��ʼλ��
	unsigned int iDataLen;						//�ò�������0
	Comm::SKBuiltinBuffer_t tData;				//BUFF������+���ݳ��ȣ�
	char * pcMsgSource;
	char * pcMD5;								//<MD5>
} IMSendLocationRequest_t;

typedef struct tagIMSendLocationResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iMsgId;						//MsgId
	char * pcClientMsgId;						//(Req)
	char * pcFromUserName;						//(Req)
	char * pcToUserName;						//(Req)
	unsigned int iTotalLen;						//(Req)
	unsigned int iStartPos;						//��һ��������ʼλ��
	unsigned int iDataLen;						//(Req��
	unsigned int iCreateTime;					//��������֮�������ʱ���
} IMSendLocationResponse_t;


///////////////////////// �ϴ���ϢͼƬ /////////////////////////////

typedef struct tagIMUploadMsgImgRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcClientMsgId;						//IM_MSGIMG#FromUserName#ToUserName#time(NULL)
	char * pcFromUserName;
	char * pcToUserName;
	unsigned int iTotalLen;						//�ܴ�С
	unsigned int iStartPos;						//��ʼλ��
	unsigned int iDataLen;						//�ò�������0
	Comm::SKBuiltinBuffer_t tData;				//BUFF������+���ݳ��ȣ�
	unsigned int iMsgType;						//��ϢͼƬ������
	char * pcMsgSource;

	unsigned int iCompressType;					//�Ƿ���ԭͼ���ͣ�MM_MSGIMG_WITH_COMPRESS(����ԭͼ)|MM_MSGIMG_WITHOUT_COMPRESS��ԭͼ��
	int iNetType;								//�ݲ���
	int iPhotoFrom;								//�ݲ���
	char * pcMediaId;							//�ݲ���

	char * pcCDNBigImgUrl;						//CDN ԭͼURL ��ʱ��

	char * pcCDNMidImgUrl;						//CND ��ͼURL �ݲ���

	char * pcAESKey;							//CND ��Կ

	int iEncryVer;								//CND ���
	int iCDNBigImgSize;							//�ϴ���CND��ԭͼ���ݴ�С
	int iCDNMidImgSize;							//�ϴ���CND�Ĵ�ͼ���ݴ�С
	char * pcMD5;								//<MD5>
} IMUploadMsgImgRequest_t;

typedef struct tagIMUploadMsgImgResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iMsgId;						//MsgId
	char * pcClientMsgId;						//(Req)
	char * pcFromUserName;						//(Req)
	char * pcToUserName;						//(Req)
	unsigned int iTotalLen;						//(Req)
	unsigned int iStartPos;						//��һ��������ʼλ��
	unsigned int iDataLen;						//(Req��
	unsigned int iCreateTime;					//��������֮�������ʱ���
} IMUploadMsgImgResponse_t;

////////////////////////// ������ϢͼƬ///////////////////////

typedef struct tagIMDownloadMsgImgRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iMsgId;						//MsgId
	char * pcFromUserName;						
	char * pcToUserName;						
	unsigned int iTotalLen;						//�ܳ��ȣ���һ����Ϊ0��
	unsigned int iStartPos;						//��ʼλ�ã���һ��Ϊ0��
	unsigned int iDataLen;						//�ò�������0
	unsigned int iCompressType;					//�Ƿ��б��������MM_MSGIMG_WITH_COMPRESS|MM_MSGIMG_WITHOUT_COMPRESS
} IMDownloadMsgImgRequest_t;

typedef struct tagIMDownloadMsgImgResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iMsgId;						//(Req)
	char * pcFromUserName;						//(Req)
	char * pcToUserName;						//(Req)
	unsigned int iTotalLen;						//�ܴ�С
	unsigned int iStartPos;						//(Req)	
	unsigned int iDataLen;						//(Req)
	Comm::SKBuiltinBuffer_t tData;				//BUFF������+���ݳ��ȣ�
} IMDownloadMsgImgResponse_t;

////////////////////////////��ͼ���Զ�����飩//////////////////////////////

typedef struct tagIMEmojiUploadInfoReq {
	char * pcMD5;								//�����MD5��(�ͻ��˼���õ�)

	int iStartPos;								//��ʼλ��
	int iTotalLen;								//�ܴ�С
	Comm::SKBuiltinBuffer_t tEmojiBuffer;		//BUFF������+���ݴ�С��
	int iType;									//�̶���MM_DATA_EMOJI
	char * pcToUserName;						//ToUser

	char * pcExternXML;							//�Ըñ��������

	char * pcReport;							//����

	char * pcClientMsgID;						//IM_EMOJI#FromUserName#ToUserName#time(null)
} IMEmojiUploadInfoReq_t;

typedef struct tagIMUploadEmojiRequest {		
	IMBaseRequest_t tBaseRequest;
	int iEmojiItemCount;						//��1��֧�ֶ��ļ��ϴ����ͻ�������Ӧ�����ò�����
	IMEmojiUploadInfoReq_t * ptEmojiItem;		//���������Ϣ
} IMUploadEmojiRequest_t;

typedef struct tagIMEmojiUploadInfoResp {
	int iRet;									//RespCode
	int iStartPos;								//��һ��������ʼλ��
	int iTotalLen;								//(Req)
	char * pcMD5;								//(Req)
	char * pcClientMsgID;						//(Req)
	unsigned int iMsgID;						//��������������֮�������MsgId
} IMEmojiUploadInfoResp_t;

typedef struct tagIMUploadEmojiResponse {
	IMBaseResponse_t tBaseResponse;
	int iEmojiItemCount;						//(Req)
	IMEmojiUploadInfoResp_t * ptEmojiItem;		//������Ϣ
} IMUploadEmojiResponse_t;

typedef struct tagIMEmojiDownloadInfoReq {
	char * pcID;								//Content�е�idbuffer�ض�	������Զ���������			

	int iStartPos;								//��ʼλ��(��һ����Ϊ0)
	int iTotalLen;								//�ܴ�С(��һ����Ϊ0)
	char * pcMD5;								//����MD5��(Content���ֶ���) ��ٷ��������
} IMEmojiDownloadInfoReq_t;

typedef struct tagIMDownloadEmojiRequest {		//Ҳ���û�����ٷ������
	IMBaseRequest_t tBaseRequest;
	int iEmojiItemCount;						//�������
	IMEmojiDownloadInfoReq_t * ptEmojiItem;	//������Ϣ
} IMDownloadEmojiRequest_t;

typedef struct tagIMEmojiDownloadInfoResp {
	int iRet;									//RespCode
	int iStartPos;								//(Req)
	int iTotalLen;								//�ܴ�С
	Comm::SKBuiltinBuffer_t tEmojiBuffer;		//BUFF(����+���ݴ�С)
	char * pcMD5;								//(Req)

	char * pcID;								//(Req)
} IMEmojiDownloadInfoResp_t;

typedef struct tagIMDownloadEmojiResponse {
	IMBaseResponse_t tBaseResponse;			
	int iEmojiItemCount;						//(Req)
	IMEmojiDownloadInfoResp_t * ptEmojiItem;	//������Ϣ
} IMDownloadEmojiResponse_t;

////////////////////////// ������Ϣ Begin //////////////////////////


typedef struct tagIMMsgRequest {
	Comm::SKBuiltinString_t tFromUserName;
	Comm::SKBuiltinString_t tToUserName;
	unsigned int iType;
	char * pcContent;

	unsigned int iCreateTime;
	char * pcClientMsgId;

	char * pcMsgSource;

	unsigned int iEmojiFlag;
} IMMsgRequest_t;


typedef struct tagIMSendMsgRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iCount;
	IMMsgRequest_t * ptList;
} IMSendMsgRequest_t;

typedef struct tagIMMsgResponse {
	int iRet;
	Comm::SKBuiltinString_t tFromUserName;
	Comm::SKBuiltinString_t tToUserName;
	unsigned int iMsgId;
	char * pcClientMsgId;

	unsigned int iCreateTime;
	unsigned int iType;
} IMMsgResponse_t;

typedef struct tagIMSendMsgResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iCount;
	IMMsgResponse_t * ptList;
} IMSendMsgResponse_t;




typedef struct tagIMCustomMsgRequest {
	Comm::SKBuiltinString_t tFromUserName;
	Comm::SKBuiltinString_t tToUserName;
	unsigned int iType;
	Comm::SKBuiltinBuffer_t tData;
	unsigned int iCreateTime;
	char * pcClientMsgId;
	char * pcMsgSource;
} IMCustomMsgRequest_t;


typedef struct tagIMSendCustomMsgRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iCount;
	IMCustomMsgRequest_t * ptList;
} IMSendCustomMsgRequest_t;

typedef struct tagIMMsgResponse  IMCustomMsgResponse_t;

typedef struct tagIMSendMsgResponse IMSendCustomMsgResponse_t;


////////////////////////// ������Ϣ End //////////////////////////



////////////////////////// ͬ����Ϣ Begin //////////////////////////

typedef struct tagIMAddMsg {
	int iMsgId;
	Comm::SKBuiltinString_t tFromUserName;
	Comm::SKBuiltinString_t tToUserName;
	int iMsgType;
	Comm::SKBuiltinString_t tContent;
	unsigned int iStatus;
	unsigned int iImgStatus;
	Comm::SKBuiltinBuffer_t tImgBuf;
	unsigned int iCreateTime;
	char * pcMsgSource;

	char * pcPushContent;
} IMAddMsg_t;


typedef struct tagIMCmdList {
	unsigned int iCount;
	IMCmdItem_t * ptList;
} IMCmdList_t;

typedef struct tagIMOpCmdResp {
	int iCmdId;
	int iRet;
} IMOpCmdResp_t;

typedef struct tagIMOpCmdRespList {
	unsigned int iCount;
	IMOpCmdResp_t * ptList;
} IMOpCmdRespList_t;


#pragma pack(1)
typedef struct tagIMNewSyncCheckRequest{
	unsigned int iUin;
	unsigned int iSyncKeyLen;
	Comm::SKBuiltinString_t tSyncKeyBuf;
}IMNewSyncCheckRequest_t;
#pragma pack()


typedef struct tagIMNewSyncRequest {
	IMBaseRequest_t tBaseRequest;
	IMCmdList_t tOplog;
	unsigned int iSelector;
	Comm::SKBuiltinBuffer_t tKeyBuf;
	unsigned int iScene;
} IMNewSyncRequest_t;

typedef struct tagIMNewSyncResponse {
	IMBaseResponse_t tBaseResponse;
	int iRet;
	IMCmdList_t tCmdList;
	unsigned int iContinueFlag;
	Comm::SKBuiltinBuffer_t tKeyBuf;
	unsigned int iStatus;
	IMOpCmdRespList_t tOpCmdResp;
} IMNewSyncResponse_t;


typedef struct tagIMSyncRequest {
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tUserName;
	unsigned int iSyncKey;
	int iScene;
	int iOption;
	IMCmdList_t tOplog;
	char * pcKeyBuf;
} IMSyncRequest_t;

typedef struct tagIMSyncResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iNewSyncKey;
	int iContinueFlag;
	unsigned int iCmdCount;
	IMCmdItem_t * ptCmdList;

	unsigned int iOOBCount;
	IMCmdItem_t * ptOOBList;

	char * pcKeyBuf;
} IMSyncResponse_t;



////////////////////////// ͬ����Ϣ End //////////////////////////

////////////////////////// ��������Begin //////////////////////////

typedef struct tagIMLbsRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iOpCode;	// �������enLbsOpCode����
	float fLongitude; 		// ���� GPS����,��ȷ��С�����6λ
	float fLatitude; 		// ���� GPSγ��,��ȷ��С�����6λ
	int iPrecision;			// ��ʱ��100
	char * pcMacAddr;		// wifi�ȵ��mac��ַ���ݿ�

	char * pcCellId;		// ��վ��Ϣ���ݿ�

	int iGPSSource;			// GPS��ԴHARDWARE = 0(ʹ��GPS);  NETWORK = 1(��ʹ��GPS)

	//add by yihuang
	unsigned int iBeginAge; //��������С����
	unsigned int iEndAge;	//�������������
	unsigned int iIntentionFlag; //��������
	unsigned int iSkipCount; //�ӵڼ�����¼��ʼ����
	unsigned int iFetchCount; //Ҫ����������
	//
} IMLbsRequest_t;

typedef struct tagIMLbsContactInfo {
	char * pcUserName;

	char * pcNickName;

	char * pcProvince;

	char * pcCity;

	char * pcSignature;	// ����ǩ��

	char * pcDistance;	// ����

	int iSex;
	unsigned int iImgStatus;		// �Ƿ���ͷ����:3    û��:4 ����enMMContactImgFlag
	unsigned int iVerifyFlag;		// ��֤��־ �ݲ���
	char * pcVerifyInfo;			// �ݲ���

	char * pcVerifyContent;			// �ݲ���

	char * pcAlias;					// �ݲ���

	char * pcWeibo;					// �ݲ���

	char * pcWeiboNickname;			// �ݲ���

	unsigned int iWeiboFlag;		// �ݲ���
	int iHeadImgVersion;			// �ݲ���
	IMSnsUserInfo_t tSnsUserInfo;	//(�ݲ���) ����Ȧ��Ϣ
	char * pcCountry;

	char * pcBigHeadImgUrl;			// ��ͷ��URL �ݲ���

	char * pcSmallHeadImgUrl;		// Сͷ��URL �ݲ���

	char * pcMyBrandList;			// �ݲ���

	IMCustomizedInfo_t tCustomizedInfo;

	//add by yihuang
	IMHobby_t tMutualHobbies;		//��ͬ��Ȥ
	
	unsigned int iMutualFriendCount;			//��ͬ������
	struct tagIMLbsContactInfo * ptMutualFriendList;	//��ͬ����

	unsigned int iMutualGroupCount;				//��ͬȺ��
	struct tagIMLbsContactInfo * ptMutualGroupList;	//��ͬȺ

	char * pcTime;	//ʱ��
	//

	char * pcSafeUserName;
	IMBirthday_t tBirthday; //����
	unsigned int iAge; 		 //���䣬�������ռ���
	unsigned int iIntentionFlag; //������Ը��������enMMIntentionFlag
	unsigned int iMatchType; // �Ƿ���ʾ��
	
} IMLbsContactInfo_t;

typedef struct tagIMLbsResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iContactCount;
	IMLbsContactInfo_t * ptContactList;

	unsigned int iState;
	unsigned int iFlushTime;		// ˢ��ʱ��
	unsigned int iIsShowRoom;		// �ݲ���
	unsigned int iRoomMemberCount;	// �ݲ���
	unsigned int iSkipCount; //�ӵڼ�����¼��ʼ����
} IMLbsResponse_t;

typedef struct tagIMGetLocationRequest {
	IMBaseRequest_t tBaseRequest;
	int iLongitude;
	int iLatitude;
	int iPrecision;
	char * pcMacAddr;

	char * pcCellId;

	int iGPSSource;
} IMGetLocationRequest_t;

typedef struct tagIMGetLocationResponse {
	IMBaseResponse_t tBaseResponse;
	int iLongitude;
	int iLatitude;
} IMGetLocationResponse_t;


typedef struct tagIMLbsMatchRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iOpCode;	// �������enLbsMatchOpCode����
	unsigned int iMatchListSize;// ����
	Comm::SKBuiltinString_t* pUserNameList; // ��Ҫ��Ե��û��б�(����)
} IMLbsMatchRequest_t;

typedef struct tagIMLbsMatchResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iOpCode;
	unsigned int iMatchListSize;
	Comm::SKBuiltinString_t* pUserNameList;
	int * piRet;
} IMLbsMatchResponse_t;


typedef struct tagIMSyncLbsMatchRequest {
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tUserName;
	unsigned int iSyncKey;
} IMSyncLbsMatchRequest_t;

typedef struct tagIMSyncLbsMatchResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iNewSyncKey;
	int iContinueFlag; // ͬ�����Ϊ
	unsigned int iCmdCount;
	IMCmdItem_t * ptCmdList;
} IMSyncLbsMatchResponse_t;

typedef struct tagIMLbsMatchContactInfo {
	char * pcUserName;

	char * pcNickName;

	char * pcProvince;

	char * pcCity;

	char * pcSignature;	// ����ǩ��

	int iSex;
	unsigned int iImgStatus;		// �Ƿ���ͷ����:3    û��:4 ����enMMContactImgFlag
	int iHeadImgVersion;			// �ݲ���
	IMSnsUserInfo_t tSnsUserInfo;	//(�ݲ���) ����Ȧ��Ϣ
	char * pcCountry;

	char * pcBigHeadImgUrl;			// ��ͷ��URL �ݲ���

	char * pcSmallHeadImgUrl;		// Сͷ��URL �ݲ���
	
	char * pcSafeUserName;

	IMBirthday_t tBirthday; //����
	unsigned int iAge; 		 //���䣬�������ռ���
	unsigned int iIntentionFlag; //������Ը��������enMMIntentionFlag
	unsigned int iMatchTime;	// ���ʱ��
	IMHobby_t tHobbies;		//��Ȥ

} IMLbsMatchContactInfo_t;


////////////////////////// ��������End //////////////////////////


/////////////////////////Ⱥ���Begin ////////////////////////////

typedef struct tagIMModChatRoomNotify 
{	
	unsigned int iChatRoomId;
	unsigned int iStatus;
} IMModChatRoomNotify_t;

typedef struct tagIMModChatRoomMember
{	
	Comm::SKBuiltinString_t tUserName;
	Comm::SKBuiltinString_t tNickName;
	Comm::SKBuiltinString_t tPYInitial;
	Comm::SKBuiltinString_t tQuanPin;	
	int iSex;	
	Comm::SKBuiltinBuffer_t tImgBuf;
	unsigned int iImgFlag;	
	Comm::SKBuiltinString_t tRemark;
	Comm::SKBuiltinString_t tRemarkPYInitial;
	Comm::SKBuiltinString_t tRemarkQuanPin;	
	unsigned int iContactType;	
	char * pcProvince;	
	char * pcCity;	
	char * pcSignature;
	unsigned int iPersonalCard;
	unsigned int iVerifyFlag;
	char * pcVerifyInfo;	
	char * pcWeibo;	
	char * pcVerifyContent;
	char * pcWeiboNickname;
	unsigned int iWeiboFlag;
	int iAlbumStyle;	
	int iAlbumFlag;	
	char * pcAlbumBGImgID;
	char * pcAlias;
	IMSnsUserInfo_t tSnsUserInfo;
	char * pcCountry;	
	char * pcBigHeadImgUrl;	
	char * pcSmallHeadImgUrl;	
	char * pcMyBrandList;	
	IMCustomizedInfo_t tCustomizedInfo;
} IMModChatRoomMember_t;


//��Ⱥ
typedef struct tagIMQuitChatRoom 
{	
	unsigned int iChatRoomId;
	Comm::SKBuiltinString_t tUserName;
} IMQuitChatRoom_t;

typedef struct tagIMQuitChatRoomRequest
{	
	IMBaseRequest_t tBaseRequest;
	IMQuitChatRoom_t tQuitChatRoom;
}IMQuitChatRoomRequest_t;

typedef struct tagIMQuitChatRoomResponse
{	
	IMBaseResponse_t tBaseResponse;
	IMQuitChatRoom_t tQuitChatRoom;
}IMQuitChatRoomResponse_t;

typedef struct tagIMQuitGroupRequest
{	
	IMBaseRequest_t tBaseRequest;
	IMQuitChatRoom_t tQuitChatRoom;
}IMQuitGroupRequest_t;

typedef struct tagIMQuitGroupResponse
{	
	IMBaseResponse_t tBaseResponse;
	IMQuitChatRoom_t tQuitChatRoom;
}IMQuitGroupResponse_t;



typedef struct tagIMModChatRoomTopic 
{	
	unsigned int iChatRoomId;
	unsigned int iChatRoomType;
	Comm::SKBuiltinString_t tChatRoomName;
	Comm::SKBuiltinString_t tChatRoomTopic;
	unsigned int iNeedVerify;
} IMModChatRoomTopic_t;

typedef struct tagIMModGroupTopic 
{	
	unsigned int iChatRoomId;
	Comm::SKBuiltinString_t tChatRoomTopic;
} IMModGroupTopic_t;



typedef struct tagIMModChatRoomMemberDisplayName 
{	
	unsigned int iChatRoomId;
	char * pcUserName;	
	char * pcDisplayName;
} IMModChatRoomMemberDisplayName_t;


typedef struct tagIMModChatRoomMemberFlag
{	
	unsigned int iChatRoomId;	
	char * pcUserName;	
	unsigned int iFlagSwitch;	
	unsigned int iValue;
} IMModChatRoomMemberFlag_t;



typedef struct tagIMMemberReq 
{	
	Comm::SKBuiltinString_t tMemberName;
} IMMemberReq_t;


typedef struct tagIMMemberResp 
{	
	Comm::SKBuiltinString_t tMemberName;
	unsigned int iMemberStatus;	
	Comm::SKBuiltinString_t tNickName;
	Comm::SKBuiltinString_t tPYInitial;	
	Comm::SKBuiltinString_t tQuanPin;	
	int iSex;	
	Comm::SKBuiltinString_t tRemark;
	Comm::SKBuiltinString_t tRemarkPYInitial;
	Comm::SKBuiltinString_t tRemarkQuanPin;	
	unsigned int iContactType;	
	char * pcProvince;	
	char * pcCity;	
	char * pcSignature;	
	unsigned int iPersonalCard;	
	unsigned int iVerifyFlag;
	char * pcVerifyInfo;	
	char * pcCountry;
	Comm::SKBuiltinString_t tMemberSafeName;
	IMBirthday_t tBirthday; //����
} IMMemberResp_t;



typedef struct tagIMDelMemberReq 
{	
	Comm::SKBuiltinString_t tMemberName;
} IMDelMemberReq_t;


typedef struct tagIMDelMemberResp 
{	
	Comm::SKBuiltinString_t tMemberName;
} IMDelMemberResp_t;



 typedef struct tagIMCreateChatRoomRequest
{	
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tIntroDuce;
	unsigned int iMemberCount;	
	IMMemberReq_t * ptMemberList;
	float fLongitude;
	float fLatitude;
	Comm::SKBuiltinString_t tChatRoomName;
	unsigned int iType;
	unsigned int iNeedVerify;
	Comm::SKBuiltinString_t tChatRoomAddr; // Ⱥ��ַ
} IMCreateChatRoomRequest_t;


typedef struct tagIMCreateChatRoomResponse
{	
	IMBaseResponse_t tBaseResponse;	
	Comm::SKBuiltinString_t tIntroDuce;
	Comm::SKBuiltinString_t tPYInitial;	
	Comm::SKBuiltinString_t tQuanPin;	
	unsigned int iMemberCount;	
	IMMemberResp_t * ptMemberList;	
	Comm::SKBuiltinString_t tChatRoomName;
	Comm::SKBuiltinBuffer_t tImgBuf;	
	char * pcBigHeadImgUrl;	
	char * pcSmallHeadImgUrl;
	unsigned int iRoomId;
	unsigned int iType;
	unsigned int iNeedVerify;
	unsigned int iMaxMemberCount;
	Comm::SKBuiltinString_t tChatRoomAddr; // Ⱥ��ַ
} IMCreateChatRoomResponse_t;


typedef struct tagIMCreateGroupRequest
{	
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tIntroDuce;
	unsigned int iMemberCount;	
	IMMemberReq_t * ptMemberList;
	
} IMCreateGroupRequest_t;


typedef struct tagIMCreateGroupResponse
{	
	IMBaseResponse_t tBaseResponse;	
	Comm::SKBuiltinString_t tIntroDuce;
	Comm::SKBuiltinString_t tPYInitial;	
	Comm::SKBuiltinString_t tQuanPin;	
	unsigned int iMemberCount;	
	IMMemberResp_t * ptMemberList;	
	unsigned int iChatRoomId;
	Comm::SKBuiltinBuffer_t tImgBuf;	
	char * pcBigHeadImgUrl;	
	char * pcSmallHeadImgUrl;
	unsigned int iMaxMemberCount;
} IMCreateGroupResponse_t;


typedef struct tagIMSearchChatRoomRequest
{	
	IMBaseRequest_t tBaseRequest;
	unsigned int iSearchType;	
	unsigned int iChatRoomId;
	float fLongitude; 		// ���� GPS����,��ȷ��С�����6λ
	float fLatitude; 		// ���� GPSγ��,��ȷ��С�����6λ
}IMSearchChatRoomRequest_t;

typedef struct tagIMChatRoomResult
{	
	unsigned int iRoomID;
	char* sChatRoomName;
	char* sIntroduce;	
	unsigned int iCreateTime;
	unsigned int iActiveTime;
	unsigned int iStatus;	
	unsigned int iSeq;	
	unsigned int iOwner;
	unsigned int iOwnerIDC;
	unsigned int iUpdateTime;
	unsigned int iType; // Ⱥ����
	unsigned int iDis; // ����(��)
	unsigned int iMaxMemberCount;
	unsigned int iNeedVerify;// �Ƿ���Ҫ��֤
}IMChatRoomResult_t;


typedef struct tagIMSearchChatRoomResponse
{	
	IMBaseResponse_t tBaseResponse;
	IMChatRoomResult_t tChatRoomResult;
	unsigned int iMemberCount; // ��Ա��(����Ⱥ��)
	IMChatRoomMember_t* ptMemberList;
}IMSearchChatRoomResponse_t;


typedef struct tagIMAddChatRoomMemberRequest
{	
	IMBaseRequest_t tBaseRequest;
	unsigned int iMemberCount;	
	IMMemberReq_t * ptMemberList;
	unsigned int iChatRoomId;
} IMAddChatRoomMemberRequest_t;


typedef struct tagIMAddChatRoomMemberResponse 
{	
	IMBaseResponse_t tBaseResponse;
	unsigned int iMemberCount;	
	IMMemberResp_t * ptMemberList;
	unsigned int iChatRoomId;
} IMAddChatRoomMemberResponse_t;


typedef struct tagIMAddGroupMemberRequest
{	
	IMBaseRequest_t tBaseRequest;
	unsigned int iMemberCount;	
	IMMemberReq_t * ptMemberList;
	unsigned int iChatRoomId;
} IMAddGroupMemberRequest_t;


typedef struct tagIMAddGroupMemberResponse 
{	
	IMBaseResponse_t tBaseResponse;
	unsigned int iMemberCount;	
	IMMemberResp_t * ptMemberList;
	unsigned int iChatRoomId;
} IMAddGroupMemberResponse_t;



typedef struct tagIMDelChatRoomMemberRequest 
{	
	IMBaseRequest_t tBaseRequest;
	unsigned int iMemberCount;	
	IMDelMemberReq_t * ptMemberList;	
	unsigned int iChatRoomId;
} IMDelChatRoomMemberRequest_t;


typedef struct tagIMDelChatRoomMemberResponse 
{	
	IMBaseResponse_t tBaseResponse;
	unsigned int iMemberCount;
	IMDelMemberResp_t * ptMemberList;
	unsigned int iChatRoomId;
} IMDelChatRoomMemberResponse_t;


typedef struct tagIMDelGroupMemberRequest 
{	
	IMBaseRequest_t tBaseRequest;
	unsigned int iMemberCount;	
	IMDelMemberReq_t * ptMemberList;	
	unsigned int iChatRoomId;
} IMDelGroupMemberRequest_t;


typedef struct tagIMDelGroupMemberResponse 
{	
	IMBaseResponse_t tBaseResponse;
	unsigned int iMemberCount;
	IMDelMemberResp_t * ptMemberList;
	unsigned int iChatRoomId;
} IMDelGroupMemberResponse_t;


// ������Ⱥ

typedef struct tagIMLbsChatRoomRequest {
	IMBaseRequest_t tBaseRequest;
	float fLongitude; 		// ���� GPS����,��ȷ��С�����6λ
	float fLatitude; 		// ���� GPSγ��,��ȷ��С�����6λ
	int iGPSSource;			// GPS��ԴHARDWARE = 0(ʹ��GPS);  NETWORK = 1(��ʹ��GPS)
	unsigned int iSkipCount; //�ӵڼ�����¼��ʼ����
	unsigned int iFetchCount; //Ҫ����������
} IMLbsChatRoomRequest_t;

typedef struct tagIMLbsChatRoom{
	IMChatRoomResult_t tChatRoomInfo;
	unsigned int iMemberCount;	
	IMChatRoomMember_t * ptMemberList;	
} IMLbsChatRoom_t;

typedef struct tagIMLbsChatRoomResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iChatRoomCount;
	IMLbsChatRoom_t * tChatRoomList;
	unsigned int iSkipCount; //�ӵڼ�����¼��ʼ����
} IMLbsChatRoomResponse_t;

typedef struct tagIMVerifyChatRoomMemberRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iOpcode;		// ������(����)
	char * pcName;				// ���� (����)
	char * pcVerifyMemberTicket;// ��֤Ticket
	char * pcVerifyContent;		// ��֤����
	unsigned int iChatRoomId; // ͬ��ʱ����
} IMVerifyChatRoomMemberRequest_t;

typedef struct tagIMVerifyChatRoomMemberResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iOpcode;		//�ͻ����Ϸ���iOpcode
	char*  pcName;		//������е�pcChatRoomName
	unsigned int iChatRoomId; //������е�iChatRoomId
} IMVerifyChatRoomMemberResponse_t;

typedef struct tagIMInviteChatRoomMemberRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iOpcode;		// ������(����)
	char * pcName;			// �����˵��û��� (���ջ�ܾ�����)
	char * pcInviteMemberTicket;// ��֤Ticket
	char * pcInviteContent;		// ���뺯
	unsigned int iChatRoomId; // ����
	
	unsigned int iUserCount; //�������û���
	Comm::SKBuiltinString_t * ptUserList; //�������û����б�
} IMInviteChatRoomMemberRequest_t;

typedef struct tagIMInviteChatRoomMemberResponse {
	IMBaseResponse_t tBaseResponse;
	unsigned int iOpcode;		//�ͻ����Ϸ���iOpcode
	char*  pcName;		//������е�pcName
	unsigned int iChatRoomId; //������е�iChatRoomId

	unsigned int iUserCount; //�������û���
	Comm::SKBuiltinString_t * ptUserList; //�������û����б�
	int * piStatusList; //�������û�״̬
} IMInviteChatRoomMemberResponse_t;

 typedef struct tagIMCloseChatRoomRequest
{	
	IMBaseRequest_t tBaseRequest;
	unsigned int iChatRoomId;
	Comm::SKBuiltinString_t tPwd;			//���루��ҪMD5��
	
} IMCloseChatRoomRequest_t;


typedef struct tagIMCloseChatRoomResponse
{	
	IMBaseResponse_t tBaseResponse;
	unsigned int iChatRoomId;
	
} IMCloseChatRoomResponse_t;

/////////////////////// Ⱥ��� End /////////////////////////////


////////////////////////// ��ȡ�û���ϢBegin //////////////////////////

typedef struct tagIMDisturbTimeSpan {
	unsigned int iBeginTime;
	unsigned int iEndTime;
} IMDisturbTimeSpan_t;

typedef struct tagIMDisturbSetting {
	unsigned int iNightSetting;
	IMDisturbTimeSpan_t tNightTime;
	unsigned int iAllDaySetting;
	IMDisturbTimeSpan_t tAllDayTime;
} IMDisturbSetting_t;

typedef struct tagIMGmailInfo {
	char * pcGmailAcct;

	unsigned int iGmailSwitch;
	unsigned int iGmailErrCode;
} IMGmailInfo_t;

typedef struct tagIMGmailList {
	unsigned int iCount;
	IMGmailInfo_t * ptList;
} IMGmailList_t;

typedef struct tagIMFacebookInfo {
	unsigned long long llUid;
	char * pcName;

	char * pcToken;
} IMFacebookInfo_t;

typedef struct tagIMSafeDevice {
	char * pcName;

	char * pcUuid;

	char * pcDeviceType;

	unsigned int iCreateTime;
} IMSafeDevice_t;

typedef struct tagIMSafeDeviceList {
	unsigned int iCount;
	IMSafeDevice_t * ptList;
} IMSafeDeviceList_t;
/////////////////////// ��һ�ε�½������Ϣ���� ////////////////////////////

typedef struct tagIMUserInfoSetRequest {
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tFirstName;		//First Name
	Comm::SKBuiltinString_t tLastName;		//Last Name
	Comm::SKBuiltinBuffer_t tImgBuf;		//ͷ��BUFF
	unsigned int iUserSex;					//�Ա𣨲���enMMSexType�궨�壩
	IMBirthday_t tBirthday;
} IMUserInfoSetRequest_t;

typedef struct tagIMUserInfoSetResponse {
	IMBaseResponse_t tBaseResponse;
} IMUserInfoSetResponse_t;

/////////////////////////////////////////////////////////////////////////////////////

typedef struct tagIMUserInfoExt {
	IMSnsUserInfo_t tSnsUserInfo;
	char * pcMyBrandList;

	char * pcMsgPushSound;

	char * pcVoipPushSound;

	unsigned int iBigChatRoomSize;
	unsigned int iBigChatRoomQuota;
	unsigned int iBigChatRoomInvite;
	char * pcSafeMobile;

	char * pcBigHeadImgUrl;

	char * pcSmallHeadImgUrl;

	unsigned int iMainAcctType;
	Comm::SKBuiltinString_t tExtXml;
	IMSafeDeviceList_t tSafeDeviceList;
	unsigned int iSafeDevice;
} IMUserInfoExt_t;

typedef struct tagIMModUserInfo {
	unsigned int iBitFlag;
	Comm::SKBuiltinString_t tUserName;
	Comm::SKBuiltinString_t tNickName;
	unsigned int iBindUin;
	Comm::SKBuiltinString_t tBindEmail;
	Comm::SKBuiltinString_t tBindMobile;
	unsigned int iStatus;
	unsigned int iImgLen;
	char * pcImgBuf;

	int iSex;
	char * pcProvince;

	char * pcCity;

	char * pcSignature;

	unsigned int iPersonalCard;
	IMDisturbSetting_t tDisturbSetting;
	unsigned int iPluginFlag;
	unsigned int iVerifyFlag;
	char * pcVerifyInfo;

	int iPoint;
	int iExperience;
	int iLevel;
	int iLevelLowExp;
	int iLevelHighExp;
	char * pcWeibo;

	unsigned int iPluginSwitch;
	IMGmailList_t tGmailList;
	char * pcAlias;

	char * pcWeiboNickname;

	unsigned int iWeiboFlag;
	unsigned int iFaceBookFlag;
	unsigned long long llFBUserID;
	char * pcFBUserName;

	int iAlbumStyle;
	int iAlbumFlag;
	char * pcAlbumBGImgID;

	unsigned int iTXNewsCategory;
	char * pcFBToken;

	char * pcCountry;

	unsigned int iGrayscaleFlag;

	//added by yihuang
	IMBirthday_t tBirthday; //����
	unsigned int iAge; //���䣬�������ռ���
	IMHobby_t tHobby; //��Ȥ����
	unsigned int iIntentionFlag; //������Ը��������enMMIntentionFlag

	unsigned int iPhotoCount; //��Ƭ����������ҪSetProfile��ʱ������)
	unsigned int iFriendCount; //��������(����ɾ������ʱ��Ҫ��������ֶΣ�
	unsigned int iGroupCount; //����Ⱥ�����������˳�Ⱥ��ʱ��Ҫ��������ֶΣ�
	unsigned int iMatchCount; //��Գɹ��������յ�ʾ�õ�ʱ����£�

	unsigned int iLBSVisibleState; //�Ƿ�Ը�����������������enLBSVisibleState
	unsigned int iLBSDistanceUnit; //�������˾�����ʾ��λ��������enLBSDistanceUnit
	char * pcLanguage; //����

	Comm::SKBuiltinString_t tFirstName;
	Comm::SKBuiltinString_t tLastName;
	//
} IMModUserInfo_t;

typedef struct tagIMGetProfileRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcUserName;
} IMGetProfileRequest_t;

typedef struct tagIMGetProfileResponse {
	IMBaseResponse_t tBaseResponse;
	IMModUserInfo_t tUserInfo;
	IMUserInfoExt_t tUserInfoExt;
} IMGetProfileResponse_t;

typedef struct tagIMUploadCoverImgRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iTotalLen;						//�ܴ�С
	unsigned int iStartPos;						//��ʼλ��
	Comm::SKBuiltinBuffer_t tData;				//BUFF(����+���ݳ���)
	char * pcImgHash;							//IM_HEADIMG#UserName#time(null)

	char * pcUserName;							//�û���

	char * pcMD5;								//<MD5>
	char * pcCDNImgUrl;							//CND ͷ��URL �ݲ���
	char * pcAESKey;							//CND ��Կ
	int iEncryVer;								//CND ���
	int iCDNImgSize;							//�ϴ���CND��ͷ�����ݴ�С
} IMUploadCoverImgRequest_t;

typedef struct tagIMUploadCoverImgResponse {
	IMBaseResponse_t tBaseResponse;			
	unsigned int iTotalLen;						//�ܴ�С
	unsigned int iStartPos;						//��һ��������ʼλ��

	char * pcFinalImgMd5sum;					//<MD5>
	char * pcImgHash;							//(Req)
} IMUploadCoverImgResponse_t;

typedef struct tagIMGetCoverImgRequest {
	IMBaseRequest_t tBaseRequest;
	char * pcUserName;							//�û���

	unsigned int iImgWidth;						//�ͻ���ָ�����
	unsigned int iImgHeight;					//�ͻ���ָ���߶�
	char * pcImgFormat;							//�ͻ���ָ����ʽ

	unsigned int iTotalLen;						//�ܴ�С����һ������0��
	unsigned int iStartPos;						//��ʼλ�ã���һ������0��
} IMGetCoverImgRequest_t;

typedef struct tagIMGetCoverImgResponse {
	IMBaseResponse_t tBaseResponse;
	char * pcUserName;							//�û���

	unsigned int iTotalLen;						//�ܴ�С
	unsigned int iStartPos;						//(Req)
	Comm::SKBuiltinBuffer_t tData;				//BUFF(����+���ݳ���)
} IMGetCoverImgResponse_t;

typedef struct tagIMFunctionSwitch {
	unsigned int iFunctionId;
	unsigned int iSwitchValue;
} IMFunctionSwitch_t;

typedef struct tagIMReportProfileRequest {
	IMBaseRequest_t tBaseRequest;
	Comm::SKBuiltinString_t tUserName;			//���ٱ��û�
	unsigned int iReportReason;					//�ٱ�����enIMProfileReportReason
	unsigned int iReportTime;					//�ٱ�ʱ��
} IMReportProfileRequest_t;

typedef struct tagIMReportProfileResponse {
	IMBaseResponse_t tBaseResponse;
} IMReportProfileResponse_t;

typedef struct tagIMReportGroupRequest {
	IMBaseRequest_t tBaseRequest;
	unsigned int iChatRoomId;					//���ٱ�Ⱥ
	unsigned int iReportReason;					//�ٱ�����enIMGroupReportReason
	unsigned int iReportTime;					//�ٱ�ʱ��
} IMReportGroupRequest_t;

typedef struct tagIMReportGroupResponse {
	IMBaseResponse_t tBaseResponse;
} IMReportGroupResponse_t;



////////////////////////// ��ȡ�û���ϢEnd //////////////////////////
//add �ṹ�嶨��

#pragma pack()

#ifndef SKMetaInfo_t
namespace Comm {
	typedef struct tagSKMetaInfo SKMetaInfo_t;
}
#endif

extern const Comm::SKMetaInfo_t * g_ptIMMsgMetaInfo;
extern const Comm::SKMetaInfoFinder * g_ptIMMsgMetaInfoFinder;

namespace Comm {
	class SKBuffer;
}

class IMMsgPickle
{
public:
	static int ToBuffer( const IMMsgEchoInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMsgEchoInfo_t * ptStruct );
	static int FreeStructField( IMMsgEchoInfo_t & tStruct );
	static int DeepCopy( IMMsgEchoInfo_t * pDestStruct, const IMMsgEchoInfo_t * pSourceStruct );
	static int Diff( IMMsgEchoInfo_t * ptStruct1, IMMsgEchoInfo_t * ptStruct2 );
	static int ToBuffer( const IMMsgEchoInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMsgEchoInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMBaseRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBaseRequest_t * ptStruct );
	static int FreeStructField( IMBaseRequest_t & tStruct );
	static int DeepCopy( IMBaseRequest_t * pDestStruct, const IMBaseRequest_t * pSourceStruct );
	static int Diff( IMBaseRequest_t * ptStruct1, IMBaseRequest_t * ptStruct2 );
	static int ToBuffer( const IMBaseRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBaseRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMBuiltinIP_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBuiltinIP_t * ptStruct );
	static int FreeStructField( IMBuiltinIP_t & tStruct );
	static int DeepCopy( IMBuiltinIP_t * pDestStruct, const IMBuiltinIP_t * pSourceStruct );
	static int Diff( IMBuiltinIP_t * ptStruct1, IMBuiltinIP_t * ptStruct2 );
	static int ToBuffer( const IMBuiltinIP_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBuiltinIP_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMBuiltinIPList_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBuiltinIPList_t * ptStruct );
	static int FreeStructField( IMBuiltinIPList_t & tStruct );
	static int DeepCopy( IMBuiltinIPList_t * pDestStruct, const IMBuiltinIPList_t * pSourceStruct );
	static int Diff( IMBuiltinIPList_t * ptStruct1, IMBuiltinIPList_t * ptStruct2 );
	static int ToBuffer( const IMBuiltinIPList_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBuiltinIPList_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMCDNDnsInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCDNDnsInfo_t * ptStruct );
	static int FreeStructField( IMCDNDnsInfo_t & tStruct );
	static int DeepCopy( IMCDNDnsInfo_t * pDestStruct, const IMCDNDnsInfo_t * pSourceStruct );
	static int Diff( IMCDNDnsInfo_t * ptStruct1, IMCDNDnsInfo_t * ptStruct2 );
	static int ToBuffer( const IMCDNDnsInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCDNDnsInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMAuthRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAuthRequest_t * ptStruct );
	static int FreeStructField( IMAuthRequest_t & tStruct );
	static int DeepCopy( IMAuthRequest_t * pDestStruct, const IMAuthRequest_t * pSourceStruct );
	static int Diff( IMAuthRequest_t * ptStruct1, IMAuthRequest_t * ptStruct2 );
	static int ToBuffer( const IMAuthRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAuthRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMRegRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMRegRequest_t * ptStruct );
	static int FreeStructField( IMRegRequest_t & tStruct );
	static int DeepCopy( IMRegRequest_t * pDestStruct, const IMRegRequest_t * pSourceStruct );
	static int Diff( IMRegRequest_t * ptStruct1, IMRegRequest_t * ptStruct2 );
	static int ToBuffer( const IMRegRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMRegRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMBaseResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBaseResponse_t * ptStruct );
	static int FreeStructField( IMBaseResponse_t & tStruct );
	static int DeepCopy( IMBaseResponse_t * pDestStruct, const IMBaseResponse_t * pSourceStruct );
	static int Diff( IMBaseResponse_t * ptStruct1, IMBaseResponse_t * ptStruct2 );
	static int ToBuffer( const IMBaseResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBaseResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMNetworkControl_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNetworkControl_t * ptStruct );
	static int FreeStructField( IMNetworkControl_t & tStruct );
	static int DeepCopy( IMNetworkControl_t * pDestStruct, const IMNetworkControl_t * pSourceStruct );
	static int Diff( IMNetworkControl_t * ptStruct1, IMNetworkControl_t * ptStruct2 );
	static int ToBuffer( const IMNetworkControl_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNetworkControl_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMPluginKey_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPluginKey_t * ptStruct );
	static int FreeStructField( IMPluginKey_t & tStruct );
	static int DeepCopy( IMPluginKey_t * pDestStruct, const IMPluginKey_t * pSourceStruct );
	static int Diff( IMPluginKey_t * ptStruct1, IMPluginKey_t * ptStruct2 );
	static int ToBuffer( const IMPluginKey_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPluginKey_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMPluginKeyList_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPluginKeyList_t * ptStruct );
	static int FreeStructField( IMPluginKeyList_t & tStruct );
	static int DeepCopy( IMPluginKeyList_t * pDestStruct, const IMPluginKeyList_t * pSourceStruct );
	static int Diff( IMPluginKeyList_t * ptStruct1, IMPluginKeyList_t * ptStruct2 );
	static int ToBuffer( const IMPluginKeyList_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPluginKeyList_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMHost_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMHost_t * ptStruct );
	static int FreeStructField( IMHost_t & tStruct );
	static int DeepCopy( IMHost_t * pDestStruct, const IMHost_t * pSourceStruct );
	static int Diff( IMHost_t * ptStruct1, IMHost_t * ptStruct2 );
	static int ToBuffer( const IMHost_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMHost_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMHostList_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMHostList_t * ptStruct );
	static int FreeStructField( IMHostList_t & tStruct );
	static int DeepCopy( IMHostList_t * pDestStruct, const IMHostList_t * pSourceStruct );
	static int Diff( IMHostList_t * ptStruct1, IMHostList_t * ptStruct2 );
	static int ToBuffer( const IMHostList_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMHostList_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMAuthResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAuthResponse_t * ptStruct );
	static int FreeStructField( IMAuthResponse_t & tStruct );
	static int DeepCopy( IMAuthResponse_t * pDestStruct, const IMAuthResponse_t * pSourceStruct );
	static int Diff( IMAuthResponse_t * ptStruct1, IMAuthResponse_t * ptStruct2 );
	static int ToBuffer( const IMAuthResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAuthResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMRegResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMRegResponse_t * ptStruct );
	static int FreeStructField( IMRegResponse_t & tStruct );
	static int DeepCopy( IMRegResponse_t * pDestStruct, const IMRegResponse_t * pSourceStruct );
	static int Diff( IMRegResponse_t * ptStruct1, IMRegResponse_t * ptStruct2 );
	static int ToBuffer( const IMRegResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMRegResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUserInfoSetRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUserInfoSetRequest_t * ptStruct );
	static int FreeStructField( IMUserInfoSetRequest_t & tStruct );
	static int DeepCopy( IMUserInfoSetRequest_t * pDestStruct, const IMUserInfoSetRequest_t * pSourceStruct );
	static int Diff( IMUserInfoSetRequest_t * ptStruct1, IMUserInfoSetRequest_t * ptStruct2 );
	static int ToBuffer( const IMUserInfoSetRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUserInfoSetRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUserInfoSetResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUserInfoSetResponse_t * ptStruct );
	static int FreeStructField( IMUserInfoSetResponse_t & tStruct );
	static int DeepCopy( IMUserInfoSetResponse_t * pDestStruct, const IMUserInfoSetResponse_t * pSourceStruct );
	static int Diff( IMUserInfoSetResponse_t * ptStruct1, IMUserInfoSetResponse_t * ptStruct2 );
	static int ToBuffer( const IMUserInfoSetResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUserInfoSetResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMCmdItem_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCmdItem_t * ptStruct );
	static int FreeStructField( IMCmdItem_t & tStruct );
	static int DeepCopy( IMCmdItem_t * pDestStruct, const IMCmdItem_t * pSourceStruct );
	static int Diff( IMCmdItem_t * ptStruct1, IMCmdItem_t * ptStruct2 );
	static int ToBuffer( const IMCmdItem_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCmdItem_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMNewInitRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNewInitRequest_t * ptStruct );
	static int FreeStructField( IMNewInitRequest_t & tStruct );
	static int DeepCopy( IMNewInitRequest_t * pDestStruct, const IMNewInitRequest_t * pSourceStruct );
	static int Diff( IMNewInitRequest_t * ptStruct1, IMNewInitRequest_t * ptStruct2 );
	static int ToBuffer( const IMNewInitRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNewInitRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMNewInitResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNewInitResponse_t * ptStruct );
	static int FreeStructField( IMNewInitResponse_t & tStruct );
	static int DeepCopy( IMNewInitResponse_t * pDestStruct, const IMNewInitResponse_t * pSourceStruct );
	static int Diff( IMNewInitResponse_t * ptStruct1, IMNewInitResponse_t * ptStruct2 );
	static int ToBuffer( const IMNewInitResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNewInitResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSnsUserInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSnsUserInfo_t * ptStruct );
	static int FreeStructField( IMSnsUserInfo_t & tStruct );
	static int DeepCopy( IMSnsUserInfo_t * pDestStruct, const IMSnsUserInfo_t * pSourceStruct );
	static int Diff( IMSnsUserInfo_t * ptStruct1, IMSnsUserInfo_t * ptStruct2 );
	static int ToBuffer( const IMSnsUserInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSnsUserInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMCustomizedInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCustomizedInfo_t * ptStruct );
	static int FreeStructField( IMCustomizedInfo_t & tStruct );
	static int DeepCopy( IMCustomizedInfo_t * pDestStruct, const IMCustomizedInfo_t * pSourceStruct );
	static int Diff( IMCustomizedInfo_t * ptStruct1, IMCustomizedInfo_t * ptStruct2 );
	static int ToBuffer( const IMCustomizedInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCustomizedInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSearchContactRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchContactRequest_t * ptStruct );
	static int FreeStructField( IMSearchContactRequest_t & tStruct );
	static int DeepCopy( IMSearchContactRequest_t * pDestStruct, const IMSearchContactRequest_t * pSourceStruct );
	static int Diff( IMSearchContactRequest_t * ptStruct1, IMSearchContactRequest_t * ptStruct2 );
	static int ToBuffer( const IMSearchContactRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchContactRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSearchContactItem_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchContactItem_t * ptStruct );
	static int FreeStructField( IMSearchContactItem_t & tStruct );
	static int DeepCopy( IMSearchContactItem_t * pDestStruct, const IMSearchContactItem_t * pSourceStruct );
	static int Diff( IMSearchContactItem_t * ptStruct1, IMSearchContactItem_t * ptStruct2 );
	static int ToBuffer( const IMSearchContactItem_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchContactItem_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSearchContactResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchContactResponse_t * ptStruct );
	static int FreeStructField( IMSearchContactResponse_t & tStruct );
	static int DeepCopy( IMSearchContactResponse_t * pDestStruct, const IMSearchContactResponse_t * pSourceStruct );
	static int Diff( IMSearchContactResponse_t * ptStruct1, IMSearchContactResponse_t * ptStruct2 );
	static int ToBuffer( const IMSearchContactResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchContactResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMVerifyUser_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyUser_t * ptStruct );
	static int FreeStructField( IMVerifyUser_t & tStruct );
	static int DeepCopy( IMVerifyUser_t * pDestStruct, const IMVerifyUser_t * pSourceStruct );
	static int Diff( IMVerifyUser_t * ptStruct1, IMVerifyUser_t * ptStruct2 );
	static int ToBuffer( const IMVerifyUser_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyUser_t * ptStruct, int iPickleType, int iPickleStatus );
	
	static int ToBuffer( const IMVerifyUserRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyUserRequest_t * ptStruct );
	static int FreeStructField( IMVerifyUserRequest_t & tStruct );
	static int DeepCopy( IMVerifyUserRequest_t * pDestStruct, const IMVerifyUserRequest_t * pSourceStruct );
	static int Diff( IMVerifyUserRequest_t * ptStruct1, IMVerifyUserRequest_t * ptStruct2 );
	static int ToBuffer( const IMVerifyUserRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyUserRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMVerifyUserResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyUserResponse_t * ptStruct );
	static int FreeStructField( IMVerifyUserResponse_t & tStruct );
	static int DeepCopy( IMVerifyUserResponse_t * pDestStruct, const IMVerifyUserResponse_t * pSourceStruct );
	static int Diff( IMVerifyUserResponse_t * ptStruct1, IMVerifyUserResponse_t * ptStruct2 );
	static int ToBuffer( const IMVerifyUserResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyUserResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDelContact_t* ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelContact_t * ptStruct );
	static int FreeStructField( IMDelContact_t & tStruct );
	static int DeepCopy( IMDelContact_t * pDestStruct, const IMDelContact_t * pSourceStruct );
	static int Diff( IMDelContact_t * ptStruct1, IMDelContact_t * ptStruct2 );
	static int ToBuffer( const IMDelContact_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelContact_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSyncFriendRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncFriendRequest_t * ptStruct );
	static int FreeStructField( IMSyncFriendRequest_t & tStruct );
	static int DeepCopy( IMSyncFriendRequest_t * pDestStruct, const IMSyncFriendRequest_t * pSourceStruct );
	static int Diff( IMSyncFriendRequest_t * ptStruct1, IMSyncFriendRequest_t * ptStruct2 );
	static int ToBuffer( const IMSyncFriendRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncFriendRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMRoomInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMRoomInfo_t * ptStruct );
	static int FreeStructField( IMRoomInfo_t & tStruct );
	static int DeepCopy( IMRoomInfo_t * pDestStruct, const IMRoomInfo_t * pSourceStruct );
	static int Diff( IMRoomInfo_t * ptStruct1, IMRoomInfo_t * ptStruct2 );
	static int ToBuffer( const IMRoomInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMRoomInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMModContact_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModContact_t * ptStruct );
	static int FreeStructField( IMModContact_t & tStruct );
	static int DeepCopy( IMModContact_t * pDestStruct, const IMModContact_t * pSourceStruct );
	static int Diff( IMModContact_t * ptStruct1, IMModContact_t * ptStruct2 );
	static int ToBuffer( const IMModContact_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModContact_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSyncFriendResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncFriendResponse_t * ptStruct );
	static int FreeStructField( IMSyncFriendResponse_t & tStruct );
	static int DeepCopy( IMSyncFriendResponse_t * pDestStruct, const IMSyncFriendResponse_t * pSourceStruct );
	static int Diff( IMSyncFriendResponse_t * ptStruct1, IMSyncFriendResponse_t * ptStruct2 );
	static int ToBuffer( const IMSyncFriendResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncFriendResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMPossibleFriend_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPossibleFriend_t * ptStruct );
	static int FreeStructField( IMPossibleFriend_t & tStruct );
	static int DeepCopy( IMPossibleFriend_t * pDestStruct, const IMPossibleFriend_t * pSourceStruct );
	static int Diff( IMPossibleFriend_t * ptStruct1, IMPossibleFriend_t * ptStruct2 );
	static int ToBuffer( const IMPossibleFriend_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPossibleFriend_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetContactRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetContactRequest_t * ptStruct );
	static int FreeStructField( IMGetContactRequest_t & tStruct );
	static int DeepCopy( IMGetContactRequest_t * pDestStruct, const IMGetContactRequest_t * pSourceStruct );
	static int Diff( IMGetContactRequest_t * ptStruct1, IMGetContactRequest_t * ptStruct2 );
	static int ToBuffer( const IMGetContactRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetContactRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetContactResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetContactResponse_t * ptStruct );
	static int FreeStructField( IMGetContactResponse_t & tStruct );
	static int DeepCopy( IMGetContactResponse_t * pDestStruct, const IMGetContactResponse_t * pSourceStruct );
	static int Diff( IMGetContactResponse_t * ptStruct1, IMGetContactResponse_t * ptStruct2 );
	static int ToBuffer( const IMGetContactResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetContactResponse_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMAuthBySKRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAuthBySKRequest_t * ptStruct );
	static int FreeStructField( IMAuthBySKRequest_t & tStruct );
	static int DeepCopy( IMAuthBySKRequest_t * pDestStruct, const IMAuthBySKRequest_t * pSourceStruct );
	static int Diff( IMAuthBySKRequest_t * ptStruct1, IMAuthBySKRequest_t * ptStruct2 );
	static int ToBuffer( const IMAuthBySKRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAuthBySKRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMAuthBySKResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAuthBySKResponse_t * ptStruct );
	static int FreeStructField( IMAuthBySKResponse_t & tStruct );
	static int DeepCopy( IMAuthBySKResponse_t * pDestStruct, const IMAuthBySKResponse_t * pSourceStruct );
	static int Diff( IMAuthBySKResponse_t * ptStruct1, IMAuthBySKResponse_t * ptStruct2 );
	static int ToBuffer( const IMAuthBySKResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAuthBySKResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	
	//��Ϣ��ʽ	����
	static int ToBuffer( const IMMsgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMsgRequest_t * ptStruct );
	static int FreeStructField( IMMsgRequest_t & tStruct );
	static int DeepCopy( IMMsgRequest_t * pDestStruct, const IMMsgRequest_t * pSourceStruct );
	static int Diff( IMMsgRequest_t * ptStruct1, IMMsgRequest_t * ptStruct2 );
	static int ToBuffer( const IMMsgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMsgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	//������Ϣ	����
	static int ToBuffer( const IMSendMsgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendMsgRequest_t * ptStruct );
	static int FreeStructField( IMSendMsgRequest_t & tStruct );
	static int DeepCopy( IMSendMsgRequest_t * pDestStruct, const IMSendMsgRequest_t * pSourceStruct );
	static int Diff( IMSendMsgRequest_t * ptStruct1, IMSendMsgRequest_t * ptStruct2 );
	static int ToBuffer( const IMSendMsgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendMsgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	//��Ϣ��ʽ	��Ӧ
	static int ToBuffer( const IMMsgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMsgResponse_t * ptStruct );
	static int FreeStructField( IMMsgResponse_t & tStruct );
	static int DeepCopy( IMMsgResponse_t * pDestStruct, const IMMsgResponse_t * pSourceStruct );
	static int Diff( IMMsgResponse_t * ptStruct1, IMMsgResponse_t * ptStruct2 );
	static int ToBuffer( const IMMsgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMsgResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	
	//������Ϣ	��Ӧ
	static int ToBuffer( const IMSendMsgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendMsgResponse_t * ptStruct );
	static int FreeStructField( IMSendMsgResponse_t & tStruct );
	static int DeepCopy( IMSendMsgResponse_t * pDestStruct, const IMSendMsgResponse_t * pSourceStruct );
	static int Diff( IMSendMsgResponse_t * ptStruct1, IMSendMsgResponse_t * ptStruct2 );
	static int ToBuffer( const IMSendMsgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendMsgResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	

	// ͬ����Ϣ 
	static int ToBuffer( const IMAddMsg_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddMsg_t * ptStruct );
	static int FreeStructField( IMAddMsg_t & tStruct );
	static int DeepCopy( IMAddMsg_t * pDestStruct, const IMAddMsg_t * pSourceStruct );
	static int Diff( IMAddMsg_t * ptStruct1, IMAddMsg_t * ptStruct2 );
	static int ToBuffer( const IMAddMsg_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddMsg_t * ptStruct, int iPickleType, int iPickleStatus );

	
	static int ToBuffer( const IMKeyVal_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMKeyVal_t * ptStruct );
	static int FreeStructField( IMKeyVal_t & tStruct );
	static int DeepCopy( IMKeyVal_t * pDestStruct, const IMKeyVal_t * pSourceStruct );
	static int Diff( IMKeyVal_t * ptStruct1, IMKeyVal_t * ptStruct2 );
	static int ToBuffer( const IMKeyVal_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMKeyVal_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSyncKey_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncKey_t * ptStruct );
	static int FreeStructField( IMSyncKey_t & tStruct );
	static int DeepCopy( IMSyncKey_t * pDestStruct, const IMSyncKey_t * pSourceStruct );
	static int Diff( IMSyncKey_t * ptStruct1, IMSyncKey_t * ptStruct2 );
	static int ToBuffer( const IMSyncKey_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncKey_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMCmdList_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCmdList_t * ptStruct );
	static int FreeStructField( IMCmdList_t & tStruct );
	static int DeepCopy( IMCmdList_t * pDestStruct, const IMCmdList_t * pSourceStruct );
	static int Diff( IMCmdList_t * ptStruct1, IMCmdList_t * ptStruct2 );
	static int ToBuffer( const IMCmdList_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCmdList_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMOpCmdResp_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMOpCmdResp_t * ptStruct );
	static int FreeStructField( IMOpCmdResp_t & tStruct );
	static int DeepCopy( IMOpCmdResp_t * pDestStruct, const IMOpCmdResp_t * pSourceStruct );
	static int Diff( IMOpCmdResp_t * ptStruct1, IMOpCmdResp_t * ptStruct2 );
	static int ToBuffer( const IMOpCmdResp_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMOpCmdResp_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMOpCmdRespList_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMOpCmdRespList_t * ptStruct );
	static int FreeStructField( IMOpCmdRespList_t & tStruct );
	static int DeepCopy( IMOpCmdRespList_t * pDestStruct, const IMOpCmdRespList_t * pSourceStruct );
	static int Diff( IMOpCmdRespList_t * ptStruct1, IMOpCmdRespList_t * ptStruct2 );
	static int ToBuffer( const IMOpCmdRespList_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMOpCmdRespList_t * ptStruct, int iPickleType, int iPickleStatus );
	
	static int ToBuffer( const IMNewSyncRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNewSyncRequest_t * ptStruct );
	static int FreeStructField( IMNewSyncRequest_t & tStruct );
	static int DeepCopy( IMNewSyncRequest_t * pDestStruct, const IMNewSyncRequest_t * pSourceStruct );
	static int Diff( IMNewSyncRequest_t * ptStruct1, IMNewSyncRequest_t * ptStruct2 );
	static int ToBuffer( const IMNewSyncRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNewSyncRequest_t * ptStruct, int iPickleType, int iPickleStatus );
	
	static int ToBuffer( const IMNewSyncResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNewSyncResponse_t * ptStruct );
	static int FreeStructField( IMNewSyncResponse_t & tStruct );
	static int DeepCopy( IMNewSyncResponse_t * pDestStruct, const IMNewSyncResponse_t * pSourceStruct );
	static int Diff( IMNewSyncResponse_t * ptStruct1, IMNewSyncResponse_t * ptStruct2 );
	static int ToBuffer( const IMNewSyncResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMNewSyncResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSyncRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncRequest_t * ptStruct );
	static int FreeStructField( IMSyncRequest_t & tStruct );
	static int DeepCopy( IMSyncRequest_t * pDestStruct, const IMSyncRequest_t * pSourceStruct );
	static int Diff( IMSyncRequest_t * ptStruct1, IMSyncRequest_t * ptStruct2 );
	static int ToBuffer( const IMSyncRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSyncResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncResponse_t * ptStruct );
	static int FreeStructField( IMSyncResponse_t & tStruct );
	static int DeepCopy( IMSyncResponse_t * pDestStruct, const IMSyncResponse_t * pSourceStruct );
	static int Diff( IMSyncResponse_t * ptStruct1, IMSyncResponse_t * ptStruct2 );
	static int ToBuffer( const IMSyncResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	
	static int ToBuffer( const IMBatchGetHeadImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBatchGetHeadImgRequest_t * ptStruct );
	static int FreeStructField( IMBatchGetHeadImgRequest_t & tStruct );
	static int DeepCopy( IMBatchGetHeadImgRequest_t * pDestStruct, const IMBatchGetHeadImgRequest_t * pSourceStruct );
	static int Diff( IMBatchGetHeadImgRequest_t * ptStruct1, IMBatchGetHeadImgRequest_t * ptStruct2 );
	static int ToBuffer( const IMBatchGetHeadImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBatchGetHeadImgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMImgPair_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMImgPair_t * ptStruct );
	static int FreeStructField( IMImgPair_t & tStruct );
	static int DeepCopy( IMImgPair_t * pDestStruct, const IMImgPair_t * pSourceStruct );
	static int Diff( IMImgPair_t * ptStruct1, IMImgPair_t * ptStruct2 );
	static int ToBuffer( const IMImgPair_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMImgPair_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMBatchGetHeadImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBatchGetHeadImgResponse_t * ptStruct );
	static int FreeStructField( IMBatchGetHeadImgResponse_t & tStruct );
	static int DeepCopy( IMBatchGetHeadImgResponse_t * pDestStruct, const IMBatchGetHeadImgResponse_t * pSourceStruct );
	static int Diff( IMBatchGetHeadImgResponse_t * ptStruct1, IMBatchGetHeadImgResponse_t * ptStruct2 );
	static int ToBuffer( const IMBatchGetHeadImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBatchGetHeadImgResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadHDHeadImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadHDHeadImgRequest_t * ptStruct );
	static int FreeStructField( IMUploadHDHeadImgRequest_t & tStruct );
	static int DeepCopy( IMUploadHDHeadImgRequest_t * pDestStruct, const IMUploadHDHeadImgRequest_t * pSourceStruct );
	static int Diff( IMUploadHDHeadImgRequest_t * ptStruct1, IMUploadHDHeadImgRequest_t * ptStruct2 );
	static int ToBuffer( const IMUploadHDHeadImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadHDHeadImgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadHDHeadImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadHDHeadImgResponse_t * ptStruct );
	static int FreeStructField( IMUploadHDHeadImgResponse_t & tStruct );
	static int DeepCopy( IMUploadHDHeadImgResponse_t * pDestStruct, const IMUploadHDHeadImgResponse_t * pSourceStruct );
	static int Diff( IMUploadHDHeadImgResponse_t * ptStruct1, IMUploadHDHeadImgResponse_t * ptStruct2 );
	static int ToBuffer( const IMUploadHDHeadImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadHDHeadImgResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetHDHeadImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetHDHeadImgRequest_t * ptStruct );
	static int FreeStructField( IMGetHDHeadImgRequest_t & tStruct );
	static int DeepCopy( IMGetHDHeadImgRequest_t * pDestStruct, const IMGetHDHeadImgRequest_t * pSourceStruct );
	static int Diff( IMGetHDHeadImgRequest_t * ptStruct1, IMGetHDHeadImgRequest_t * ptStruct2 );
	static int ToBuffer( const IMGetHDHeadImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetHDHeadImgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetHDHeadImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetHDHeadImgResponse_t * ptStruct );
	static int FreeStructField( IMGetHDHeadImgResponse_t & tStruct );
	static int DeepCopy( IMGetHDHeadImgResponse_t * pDestStruct, const IMGetHDHeadImgResponse_t * pSourceStruct );
	static int Diff( IMGetHDHeadImgResponse_t * ptStruct1, IMGetHDHeadImgResponse_t * ptStruct2 );
	static int ToBuffer( const IMGetHDHeadImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetHDHeadImgResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadVoiceRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadVoiceRequest_t * ptStruct );
	static int FreeStructField( IMUploadVoiceRequest_t & tStruct );
	static int DeepCopy( IMUploadVoiceRequest_t * pDestStruct, const IMUploadVoiceRequest_t * pSourceStruct );
	static int Diff( IMUploadVoiceRequest_t * ptStruct1, IMUploadVoiceRequest_t * ptStruct2 );
	static int ToBuffer( const IMUploadVoiceRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadVoiceRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadVoiceResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadVoiceResponse_t * ptStruct );
	static int FreeStructField( IMUploadVoiceResponse_t & tStruct );
	static int DeepCopy( IMUploadVoiceResponse_t * pDestStruct, const IMUploadVoiceResponse_t * pSourceStruct );
	static int Diff( IMUploadVoiceResponse_t * ptStruct1, IMUploadVoiceResponse_t * ptStruct2 );
	static int ToBuffer( const IMUploadVoiceResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadVoiceResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDownloadVoiceRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadVoiceRequest_t * ptStruct );
	static int FreeStructField( IMDownloadVoiceRequest_t & tStruct );
	static int DeepCopy( IMDownloadVoiceRequest_t * pDestStruct, const IMDownloadVoiceRequest_t * pSourceStruct );
	static int Diff( IMDownloadVoiceRequest_t * ptStruct1, IMDownloadVoiceRequest_t * ptStruct2 );
	static int ToBuffer( const IMDownloadVoiceRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadVoiceRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDownloadVoiceResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadVoiceResponse_t * ptStruct );
	static int FreeStructField( IMDownloadVoiceResponse_t & tStruct );
	static int DeepCopy( IMDownloadVoiceResponse_t * pDestStruct, const IMDownloadVoiceResponse_t * pSourceStruct );
	static int Diff( IMDownloadVoiceResponse_t * ptStruct1, IMDownloadVoiceResponse_t * ptStruct2 );
	static int ToBuffer( const IMDownloadVoiceResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadVoiceResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadVideoRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadVideoRequest_t * ptStruct );
	static int FreeStructField( IMUploadVideoRequest_t & tStruct );
	static int DeepCopy( IMUploadVideoRequest_t * pDestStruct, const IMUploadVideoRequest_t * pSourceStruct );
	static int Diff( IMUploadVideoRequest_t * ptStruct1, IMUploadVideoRequest_t * ptStruct2 );
	static int ToBuffer( const IMUploadVideoRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadVideoRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadVideoResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadVideoResponse_t * ptStruct );
	static int FreeStructField( IMUploadVideoResponse_t & tStruct );
	static int DeepCopy( IMUploadVideoResponse_t * pDestStruct, const IMUploadVideoResponse_t * pSourceStruct );
	static int Diff( IMUploadVideoResponse_t * ptStruct1, IMUploadVideoResponse_t * ptStruct2 );
	static int ToBuffer( const IMUploadVideoResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadVideoResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDownloadVideoRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadVideoRequest_t * ptStruct );
	static int FreeStructField( IMDownloadVideoRequest_t & tStruct );
	static int DeepCopy( IMDownloadVideoRequest_t * pDestStruct, const IMDownloadVideoRequest_t * pSourceStruct );
	static int Diff( IMDownloadVideoRequest_t * ptStruct1, IMDownloadVideoRequest_t * ptStruct2 );
	static int ToBuffer( const IMDownloadVideoRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadVideoRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDownloadVideoResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadVideoResponse_t * ptStruct );
	static int FreeStructField( IMDownloadVideoResponse_t & tStruct );
	static int DeepCopy( IMDownloadVideoResponse_t * pDestStruct, const IMDownloadVideoResponse_t * pSourceStruct );
	static int Diff( IMDownloadVideoResponse_t * ptStruct1, IMDownloadVideoResponse_t * ptStruct2 );
	static int ToBuffer( const IMDownloadVideoResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadVideoResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadMsgImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadMsgImgRequest_t * ptStruct );
	static int FreeStructField( IMUploadMsgImgRequest_t & tStruct );
	static int DeepCopy( IMUploadMsgImgRequest_t * pDestStruct, const IMUploadMsgImgRequest_t * pSourceStruct );
	static int Diff( IMUploadMsgImgRequest_t * ptStruct1, IMUploadMsgImgRequest_t * ptStruct2 );
	static int ToBuffer( const IMUploadMsgImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadMsgImgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadMsgImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadMsgImgResponse_t * ptStruct );
	static int FreeStructField( IMUploadMsgImgResponse_t & tStruct );
	static int DeepCopy( IMUploadMsgImgResponse_t * pDestStruct, const IMUploadMsgImgResponse_t * pSourceStruct );
	static int Diff( IMUploadMsgImgResponse_t * ptStruct1, IMUploadMsgImgResponse_t * ptStruct2 );
	static int ToBuffer( const IMUploadMsgImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadMsgImgResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDownloadMsgImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadMsgImgRequest_t * ptStruct );
	static int FreeStructField( IMDownloadMsgImgRequest_t & tStruct );
	static int DeepCopy( IMDownloadMsgImgRequest_t * pDestStruct, const IMDownloadMsgImgRequest_t * pSourceStruct );
	static int Diff( IMDownloadMsgImgRequest_t * ptStruct1, IMDownloadMsgImgRequest_t * ptStruct2 );
	static int ToBuffer( const IMDownloadMsgImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadMsgImgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDownloadMsgImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadMsgImgResponse_t * ptStruct );
	static int FreeStructField( IMDownloadMsgImgResponse_t & tStruct );
	static int DeepCopy( IMDownloadMsgImgResponse_t * pDestStruct, const IMDownloadMsgImgResponse_t * pSourceStruct );
	static int Diff( IMDownloadMsgImgResponse_t * ptStruct1, IMDownloadMsgImgResponse_t * ptStruct2 );
	static int ToBuffer( const IMDownloadMsgImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadMsgImgResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMEmojiUploadInfoReq_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmojiUploadInfoReq_t * ptStruct );
	static int FreeStructField( IMEmojiUploadInfoReq_t & tStruct );
	static int DeepCopy( IMEmojiUploadInfoReq_t * pDestStruct, const IMEmojiUploadInfoReq_t * pSourceStruct );
	static int Diff( IMEmojiUploadInfoReq_t * ptStruct1, IMEmojiUploadInfoReq_t * ptStruct2 );
	static int ToBuffer( const IMEmojiUploadInfoReq_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmojiUploadInfoReq_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadEmojiRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadEmojiRequest_t * ptStruct );
	static int FreeStructField( IMUploadEmojiRequest_t & tStruct );
	static int DeepCopy( IMUploadEmojiRequest_t * pDestStruct, const IMUploadEmojiRequest_t * pSourceStruct );
	static int Diff( IMUploadEmojiRequest_t * ptStruct1, IMUploadEmojiRequest_t * ptStruct2 );
	static int ToBuffer( const IMUploadEmojiRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadEmojiRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMEmojiUploadInfoResp_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmojiUploadInfoResp_t * ptStruct );
	static int FreeStructField( IMEmojiUploadInfoResp_t & tStruct );
	static int DeepCopy( IMEmojiUploadInfoResp_t * pDestStruct, const IMEmojiUploadInfoResp_t * pSourceStruct );
	static int Diff( IMEmojiUploadInfoResp_t * ptStruct1, IMEmojiUploadInfoResp_t * ptStruct2 );
	static int ToBuffer( const IMEmojiUploadInfoResp_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmojiUploadInfoResp_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadEmojiResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadEmojiResponse_t * ptStruct );
	static int FreeStructField( IMUploadEmojiResponse_t & tStruct );
	static int DeepCopy( IMUploadEmojiResponse_t * pDestStruct, const IMUploadEmojiResponse_t * pSourceStruct );
	static int Diff( IMUploadEmojiResponse_t * ptStruct1, IMUploadEmojiResponse_t * ptStruct2 );
	static int ToBuffer( const IMUploadEmojiResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadEmojiResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMEmojiDownloadInfoReq_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmojiDownloadInfoReq_t * ptStruct );
	static int FreeStructField( IMEmojiDownloadInfoReq_t & tStruct );
	static int DeepCopy( IMEmojiDownloadInfoReq_t * pDestStruct, const IMEmojiDownloadInfoReq_t * pSourceStruct );
	static int Diff( IMEmojiDownloadInfoReq_t * ptStruct1, IMEmojiDownloadInfoReq_t * ptStruct2 );
	static int ToBuffer( const IMEmojiDownloadInfoReq_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmojiDownloadInfoReq_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDownloadEmojiRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadEmojiRequest_t * ptStruct );
	static int FreeStructField( IMDownloadEmojiRequest_t & tStruct );
	static int DeepCopy( IMDownloadEmojiRequest_t * pDestStruct, const IMDownloadEmojiRequest_t * pSourceStruct );
	static int Diff( IMDownloadEmojiRequest_t * ptStruct1, IMDownloadEmojiRequest_t * ptStruct2 );
	static int ToBuffer( const IMDownloadEmojiRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadEmojiRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMEmojiDownloadInfoResp_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmojiDownloadInfoResp_t * ptStruct );
	static int FreeStructField( IMEmojiDownloadInfoResp_t & tStruct );
	static int DeepCopy( IMEmojiDownloadInfoResp_t * pDestStruct, const IMEmojiDownloadInfoResp_t * pSourceStruct );
	static int Diff( IMEmojiDownloadInfoResp_t * ptStruct1, IMEmojiDownloadInfoResp_t * ptStruct2 );
	static int ToBuffer( const IMEmojiDownloadInfoResp_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmojiDownloadInfoResp_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDownloadEmojiResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadEmojiResponse_t * ptStruct );
	static int FreeStructField( IMDownloadEmojiResponse_t & tStruct );
	static int DeepCopy( IMDownloadEmojiResponse_t * pDestStruct, const IMDownloadEmojiResponse_t * pSourceStruct );
	static int Diff( IMDownloadEmojiResponse_t * ptStruct1, IMDownloadEmojiResponse_t * ptStruct2 );
	static int ToBuffer( const IMDownloadEmojiResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDownloadEmojiResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMLbsRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsRequest_t * ptStruct );
	static int FreeStructField( IMLbsRequest_t & tStruct );
	static int DeepCopy( IMLbsRequest_t * pDestStruct, const IMLbsRequest_t * pSourceStruct );
	static int Diff( IMLbsRequest_t * ptStruct1, IMLbsRequest_t * ptStruct2 );
	static int ToBuffer( const IMLbsRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMLbsContactInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsContactInfo_t * ptStruct );
	static int FreeStructField( IMLbsContactInfo_t & tStruct );
	static int DeepCopy( IMLbsContactInfo_t * pDestStruct, const IMLbsContactInfo_t * pSourceStruct );
	static int Diff( IMLbsContactInfo_t * ptStruct1, IMLbsContactInfo_t * ptStruct2 );
	static int ToBuffer( const IMLbsContactInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsContactInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMLbsResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsResponse_t * ptStruct );
	static int FreeStructField( IMLbsResponse_t & tStruct );
	static int DeepCopy( IMLbsResponse_t * pDestStruct, const IMLbsResponse_t * pSourceStruct );
	static int Diff( IMLbsResponse_t * ptStruct1, IMLbsResponse_t * ptStruct2 );
	static int ToBuffer( const IMLbsResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetLocationRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetLocationRequest_t * ptStruct );
	static int FreeStructField( IMGetLocationRequest_t & tStruct );
	static int DeepCopy( IMGetLocationRequest_t * pDestStruct, const IMGetLocationRequest_t * pSourceStruct );
	static int Diff( IMGetLocationRequest_t * ptStruct1, IMGetLocationRequest_t * ptStruct2 );
	static int ToBuffer( const IMGetLocationRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetLocationRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetLocationResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetLocationResponse_t * ptStruct );
	static int FreeStructField( IMGetLocationResponse_t & tStruct );
	static int DeepCopy( IMGetLocationResponse_t * pDestStruct, const IMGetLocationResponse_t * pSourceStruct );
	static int Diff( IMGetLocationResponse_t * ptStruct1, IMGetLocationResponse_t * ptStruct2 );
	static int ToBuffer( const IMGetLocationResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetLocationResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMLbsMatchRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsMatchRequest_t * ptStruct );
	static int FreeStructField( IMLbsMatchRequest_t & tStruct );
	static int DeepCopy( IMLbsMatchRequest_t * pDestStruct, const IMLbsMatchRequest_t * pSourceStruct );
	static int Diff( IMLbsMatchRequest_t * ptStruct1, IMLbsMatchRequest_t * ptStruct2 );
	static int ToBuffer( const IMLbsMatchRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsMatchRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMLbsMatchResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsMatchResponse_t * ptStruct );
	static int FreeStructField( IMLbsMatchResponse_t & tStruct );
	static int DeepCopy( IMLbsMatchResponse_t * pDestStruct, const IMLbsMatchResponse_t * pSourceStruct );
	static int Diff( IMLbsMatchResponse_t * ptStruct1, IMLbsMatchResponse_t * ptStruct2 );
	static int ToBuffer( const IMLbsMatchResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsMatchResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSyncLbsMatchRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncLbsMatchRequest_t * ptStruct );
	static int FreeStructField( IMSyncLbsMatchRequest_t & tStruct );
	static int DeepCopy( IMSyncLbsMatchRequest_t * pDestStruct, const IMSyncLbsMatchRequest_t * pSourceStruct );
	static int Diff( IMSyncLbsMatchRequest_t * ptStruct1, IMSyncLbsMatchRequest_t * ptStruct2 );
	static int ToBuffer( const IMSyncLbsMatchRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncLbsMatchRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSyncLbsMatchResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncLbsMatchResponse_t * ptStruct );
	static int FreeStructField( IMSyncLbsMatchResponse_t & tStruct );
	static int DeepCopy( IMSyncLbsMatchResponse_t * pDestStruct, const IMSyncLbsMatchResponse_t * pSourceStruct );
	static int Diff( IMSyncLbsMatchResponse_t * ptStruct1, IMSyncLbsMatchResponse_t * ptStruct2 );
	static int ToBuffer( const IMSyncLbsMatchResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSyncLbsMatchResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	
	static int ToBuffer( const IMLbsMatchContactInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsMatchContactInfo_t * ptStruct );
	static int FreeStructField( IMLbsMatchContactInfo_t & tStruct );
	static int DeepCopy( IMLbsMatchContactInfo_t * pDestStruct, const IMLbsMatchContactInfo_t * pSourceStruct );
	static int Diff( IMLbsMatchContactInfo_t * ptStruct1, IMLbsMatchContactInfo_t * ptStruct2 );
	static int ToBuffer( const IMLbsMatchContactInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsMatchContactInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	//////////////// Ⱥ���Begin //////////////////////////
	
	static int ToBuffer( const IMModChatRoomNotify_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomNotify_t * ptStruct );
	static int FreeStructField( IMModChatRoomNotify_t & tStruct );
	static int DeepCopy( IMModChatRoomNotify_t * pDestStruct, const IMModChatRoomNotify_t * pSourceStruct );
	static int Diff( IMModChatRoomNotify_t * ptStruct1, IMModChatRoomNotify_t * ptStruct2 );
	static int ToBuffer( const IMModChatRoomNotify_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomNotify_t * ptStruct, int iPickleType, int iPickleStatus );

	
	static int ToBuffer( const IMModChatRoomMember_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomMember_t * ptStruct );
	static int FreeStructField( IMModChatRoomMember_t & tStruct );
	static int DeepCopy( IMModChatRoomMember_t * pDestStruct, const IMModChatRoomMember_t * pSourceStruct );
	static int Diff( IMModChatRoomMember_t * ptStruct1, IMModChatRoomMember_t * ptStruct2 );
	static int ToBuffer( const IMModChatRoomMember_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomMember_t * ptStruct, int iPickleType, int iPickleStatus );

	
	static int ToBuffer( const IMQuitChatRoom_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitChatRoom_t * ptStruct );
	static int FreeStructField( IMQuitChatRoom_t & tStruct );
	static int DeepCopy( IMQuitChatRoom_t * pDestStruct, const IMQuitChatRoom_t * pSourceStruct );
	static int Diff( IMQuitChatRoom_t * ptStruct1, IMQuitChatRoom_t * ptStruct2 );
	static int ToBuffer( const IMQuitChatRoom_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitChatRoom_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMQuitChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitChatRoomRequest_t * ptStruct );
	static int FreeStructField( IMQuitChatRoomRequest_t & tStruct );
	static int DeepCopy( IMQuitChatRoomRequest_t * pDestStruct, const IMQuitChatRoomRequest_t * pSourceStruct );
	static int Diff( IMQuitChatRoomRequest_t * ptStruct1, IMQuitChatRoomRequest_t * ptStruct2 );
	static int ToBuffer( const IMQuitChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitChatRoomRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	
	static int ToBuffer( const IMQuitChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitChatRoomResponse_t * ptStruct );
	static int FreeStructField( IMQuitChatRoomResponse_t & tStruct );
	static int DeepCopy( IMQuitChatRoomResponse_t * pDestStruct, const IMQuitChatRoomResponse_t * pSourceStruct );
	static int Diff( IMQuitChatRoomResponse_t * ptStruct1, IMQuitChatRoomResponse_t * ptStruct2 );
	static int ToBuffer( const IMQuitChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitChatRoomResponse_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMQuitGroupRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitGroupRequest_t * ptStruct );
	static int FreeStructField( IMQuitGroupRequest_t & tStruct );
	static int DeepCopy( IMQuitGroupRequest_t * pDestStruct, const IMQuitGroupRequest_t * pSourceStruct );
	static int Diff( IMQuitGroupRequest_t * ptStruct1, IMQuitGroupRequest_t * ptStruct2 );
	static int ToBuffer( const IMQuitGroupRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitGroupRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	
	static int ToBuffer( const IMQuitGroupResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitGroupResponse_t * ptStruct );
	static int FreeStructField( IMQuitGroupResponse_t & tStruct );
	static int DeepCopy( IMQuitGroupResponse_t * pDestStruct, const IMQuitGroupResponse_t * pSourceStruct );
	static int Diff( IMQuitGroupResponse_t * ptStruct1, IMQuitGroupResponse_t * ptStruct2 );
	static int ToBuffer( const IMQuitGroupResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMQuitGroupResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	
	static int ToBuffer( const IMModChatRoomTopic_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomTopic_t * ptStruct );
	static int FreeStructField( IMModChatRoomTopic_t & tStruct );
	static int DeepCopy( IMModChatRoomTopic_t * pDestStruct, const IMModChatRoomTopic_t * pSourceStruct );
	static int Diff( IMModChatRoomTopic_t * ptStruct1, IMModChatRoomTopic_t * ptStruct2 );
	static int ToBuffer( const IMModChatRoomTopic_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomTopic_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMModGroupTopic_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModGroupTopic_t * ptStruct );
	static int FreeStructField( IMModGroupTopic_t & tStruct );
	static int DeepCopy( IMModGroupTopic_t * pDestStruct, const IMModGroupTopic_t * pSourceStruct );
	static int Diff( IMModGroupTopic_t * ptStruct1, IMModGroupTopic_t * ptStruct2 );
	static int ToBuffer( const IMModGroupTopic_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModGroupTopic_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMModChatRoomMemberDisplayName_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomMemberDisplayName_t * ptStruct );
	static int FreeStructField( IMModChatRoomMemberDisplayName_t & tStruct );
	static int DeepCopy( IMModChatRoomMemberDisplayName_t * pDestStruct, const IMModChatRoomMemberDisplayName_t * pSourceStruct );
	static int Diff( IMModChatRoomMemberDisplayName_t * ptStruct1, IMModChatRoomMemberDisplayName_t * ptStruct2 );
	static int ToBuffer( const IMModChatRoomMemberDisplayName_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomMemberDisplayName_t * ptStruct, int iPickleType, int iPickleStatus );
	
	static int ToBuffer( const IMModChatRoomMemberFlag_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomMemberFlag_t * ptStruct );
	static int FreeStructField( IMModChatRoomMemberFlag_t & tStruct );
	static int DeepCopy( IMModChatRoomMemberFlag_t * pDestStruct, const IMModChatRoomMemberFlag_t * pSourceStruct );
	static int Diff( IMModChatRoomMemberFlag_t * ptStruct1, IMModChatRoomMemberFlag_t * ptStruct2 );
	static int ToBuffer( const IMModChatRoomMemberFlag_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModChatRoomMemberFlag_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMMemberReq_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMemberReq_t * ptStruct );
	static int FreeStructField( IMMemberReq_t & tStruct );
	static int DeepCopy( IMMemberReq_t * pDestStruct, const IMMemberReq_t * pSourceStruct );
	static int Diff( IMMemberReq_t * ptStruct1, IMMemberReq_t * ptStruct2 );
	static int ToBuffer( const IMMemberReq_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMemberReq_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMMemberResp_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMemberResp_t * ptStruct );
	static int FreeStructField( IMMemberResp_t & tStruct );
	static int DeepCopy( IMMemberResp_t * pDestStruct, const IMMemberResp_t * pSourceStruct );
	static int Diff( IMMemberResp_t * ptStruct1, IMMemberResp_t * ptStruct2 );
	static int ToBuffer( const IMMemberResp_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMemberResp_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMDelMemberReq_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelMemberReq_t * ptStruct );
	static int FreeStructField( IMDelMemberReq_t & tStruct );
	static int DeepCopy( IMDelMemberReq_t * pDestStruct, const IMDelMemberReq_t * pSourceStruct );
	static int Diff( IMDelMemberReq_t * ptStruct1, IMDelMemberReq_t * ptStruct2 );
	static int ToBuffer( const IMDelMemberReq_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelMemberReq_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMDelMemberResp_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelMemberResp_t * ptStruct );
	static int FreeStructField( IMDelMemberResp_t & tStruct );
	static int DeepCopy( IMDelMemberResp_t * pDestStruct, const IMDelMemberResp_t * pSourceStruct );
	static int Diff( IMDelMemberResp_t * ptStruct1, IMDelMemberResp_t * ptStruct2 );
	static int ToBuffer( const IMDelMemberResp_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelMemberResp_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMCreateChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCreateChatRoomRequest_t * ptStruct );
	static int FreeStructField( IMCreateChatRoomRequest_t & tStruct );
	static int DeepCopy( IMCreateChatRoomRequest_t * pDestStruct, const IMCreateChatRoomRequest_t * pSourceStruct );
	static int Diff( IMCreateChatRoomRequest_t * ptStruct1, IMCreateChatRoomRequest_t * ptStruct2 );
	static int ToBuffer( const IMCreateChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCreateChatRoomRequest_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMCreateChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCreateChatRoomResponse_t * ptStruct );
	static int FreeStructField( IMCreateChatRoomResponse_t & tStruct );
	static int DeepCopy( IMCreateChatRoomResponse_t * pDestStruct, const IMCreateChatRoomResponse_t * pSourceStruct );
	static int Diff( IMCreateChatRoomResponse_t * ptStruct1, IMCreateChatRoomResponse_t * ptStruct2 );
	static int ToBuffer( const IMCreateChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCreateChatRoomResponse_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMCreateGroupRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCreateGroupRequest_t * ptStruct );
	static int FreeStructField( IMCreateGroupRequest_t & tStruct );
	static int DeepCopy( IMCreateGroupRequest_t * pDestStruct, const IMCreateGroupRequest_t * pSourceStruct );
	static int Diff( IMCreateGroupRequest_t * ptStruct1, IMCreateGroupRequest_t * ptStruct2 );
	static int ToBuffer( const IMCreateGroupRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCreateGroupRequest_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMCreateGroupResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCreateGroupResponse_t * ptStruct );
	static int FreeStructField( IMCreateGroupResponse_t & tStruct );
	static int DeepCopy( IMCreateGroupResponse_t * pDestStruct, const IMCreateGroupResponse_t * pSourceStruct );
	static int Diff( IMCreateGroupResponse_t * ptStruct1, IMCreateGroupResponse_t * ptStruct2 );
	static int ToBuffer( const IMCreateGroupResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCreateGroupResponse_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMSearchChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchChatRoomRequest_t * ptStruct );
	static int FreeStructField( IMSearchChatRoomRequest_t & tStruct );
	static int DeepCopy( IMSearchChatRoomRequest_t * pDestStruct, const IMSearchChatRoomRequest_t * pSourceStruct );
	static int Diff( IMSearchChatRoomRequest_t * ptStruct1, IMSearchChatRoomRequest_t * ptStruct2 );
	static int ToBuffer( const IMSearchChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchChatRoomRequest_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMChatRoomResult_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMChatRoomResult_t * ptStruct );
	static int FreeStructField( IMChatRoomResult_t & tStruct );
	static int DeepCopy( IMChatRoomResult_t * pDestStruct, const IMChatRoomResult_t * pSourceStruct );
	static int Diff( IMChatRoomResult_t * ptStruct1, IMChatRoomResult_t * ptStruct2 );
	static int ToBuffer( const IMChatRoomResult_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMChatRoomResult_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMSearchChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchChatRoomResponse_t * ptStruct );
	static int FreeStructField( IMSearchChatRoomResponse_t & tStruct );
	static int DeepCopy( IMSearchChatRoomResponse_t * pDestStruct, const IMSearchChatRoomResponse_t * pSourceStruct );
	static int Diff( IMSearchChatRoomResponse_t * ptStruct1, IMSearchChatRoomResponse_t * ptStruct2 );
	static int ToBuffer( const IMSearchChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSearchChatRoomResponse_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMAddChatRoomMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddChatRoomMemberRequest_t * ptStruct );
	static int FreeStructField( IMAddChatRoomMemberRequest_t & tStruct );
	static int DeepCopy( IMAddChatRoomMemberRequest_t * pDestStruct, const IMAddChatRoomMemberRequest_t * pSourceStruct );
	static int Diff( IMAddChatRoomMemberRequest_t * ptStruct1, IMAddChatRoomMemberRequest_t * ptStruct2 );
	static int ToBuffer( const IMAddChatRoomMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddChatRoomMemberRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMAddChatRoomMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddChatRoomMemberResponse_t * ptStruct );
	static int FreeStructField( IMAddChatRoomMemberResponse_t & tStruct );
	static int DeepCopy( IMAddChatRoomMemberResponse_t * pDestStruct, const IMAddChatRoomMemberResponse_t * pSourceStruct );
	static int Diff( IMAddChatRoomMemberResponse_t * ptStruct1, IMAddChatRoomMemberResponse_t * ptStruct2 );
	static int ToBuffer( const IMAddChatRoomMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddChatRoomMemberResponse_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMAddGroupMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddGroupMemberRequest_t * ptStruct );
	static int FreeStructField( IMAddGroupMemberRequest_t & tStruct );
	static int DeepCopy( IMAddGroupMemberRequest_t * pDestStruct, const IMAddGroupMemberRequest_t * pSourceStruct );
	static int Diff( IMAddGroupMemberRequest_t * ptStruct1, IMAddGroupMemberRequest_t * ptStruct2 );
	static int ToBuffer( const IMAddGroupMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddGroupMemberRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMAddGroupMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddGroupMemberResponse_t * ptStruct );
	static int FreeStructField( IMAddGroupMemberResponse_t & tStruct );
	static int DeepCopy( IMAddGroupMemberResponse_t * pDestStruct, const IMAddGroupMemberResponse_t * pSourceStruct );
	static int Diff( IMAddGroupMemberResponse_t * ptStruct1, IMAddGroupMemberResponse_t * ptStruct2 );
	static int ToBuffer( const IMAddGroupMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMAddGroupMemberResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	
	static int ToBuffer( const IMDelChatRoomMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelChatRoomMemberRequest_t * ptStruct );
	static int FreeStructField( IMDelChatRoomMemberRequest_t & tStruct );
	static int DeepCopy( IMDelChatRoomMemberRequest_t * pDestStruct, const IMDelChatRoomMemberRequest_t * pSourceStruct );
	static int Diff( IMDelChatRoomMemberRequest_t * ptStruct1, IMDelChatRoomMemberRequest_t * ptStruct2 );
	static int ToBuffer( const IMDelChatRoomMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelChatRoomMemberRequest_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMDelChatRoomMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelChatRoomMemberResponse_t * ptStruct );
	static int FreeStructField( IMDelChatRoomMemberResponse_t & tStruct );
	static int DeepCopy( IMDelChatRoomMemberResponse_t * pDestStruct, const IMDelChatRoomMemberResponse_t * pSourceStruct );
	static int Diff( IMDelChatRoomMemberResponse_t * ptStruct1, IMDelChatRoomMemberResponse_t * ptStruct2 );
	static int ToBuffer( const IMDelChatRoomMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelChatRoomMemberResponse_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMDelGroupMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelGroupMemberRequest_t * ptStruct );
	static int FreeStructField( IMDelGroupMemberRequest_t & tStruct );
	static int DeepCopy( IMDelGroupMemberRequest_t * pDestStruct, const IMDelGroupMemberRequest_t * pSourceStruct );
	static int Diff( IMDelGroupMemberRequest_t * ptStruct1, IMDelGroupMemberRequest_t * ptStruct2 );
	static int ToBuffer( const IMDelGroupMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelGroupMemberRequest_t * ptStruct, int iPickleType, int iPickleStatus );


	static int ToBuffer( const IMDelGroupMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelGroupMemberResponse_t * ptStruct );
	static int FreeStructField( IMDelGroupMemberResponse_t & tStruct );
	static int DeepCopy( IMDelGroupMemberResponse_t * pDestStruct, const IMDelGroupMemberResponse_t * pSourceStruct );
	static int Diff( IMDelGroupMemberResponse_t * ptStruct1, IMDelGroupMemberResponse_t * ptStruct2 );
	static int ToBuffer( const IMDelGroupMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDelGroupMemberResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	
	static int ToBuffer( const IMLbsChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsChatRoomRequest_t * ptStruct );
	static int FreeStructField( IMLbsChatRoomRequest_t & tStruct );
	static int DeepCopy( IMLbsChatRoomRequest_t * pDestStruct, const IMLbsChatRoomRequest_t * pSourceStruct );
	static int Diff( IMLbsChatRoomRequest_t * ptStruct1, IMLbsChatRoomRequest_t * ptStruct2 );
	static int ToBuffer( const IMLbsChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsChatRoomRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMChatRoomMember_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMChatRoomMember_t * ptStruct );
	static int FreeStructField( IMChatRoomMember_t & tStruct );
	static int DeepCopy( IMChatRoomMember_t * pDestStruct, const IMChatRoomMember_t * pSourceStruct );
	static int Diff( IMChatRoomMember_t * ptStruct1, IMChatRoomMember_t * ptStruct2 );
	static int ToBuffer( const IMChatRoomMember_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMChatRoomMember_t * ptStruct, int iPickleType, int iPickleStatus );
	
	static int ToBuffer( const IMLbsChatRoom_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsChatRoom_t * ptStruct );
	static int FreeStructField( IMLbsChatRoom_t & tStruct );
	static int DeepCopy( IMLbsChatRoom_t * pDestStruct, const IMLbsChatRoom_t * pSourceStruct );
	static int Diff( IMLbsChatRoom_t * ptStruct1, IMLbsChatRoom_t * ptStruct2 );
	static int ToBuffer( const IMLbsChatRoom_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsChatRoom_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMLbsChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsChatRoomResponse_t * ptStruct );
	static int FreeStructField( IMLbsChatRoomResponse_t & tStruct );
	static int DeepCopy( IMLbsChatRoomResponse_t * pDestStruct, const IMLbsChatRoomResponse_t * pSourceStruct );
	static int Diff( IMLbsChatRoomResponse_t * ptStruct1, IMLbsChatRoomResponse_t * ptStruct2 );
	static int ToBuffer( const IMLbsChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMLbsChatRoomResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	
	static int ToBuffer( const IMVerifyChatRoomMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyChatRoomMemberRequest_t * ptStruct );
	static int FreeStructField( IMVerifyChatRoomMemberRequest_t & tStruct );
	static int DeepCopy( IMVerifyChatRoomMemberRequest_t * pDestStruct, const IMVerifyChatRoomMemberRequest_t * pSourceStruct );
	static int Diff( IMVerifyChatRoomMemberRequest_t * ptStruct1, IMVerifyChatRoomMemberRequest_t * ptStruct2 );
	static int ToBuffer( const IMVerifyChatRoomMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyChatRoomMemberRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMVerifyChatRoomMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyChatRoomMemberResponse_t * ptStruct );
	static int FreeStructField( IMVerifyChatRoomMemberResponse_t & tStruct );
	static int DeepCopy( IMVerifyChatRoomMemberResponse_t * pDestStruct, const IMVerifyChatRoomMemberResponse_t * pSourceStruct );
	static int Diff( IMVerifyChatRoomMemberResponse_t * ptStruct1, IMVerifyChatRoomMemberResponse_t * ptStruct2 );
	static int ToBuffer( const IMVerifyChatRoomMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMVerifyChatRoomMemberResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMInviteChatRoomMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMInviteChatRoomMemberRequest_t * ptStruct );
	static int FreeStructField( IMInviteChatRoomMemberRequest_t & tStruct );
	static int DeepCopy( IMInviteChatRoomMemberRequest_t * pDestStruct, const IMInviteChatRoomMemberRequest_t * pSourceStruct );
	static int Diff( IMInviteChatRoomMemberRequest_t * ptStruct1, IMInviteChatRoomMemberRequest_t * ptStruct2 );
	static int ToBuffer( const IMInviteChatRoomMemberRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMInviteChatRoomMemberRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMInviteChatRoomMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMInviteChatRoomMemberResponse_t * ptStruct );
	static int FreeStructField( IMInviteChatRoomMemberResponse_t & tStruct );
	static int DeepCopy( IMInviteChatRoomMemberResponse_t * pDestStruct, const IMInviteChatRoomMemberResponse_t * pSourceStruct );
	static int Diff( IMInviteChatRoomMemberResponse_t * ptStruct1, IMInviteChatRoomMemberResponse_t * ptStruct2 );
	static int ToBuffer( const IMInviteChatRoomMemberResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMInviteChatRoomMemberResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMCloseChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCloseChatRoomRequest_t * ptStruct );
	static int FreeStructField( IMCloseChatRoomRequest_t & tStruct );
	static int DeepCopy( IMCloseChatRoomRequest_t * pDestStruct, const IMCloseChatRoomRequest_t * pSourceStruct );
	static int Diff( IMCloseChatRoomRequest_t * ptStruct1, IMCloseChatRoomRequest_t * ptStruct2 );
	static int ToBuffer( const IMCloseChatRoomRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCloseChatRoomRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMCloseChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCloseChatRoomResponse_t * ptStruct );
	static int FreeStructField( IMCloseChatRoomResponse_t & tStruct );
	static int DeepCopy( IMCloseChatRoomResponse_t * pDestStruct, const IMCloseChatRoomResponse_t * pSourceStruct );
	static int Diff( IMCloseChatRoomResponse_t * ptStruct1, IMCloseChatRoomResponse_t * ptStruct2 );
	static int ToBuffer( const IMCloseChatRoomResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCloseChatRoomResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	
	/////////////// Ⱥ���End ////////////////////////////

	static int ToBuffer( const IMDisturbTimeSpan_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDisturbTimeSpan_t * ptStruct );
	static int FreeStructField( IMDisturbTimeSpan_t & tStruct );
	static int DeepCopy( IMDisturbTimeSpan_t * pDestStruct, const IMDisturbTimeSpan_t * pSourceStruct );
	static int Diff( IMDisturbTimeSpan_t * ptStruct1, IMDisturbTimeSpan_t * ptStruct2 );
	static int ToBuffer( const IMDisturbTimeSpan_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDisturbTimeSpan_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMDisturbSetting_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDisturbSetting_t * ptStruct );
	static int FreeStructField( IMDisturbSetting_t & tStruct );
	static int DeepCopy( IMDisturbSetting_t * pDestStruct, const IMDisturbSetting_t * pSourceStruct );
	static int Diff( IMDisturbSetting_t * ptStruct1, IMDisturbSetting_t * ptStruct2 );
	static int ToBuffer( const IMDisturbSetting_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMDisturbSetting_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGmailInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGmailInfo_t * ptStruct );
	static int FreeStructField( IMGmailInfo_t & tStruct );
	static int DeepCopy( IMGmailInfo_t * pDestStruct, const IMGmailInfo_t * pSourceStruct );
	static int Diff( IMGmailInfo_t * ptStruct1, IMGmailInfo_t * ptStruct2 );
	static int ToBuffer( const IMGmailInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGmailInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGmailList_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGmailList_t * ptStruct );
	static int FreeStructField( IMGmailList_t & tStruct );
	static int DeepCopy( IMGmailList_t * pDestStruct, const IMGmailList_t * pSourceStruct );
	static int Diff( IMGmailList_t * ptStruct1, IMGmailList_t * ptStruct2 );
	static int ToBuffer( const IMGmailList_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGmailList_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMFacebookInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMFacebookInfo_t * ptStruct );
	static int FreeStructField( IMFacebookInfo_t & tStruct );
	static int DeepCopy( IMFacebookInfo_t * pDestStruct, const IMFacebookInfo_t * pSourceStruct );
	static int Diff( IMFacebookInfo_t * ptStruct1, IMFacebookInfo_t * ptStruct2 );
	static int ToBuffer( const IMFacebookInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMFacebookInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSafeDevice_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSafeDevice_t * ptStruct );
	static int FreeStructField( IMSafeDevice_t & tStruct );
	static int DeepCopy( IMSafeDevice_t * pDestStruct, const IMSafeDevice_t * pSourceStruct );
	static int Diff( IMSafeDevice_t * ptStruct1, IMSafeDevice_t * ptStruct2 );
	static int ToBuffer( const IMSafeDevice_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSafeDevice_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMSafeDeviceList_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSafeDeviceList_t * ptStruct );
	static int FreeStructField( IMSafeDeviceList_t & tStruct );
	static int DeepCopy( IMSafeDeviceList_t * pDestStruct, const IMSafeDeviceList_t * pSourceStruct );
	static int Diff( IMSafeDeviceList_t * ptStruct1, IMSafeDeviceList_t * ptStruct2 );
	static int ToBuffer( const IMSafeDeviceList_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSafeDeviceList_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUserInfoExt_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUserInfoExt_t * ptStruct );
	static int FreeStructField( IMUserInfoExt_t & tStruct );
	static int DeepCopy( IMUserInfoExt_t * pDestStruct, const IMUserInfoExt_t * pSourceStruct );
	static int Diff( IMUserInfoExt_t * ptStruct1, IMUserInfoExt_t * ptStruct2 );
	static int ToBuffer( const IMUserInfoExt_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUserInfoExt_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMModUserInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModUserInfo_t * ptStruct );
	static int FreeStructField( IMModUserInfo_t & tStruct );
	static int DeepCopy( IMModUserInfo_t * pDestStruct, const IMModUserInfo_t * pSourceStruct );
	static int Diff( IMModUserInfo_t * ptStruct1, IMModUserInfo_t * ptStruct2 );
	static int ToBuffer( const IMModUserInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModUserInfo_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetProfileRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetProfileRequest_t * ptStruct );
	static int FreeStructField( IMGetProfileRequest_t & tStruct );
	static int DeepCopy( IMGetProfileRequest_t * pDestStruct, const IMGetProfileRequest_t * pSourceStruct );
	static int Diff( IMGetProfileRequest_t * ptStruct1, IMGetProfileRequest_t * ptStruct2 );
	static int ToBuffer( const IMGetProfileRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetProfileRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetProfileResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetProfileResponse_t * ptStruct );
	static int FreeStructField( IMGetProfileResponse_t & tStruct );
	static int DeepCopy( IMGetProfileResponse_t * pDestStruct, const IMGetProfileResponse_t * pSourceStruct );
	static int Diff( IMGetProfileResponse_t * ptStruct1, IMGetProfileResponse_t * ptStruct2 );
	static int ToBuffer( const IMGetProfileResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetProfileResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadCoverImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadCoverImgRequest_t * ptStruct );
	static int FreeStructField( IMUploadCoverImgRequest_t & tStruct );
	static int DeepCopy( IMUploadCoverImgRequest_t * pDestStruct, const IMUploadCoverImgRequest_t * pSourceStruct );
	static int Diff( IMUploadCoverImgRequest_t * ptStruct1, IMUploadCoverImgRequest_t * ptStruct2 );
	static int ToBuffer( const IMUploadCoverImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadCoverImgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadCoverImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadCoverImgResponse_t * ptStruct );
	static int FreeStructField( IMUploadCoverImgResponse_t & tStruct );
	static int DeepCopy( IMUploadCoverImgResponse_t * pDestStruct, const IMUploadCoverImgResponse_t * pSourceStruct );
	static int Diff( IMUploadCoverImgResponse_t * ptStruct1, IMUploadCoverImgResponse_t * ptStruct2 );
	static int ToBuffer( const IMUploadCoverImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadCoverImgResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetCoverImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetCoverImgRequest_t * ptStruct );
	static int FreeStructField( IMGetCoverImgRequest_t & tStruct );
	static int DeepCopy( IMGetCoverImgRequest_t * pDestStruct, const IMGetCoverImgRequest_t * pSourceStruct );
	static int Diff( IMGetCoverImgRequest_t * ptStruct1, IMGetCoverImgRequest_t * ptStruct2 );
	static int ToBuffer( const IMGetCoverImgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetCoverImgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMGetCoverImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetCoverImgResponse_t * ptStruct );
	static int FreeStructField( IMGetCoverImgResponse_t & tStruct );
	static int DeepCopy( IMGetCoverImgResponse_t * pDestStruct, const IMGetCoverImgResponse_t * pSourceStruct );
	static int Diff( IMGetCoverImgResponse_t * ptStruct1, IMGetCoverImgResponse_t * ptStruct2 );
	static int ToBuffer( const IMGetCoverImgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMGetCoverImgResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMHobby_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMHobby_t * ptStruct );
	static int FreeStructField( IMHobby_t & tStruct );
	static int DeepCopy( IMHobby_t * pDestStruct, const IMHobby_t * pSourceStruct );
	static int Diff( IMHobby_t * ptStruct1, IMHobby_t * ptStruct2 );
	static int ToBuffer( const IMHobby_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMHobby_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMBirthday_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBirthday_t * ptStruct );
	static int FreeStructField( IMBirthday_t & tStruct );
	static int DeepCopy( IMBirthday_t * pDestStruct, const IMBirthday_t * pSourceStruct );
	static int Diff( IMBirthday_t * ptStruct1, IMBirthday_t * ptStruct2 );
	static int ToBuffer( const IMBirthday_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMBirthday_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMFunctionSwitch_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMFunctionSwitch_t * ptStruct );
	static int FreeStructField( IMFunctionSwitch_t & tStruct );
	static int DeepCopy( IMFunctionSwitch_t * pDestStruct, const IMFunctionSwitch_t * pSourceStruct );
	static int Diff( IMFunctionSwitch_t * ptStruct1, IMFunctionSwitch_t * ptStruct2 );
	static int ToBuffer( const IMFunctionSwitch_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMFunctionSwitch_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMMobileOptRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMobileOptRequest_t * ptStruct );
	static int FreeStructField( IMMobileOptRequest_t & tStruct );
	static int DeepCopy( IMMobileOptRequest_t * pDestStruct, const IMMobileOptRequest_t * pSourceStruct );
	static int Diff( IMMobileOptRequest_t * ptStruct1, IMMobileOptRequest_t * ptStruct2 );
	static int ToBuffer( const IMMobileOptRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMobileOptRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMMobileOptResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMobileOptResponse_t * ptStruct );
	static int FreeStructField( IMMobileOptResponse_t & tStruct );
	static int DeepCopy( IMMobileOptResponse_t * pDestStruct, const IMMobileOptResponse_t * pSourceStruct );
	static int Diff( IMMobileOptResponse_t * ptStruct1, IMMobileOptResponse_t * ptStruct2 );
	static int ToBuffer( const IMMobileOptResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMMobileOptResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMEmailOptRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmailOptRequest_t * ptStruct );
	static int FreeStructField( IMEmailOptRequest_t & tStruct );
	static int DeepCopy( IMEmailOptRequest_t * pDestStruct, const IMEmailOptRequest_t * pSourceStruct );
	static int Diff( IMEmailOptRequest_t * ptStruct1, IMEmailOptRequest_t * ptStruct2 );
	static int ToBuffer( const IMEmailOptRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmailOptRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMEmailOptResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmailOptResponse_t * ptStruct );
	static int FreeStructField( IMEmailOptResponse_t & tStruct );
	static int DeepCopy( IMEmailOptResponse_t * pDestStruct, const IMEmailOptResponse_t * pSourceStruct );
	static int Diff( IMEmailOptResponse_t * ptStruct1, IMEmailOptResponse_t * ptStruct2 );
	static int ToBuffer( const IMEmailOptResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMEmailOptResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadPlugFriendsRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadPlugFriendsRequest_t * ptStruct );
	static int FreeStructField( IMUploadPlugFriendsRequest_t & tStruct );
	static int DeepCopy( IMUploadPlugFriendsRequest_t * pDestStruct, const IMUploadPlugFriendsRequest_t * pSourceStruct );
	static int Diff( IMUploadPlugFriendsRequest_t * ptStruct1, IMUploadPlugFriendsRequest_t * ptStruct2 );
	static int ToBuffer( const IMUploadPlugFriendsRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadPlugFriendsRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMUploadPlugFriendsResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadPlugFriendsResponse_t * ptStruct );
	static int FreeStructField( IMUploadPlugFriendsResponse_t & tStruct );
	static int DeepCopy( IMUploadPlugFriendsResponse_t * pDestStruct, const IMUploadPlugFriendsResponse_t * pSourceStruct );
	static int Diff( IMUploadPlugFriendsResponse_t * ptStruct1, IMUploadPlugFriendsResponse_t * ptStruct2 );
	static int ToBuffer( const IMUploadPlugFriendsResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMUploadPlugFriendsResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMPushSettingRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPushSettingRequest_t * ptStruct );
	static int FreeStructField( IMPushSettingRequest_t & tStruct );
	static int DeepCopy( IMPushSettingRequest_t * pDestStruct, const IMPushSettingRequest_t * pSourceStruct );
	static int Diff( IMPushSettingRequest_t * ptStruct1, IMPushSettingRequest_t * ptStruct2 );
	static int ToBuffer( const IMPushSettingRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPushSettingRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMPushSettingResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPushSettingResponse_t * ptStruct );
	static int FreeStructField( IMPushSettingResponse_t & tStruct );
	static int DeepCopy( IMPushSettingResponse_t * pDestStruct, const IMPushSettingResponse_t * pSourceStruct );
	static int Diff( IMPushSettingResponse_t * ptStruct1, IMPushSettingResponse_t * ptStruct2 );
	static int ToBuffer( const IMPushSettingResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMPushSettingResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMModUserNameRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModUserNameRequest_t * ptStruct );
	static int FreeStructField( IMModUserNameRequest_t & tStruct );
	static int DeepCopy( IMModUserNameRequest_t * pDestStruct, const IMModUserNameRequest_t * pSourceStruct );
	static int Diff( IMModUserNameRequest_t * ptStruct1, IMModUserNameRequest_t * ptStruct2 );
	static int ToBuffer( const IMModUserNameRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModUserNameRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMModUserNameResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModUserNameResponse_t * ptStruct );
	static int FreeStructField( IMModUserNameResponse_t & tStruct );
	static int DeepCopy( IMModUserNameResponse_t * pDestStruct, const IMModUserNameResponse_t * pSourceStruct );
	static int Diff( IMModUserNameResponse_t * ptStruct1, IMModUserNameResponse_t * ptStruct2 );
	static int ToBuffer( const IMModUserNameResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModUserNameResponse_t * ptStruct, int iPickleType, int iPickleStatus );

	/////////////////�޸�����///////////////////
	static int ToBuffer( const IMModPwdRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModPwdRequest_t * ptStruct );
	static int FreeStructField( IMModPwdRequest_t & tStruct );
	static int DeepCopy( IMModPwdRequest_t * pDestStruct, const IMModPwdRequest_t * pSourceStruct );
	static int Diff( IMModPwdRequest_t * ptStruct1, IMModPwdRequest_t * ptStruct2 );
	static int ToBuffer( const IMModPwdRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModPwdRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMModPwdResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModPwdResponse_t * ptStruct );
	static int FreeStructField( IMModPwdResponse_t & tStruct );
	static int DeepCopy( IMModPwdResponse_t * pDestStruct, const IMModPwdResponse_t * pSourceStruct );
	static int Diff( IMModPwdResponse_t * ptStruct1, IMModPwdResponse_t * ptStruct2 );
	static int ToBuffer( const IMModPwdResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModPwdResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	///////////////////////////////////////////
	/////////////////ͨ���ֻ��һ�����///////////////////
	static int ToBuffer( const IMModPwdByMobileRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModPwdByMobileRequest_t * ptStruct );
	static int FreeStructField( IMModPwdByMobileRequest_t & tStruct );
	static int DeepCopy( IMModPwdByMobileRequest_t * pDestStruct, const IMModPwdByMobileRequest_t * pSourceStruct );
	static int Diff( IMModPwdByMobileRequest_t * ptStruct1, IMModPwdByMobileRequest_t * ptStruct2 );
	static int ToBuffer( const IMModPwdByMobileRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModPwdByMobileRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMModPwdByMobileResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModPwdByMobileResponse_t * ptStruct );
	static int FreeStructField( IMModPwdByMobileResponse_t & tStruct );
	static int DeepCopy( IMModPwdByMobileResponse_t * pDestStruct, const IMModPwdByMobileResponse_t * pSourceStruct );
	static int Diff( IMModPwdByMobileResponse_t * ptStruct1, IMModPwdByMobileResponse_t * ptStruct2 );
	static int ToBuffer( const IMModPwdByMobileResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMModPwdByMobileResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	///////////////////////////////////////////

	/////////////////�ٱ��û�///////////////////
	static int ToBuffer( const IMReportProfileRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMReportProfileRequest_t * ptStruct );
	static int FreeStructField( IMReportProfileRequest_t & tStruct );
	static int DeepCopy( IMReportProfileRequest_t * pDestStruct, const IMReportProfileRequest_t * pSourceStruct );
	static int Diff( IMReportProfileRequest_t * ptStruct1, IMReportProfileRequest_t * ptStruct2 );
	static int ToBuffer( const IMReportProfileRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMReportProfileRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMReportProfileResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMReportProfileResponse_t * ptStruct );
	static int FreeStructField( IMReportProfileResponse_t & tStruct );
	static int DeepCopy( IMReportProfileResponse_t * pDestStruct, const IMReportProfileResponse_t * pSourceStruct );
	static int Diff( IMReportProfileResponse_t * ptStruct1, IMReportProfileResponse_t * ptStruct2 );
	static int ToBuffer( const IMReportProfileResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMReportProfileResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	///////////////////////////////////////////

	/////////////////�ٱ�Ⱥ///////////////////
	static int ToBuffer( const IMReportGroupRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMReportGroupRequest_t * ptStruct );
	static int FreeStructField( IMReportGroupRequest_t & tStruct );
	static int DeepCopy( IMReportGroupRequest_t * pDestStruct, const IMReportGroupRequest_t * pSourceStruct );
	static int Diff( IMReportGroupRequest_t * ptStruct1, IMReportGroupRequest_t * ptStruct2 );
	static int ToBuffer( const IMReportGroupRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMReportGroupRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	static int ToBuffer( const IMReportGroupResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMReportGroupResponse_t * ptStruct );
	static int FreeStructField( IMReportGroupResponse_t & tStruct );
	static int DeepCopy( IMReportGroupResponse_t * pDestStruct, const IMReportGroupResponse_t * pSourceStruct );
	static int Diff( IMReportGroupResponse_t * ptStruct1, IMReportGroupResponse_t * ptStruct2 );
	static int ToBuffer( const IMReportGroupResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMReportGroupResponse_t * ptStruct, int iPickleType, int iPickleStatus );
	///////////////////////////////////////////

	static int ToBuffer( const IMCustomMsgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCustomMsgRequest_t * ptStruct );
	static int FreeStructField( IMCustomMsgRequest_t & tStruct );
	static int DeepCopy( IMCustomMsgRequest_t * pDestStruct, const IMCustomMsgRequest_t * pSourceStruct );
	static int Diff( IMCustomMsgRequest_t * ptStruct1, IMCustomMsgRequest_t * ptStruct2 );
	static int ToBuffer( const IMCustomMsgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMCustomMsgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

	//������Ϣ	����
	static int ToBuffer( const IMSendCustomMsgRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendCustomMsgRequest_t * ptStruct );
	static int FreeStructField( IMSendCustomMsgRequest_t & tStruct );
	static int DeepCopy( IMSendCustomMsgRequest_t * pDestStruct, const IMSendCustomMsgRequest_t * pSourceStruct );
	static int Diff( IMSendCustomMsgRequest_t * ptStruct1, IMSendCustomMsgRequest_t * ptStruct2 );
	static int ToBuffer( const IMSendCustomMsgRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendCustomMsgRequest_t * ptStruct, int iPickleType, int iPickleStatus );

/*
	static int ToBuffer( const IMSendCustomMsgResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendCustomMsgResponse_t * ptStruct );
	static int FreeStructField( IMSendCustomMsgResponse_t & tStruct );
	static int DeepCopy( IMSendCustomMsgResponse_t * pDestStruct, const IMSendCustomMsgResponse_t * pSourceStruct );
	static int Diff( IMSendCustomMsgResponse_t * ptStruct1, IMSendCustomMsgResponse_t * ptStruct2 );
	static int ToBuffer( const IMSendCustomMsgResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendCustomMsgResponse_t * ptStruct, int iPickleType, int iPickleStatus );
*/


	static int ToBuffer( const IMSendLocationRequest_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendLocationRequest_t * ptStruct );
	static int FreeStructField( IMSendLocationRequest_t & tStruct );
	static int DeepCopy( IMSendLocationRequest_t * pDestStruct, const IMSendLocationRequest_t * pSourceStruct );
	static int Diff( IMSendLocationRequest_t * ptStruct1, IMSendLocationRequest_t * ptStruct2 );
	static int ToBuffer( const IMSendLocationRequest_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendLocationRequest_t * ptStruct, int iPickleType, int iPickleStatus );

/*
	static int ToBuffer( const IMSendLocationResponse_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendLocationResponse_t * ptStruct );
	static int FreeStructField( IMSendLocationResponse_t & tStruct );
	static int DeepCopy( IMSendLocationResponse_t * pDestStruct, const IMSendLocationResponse_t * pSourceStruct );
	static int Diff( IMSendLocationResponse_t * ptStruct1, IMSendLocationResponse_t * ptStruct2 );
	static int ToBuffer( const IMSendLocationResponse_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMSendLocationResponse_t * ptStruct, int iPickleType, int iPickleStatus );
*/
	
	static int ToBuffer( const IMWebProxyInfo_t * ptStruct, Comm::SKBuffer * poBuffer );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMWebProxyInfo_t * ptStruct );
	static int FreeStructField( IMWebProxyInfo_t & tStruct );
	static int DeepCopy( IMWebProxyInfo_t * pDestStruct, const IMWebProxyInfo_t * pSourceStruct );
	static int Diff( IMWebProxyInfo_t * ptStruct1, IMWebProxyInfo_t * ptStruct2 );
	static int ToBuffer( const IMWebProxyInfo_t * ptStruct, Comm::SKBuffer * poBuffer, int iPickleType, int iPickleStatus );
	static int FromBuffer( Comm::SKBuffer * poBuffer, IMWebProxyInfo_t * ptStruct, int iPickleType, int iPickleStatus );
	//////////////////////////////////////////
	
	//add �ṹ��ת���ӿ�
	
	static void SetNetworkByteOrder( int iNetworkByteOrder );
	static void SetPickleType( int iPickleType );
	static int GetPickleType( );
	static void SetPickleStatus( int iPickleStatus );

private:
#ifdef MACOS
	static int m_iNetworkByteOrder;
	static int m_iPickleType;
	static int m_iPickleStatus;
#else
	static int m_iNetworkByteOrder;
	static int m_iPickleType;
	static int m_iPickleStatus;
#endif
};


#endif

#ifdef __cplusplus
}
#endif

