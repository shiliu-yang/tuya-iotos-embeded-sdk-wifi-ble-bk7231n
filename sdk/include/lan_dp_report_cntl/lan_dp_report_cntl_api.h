#ifndef __LAN_DP_REPORT_CNTL_API_H
#define __LAN_DP_REPORT_CNTL_API_H

#include "tuya_cloud_com_defs.h"

#ifdef __cplusplus
	extern "C" {
#endif


/***********************************************************
*************************micro define***********************
***********************************************************/

/***********************************************************
*************************variable define********************
***********************************************************/

/***********************************************************
*************************function define********************
***********************************************************/

//判断该设备的dp点是否需要上报给master. true 需要上报
BOOL_T lan_dp_report_need_report(CHAR_T *subdev_id);

#ifdef __cplusplus
}
#endif
#endif

