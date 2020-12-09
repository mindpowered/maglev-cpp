// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_http_HttpBase
#include <haxe/http/HttpBase.h>
#endif
#ifndef INCLUDED_maglev_Telemetry
#include <maglev/Telemetry.h>
#endif
#ifndef INCLUDED_sys_Http
#include <sys/Http.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3a77c34645d29f08_18_new,"maglev.Telemetry","new",0x0c38c787,"maglev.Telemetry.new","maglev/Telemetry.hx",18,0x0339434a)
HX_LOCAL_STACK_FRAME(_hx_pos_3a77c34645d29f08_21_addInfo,"maglev.Telemetry","addInfo",0xbdc591d6,"maglev.Telemetry.addInfo","maglev/Telemetry.hx",21,0x0339434a)
HX_LOCAL_STACK_FRAME(_hx_pos_3a77c34645d29f08_25_send,"maglev.Telemetry","send",0xa8c3d841,"maglev.Telemetry.send","maglev/Telemetry.hx",25,0x0339434a)
namespace maglev{

void Telemetry_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3a77c34645d29f08_18_new)
HXDLIN(  18)		this->info = ::Array_obj< ::String >::__new();
            	}

Dynamic Telemetry_obj::__CreateEmpty() { return new Telemetry_obj; }

void *Telemetry_obj::_hx_vtable = 0;

Dynamic Telemetry_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Telemetry_obj > _hx_result = new Telemetry_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Telemetry_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7ff8fd8b;
}

void Telemetry_obj::addInfo(::Array< ::String > args){
            	HX_STACKFRAME(&_hx_pos_3a77c34645d29f08_21_addInfo)
HXDLIN(  21)		int _g = 0;
HXDLIN(  21)		while((_g < args->length)){
HXDLIN(  21)			::String arg = args->__get(_g);
HXDLIN(  21)			_g = (_g + 1);
HXLINE(  22)			this->info->push(arg);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Telemetry_obj,addInfo,(void))

void Telemetry_obj::send(::Array< ::String > args){
            	HX_STACKFRAME(&_hx_pos_3a77c34645d29f08_25_send)
HXLINE(  26)		::String url = HX_("https://telemetry.mindpowered.dev/send?",3d,7f,01,b7);
HXLINE(  27)		{
HXLINE(  27)			int _g = 0;
HXDLIN(  27)			::Array< ::String > _g1 = this->info;
HXDLIN(  27)			while((_g < _g1->length)){
HXLINE(  27)				::String item = _g1->__get(_g);
HXDLIN(  27)				_g = (_g + 1);
HXLINE(  28)				url = (url + (::StringTools_obj::urlEncode(item) + HX_("&",26,00,00,00)));
            			}
            		}
HXLINE(  30)		{
HXLINE(  30)			int _g2 = 0;
HXDLIN(  30)			while((_g2 < args->length)){
HXLINE(  30)				::String item = args->__get(_g2);
HXDLIN(  30)				_g2 = (_g2 + 1);
HXLINE(  31)				url = (url + (::StringTools_obj::urlEncode(item) + HX_("&",26,00,00,00)));
            			}
            		}
HXLINE(  33)		::sys::Http_obj::requestUrl(url);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Telemetry_obj,send,(void))


::hx::ObjectPtr< Telemetry_obj > Telemetry_obj::__new() {
	::hx::ObjectPtr< Telemetry_obj > __this = new Telemetry_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Telemetry_obj > Telemetry_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Telemetry_obj *__this = (Telemetry_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Telemetry_obj), true, "maglev.Telemetry"));
	*(void **)__this = Telemetry_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Telemetry_obj::Telemetry_obj()
{
}

void Telemetry_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Telemetry);
	HX_MARK_MEMBER_NAME(info,"info");
	HX_MARK_END_CLASS();
}

void Telemetry_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(info,"info");
}

::hx::Val Telemetry_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info ); }
		if (HX_FIELD_EQ(inName,"send") ) { return ::hx::Val( send_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"addInfo") ) { return ::hx::Val( addInfo_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Telemetry_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Telemetry_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("info",6e,38,bb,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Telemetry_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(Telemetry_obj,info),HX_("info",6e,38,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Telemetry_obj_sStaticStorageInfo = 0;
#endif

static ::String Telemetry_obj_sMemberFields[] = {
	HX_("info",6e,38,bb,45),
	HX_("addInfo",2f,7b,f8,81),
	HX_("send",48,8d,50,4c),
	::String(null()) };

::hx::Class Telemetry_obj::__mClass;

void Telemetry_obj::__register()
{
	Telemetry_obj _hx_dummy;
	Telemetry_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("maglev.Telemetry",15,f8,36,a3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Telemetry_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Telemetry_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Telemetry_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Telemetry_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace maglev