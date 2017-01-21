/*****************************************************************************
 *
 * File:        PackageHeader.h
 * Author:      iotazhang
 * Revision:    $Id$
 * Description: ���ݰ�ͷ
 *
 *****************************************************************************/

#ifndef KCT_PROXY_PACKAGE_HEADER_H
#define KCT_PROXY_PACKAGE_HEADER_H

#include "ProxyProtocol.h"
#include "KctByteBuffer.h"

/**
 * ���ݰ�ͷ��
 */
struct PackageHeader {
    /**
     * ���캯��
     */
    PackageHeader();

    unsigned int packageLength;
    unsigned short headerLength;
    unsigned short version;
    unsigned int cmd;
    unsigned int seq;

    /**
     * ����
     */
    void reset();

    /**
     * ��ȡpayload����
     */
    unsigned int getPayloadLength() const;

    /**
     * �ӻ����ж�ȡ, ��ȡ��packageLength��headerLength����Ϊʣ��δ��ȡ����
     * @return ���ݰ�ͷ���Ƿ���ȷ
     */
    bool read(KCT::ByteBuffer& buffer);

    /**
     * д�뻺��
     */
    void write(KCT::ByteBuffer& buffer);
};


#endif
