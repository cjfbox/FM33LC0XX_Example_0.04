#ifndef __USBD_CONF_H__
#define __USBD_CONF_H__

#include "usb_conf.h"

#define USBD_CFG_MAX_NUM           1	//最大配置数目，仅支持1个配置
#define USBD_ITF_MAX_NUM           1	//最大接口数目，仅支持1个接口

#define USB_MAX_STR_DESC_SIZ       64 	//最大字符串描述符长度

#define USBD_SELF_POWERED               

#define MSC_IN_EP                    0x82	
#define MSC_OUT_EP                   0x02

#define MSC_MAX_PACKET               64

#define MSC_MEDIA_PACKET             4096


#endif

