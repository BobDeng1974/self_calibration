// libPanoStitch.cpp : ���� DLL Ӧ�ó���ĵ���������
//


#include "libPanoStitch.h"
#include "V10PanoStitch.h"
#include "V10Calibrater.h"

namespace LibPanoStitch
{

LIBPANOSTITCH_API std::shared_ptr<IPanoStitch> CreatePanoStitch(eStitchType_t type) 
{
	//if (type == STITCH_TYPE_YIJUMP)
	return std::make_shared<V10PanoStitch>();

	return nullptr;
}

LIBPANOSTITCH_API std::shared_ptr<ICalibrate> CreateCalibrater(eStitchType_t type)
{
	return std::make_shared<V10Calibrater>();
}


}