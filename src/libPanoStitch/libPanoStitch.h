// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� LIBIMAGEMERGER_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// LIBPanoStitch_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#if defined WIN32 || defined _WIN32
#ifdef LIBPANOSTITCH_EXPORTS 
#define LIBPANOSTITCH_API __declspec(dllexport)
#else
#define LIBPANOSTITCH_API __declspec(dllimport)
#endif
#else
#define LIBPANOSTITCH_API 
#endif

#include <memory>

namespace LibPanoStitch
{

	class IPanoStitch;
	class ICalibrate;
	enum eStitchType_t{
		STITCH_TYPE_SIMPLE = 0,
		STITCH_TYPE_FISHEYE,
		STITCH_TYPE_YIJUMP
	};	
	LIBPANOSTITCH_API std::shared_ptr<IPanoStitch> CreatePanoStitch(eStitchType_t type = STITCH_TYPE_SIMPLE);
	LIBPANOSTITCH_API std::shared_ptr<ICalibrate> CreateCalibrater(eStitchType_t type = STITCH_TYPE_SIMPLE);

}