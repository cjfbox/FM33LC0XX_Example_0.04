#ifndef __USBD_CONF__H__
#define __USBD_CONF__H__


#include "usb_conf.h"


#define USBD_CFG_MAX_NUM           1	//最大配置数目，仅支持1个配置
#define USBD_ITF_MAX_NUM           1	//最大接口数目，仅支持1个接口

#define USB_MAX_STR_DESC_SIZ       64 	//最大字符串描述符长度

#define USBD_SELF_POWERED   //自供电

#define HID_IN_EP                    0x81	//输入端点，使用EP1
#define HID_IN_PACKET                8	    //输入包长度

#define HID_OUT_EP                   0x02	//输出端点，使用EP2
#define HID_OUT_PACKET               1	    //输出包长度

#endif
