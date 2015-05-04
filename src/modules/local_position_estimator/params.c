#include <systemlib/param/param.h>

// 16 is max name length
PARAM_DEFINE_FLOAT(LPE_FLW_V, 0.01f); // flow velocity std dev
PARAM_DEFINE_FLOAT(LPE_FLW_Z, 0.02f); // flow z std dev
PARAM_DEFINE_FLOAT(LPE_LDR_Z, 0.1f); // lidar z std dev
PARAM_DEFINE_FLOAT(LPE_ACC_XY, 0.06f); // accel xy std dev
PARAM_DEFINE_FLOAT(LPE_ACC_Z, 0.06f); // accel z std dev
PARAM_DEFINE_FLOAT(LPE_BAR_Z, 1.5f); // baro z std dev
PARAM_DEFINE_FLOAT(LPE_GPS_XY, 2.0f); // gps xy std dev
PARAM_DEFINE_FLOAT(LPE_GPS_Z, 5.0f); // gps z std dev
PARAM_DEFINE_FLOAT(LPE_GPS_VXY, 1.0f); // gps vel xy std dev
PARAM_DEFINE_FLOAT(LPE_GPS_VZ, 1.0f); // gps vel z std dev
PARAM_DEFINE_FLOAT(LPE_PN_P, 0.1f); // process noise position
PARAM_DEFINE_FLOAT(LPE_PN_V, 0.1f); // process noise velocity
