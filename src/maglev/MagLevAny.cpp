// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
#ifndef INCLUDED_maglev_MagLevString
#include <maglev/MagLevString.h>
#endif
#ifndef INCLUDED_maglev_MagLevType
#include <maglev/MagLevType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f21b3a4d35ee6fc9_149_new,"maglev.MagLevAny","new",0x23f40790,"maglev.MagLevAny.new","maglev/MagLevTypes.hx",149,0x03b0b9b4)
HX_LOCAL_STACK_FRAME(_hx_pos_f21b3a4d35ee6fc9_151_toJson,"maglev.MagLevAny","toJson",0xd6f81413,"maglev.MagLevAny.toJson","maglev/MagLevTypes.hx",151,0x03b0b9b4)
HX_LOCAL_STACK_FRAME(_hx_pos_f21b3a4d35ee6fc9_154_getType,"maglev.MagLevAny","getType",0x404f31a0,"maglev.MagLevAny.getType","maglev/MagLevTypes.hx",154,0x03b0b9b4)
HX_LOCAL_STACK_FRAME(_hx_pos_f21b3a4d35ee6fc9_157_isEqual,"maglev.MagLevAny","isEqual",0x2fcc029a,"maglev.MagLevAny.isEqual","maglev/MagLevTypes.hx",157,0x03b0b9b4)
namespace maglev{

void MagLevAny_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f21b3a4d35ee6fc9_149_new)
            	}

Dynamic MagLevAny_obj::__CreateEmpty() { return new MagLevAny_obj; }

void *MagLevAny_obj::_hx_vtable = 0;

Dynamic MagLevAny_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MagLevAny_obj > _hx_result = new MagLevAny_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MagLevAny_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fdb9bc4;
}

 ::maglev::MagLevString MagLevAny_obj::toJson(){
            	HX_STACKFRAME(&_hx_pos_f21b3a4d35ee6fc9_151_toJson)
HXDLIN( 151)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("toJson does not exist for MagLevAny",eb,7d,66,1e)));
HXDLIN( 151)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevAny_obj,toJson,return )

 ::maglev::MagLevType MagLevAny_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_f21b3a4d35ee6fc9_154_getType)
HXDLIN( 154)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("getType does not exist for MagLevAny",9e,e6,de,74)));
HXDLIN( 154)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevAny_obj,getType,return )

bool MagLevAny_obj::isEqual( ::maglev::MagLevAny o){
            	HX_STACKFRAME(&_hx_pos_f21b3a4d35ee6fc9_157_isEqual)
HXDLIN( 157)		HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("isEqual does not exist for MagLevAny",64,ed,cb,b5)));
HXDLIN( 157)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevAny_obj,isEqual,return )


::hx::ObjectPtr< MagLevAny_obj > MagLevAny_obj::__new() {
	::hx::ObjectPtr< MagLevAny_obj > __this = new MagLevAny_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MagLevAny_obj > MagLevAny_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MagLevAny_obj *__this = (MagLevAny_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MagLevAny_obj), false, "maglev.MagLevAny"));
	*(void **)__this = MagLevAny_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MagLevAny_obj::MagLevAny_obj()
{
}

::hx::Val MagLevAny_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"toJson") ) { return ::hx::Val( toJson_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return ::hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEqual") ) { return ::hx::Val( isEqual_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *MagLevAny_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *MagLevAny_obj_sStaticStorageInfo = 0;
#endif

static ::String MagLevAny_obj_sMemberFields[] = {
	HX_("toJson",43,ad,21,7c),
	HX_("getType",70,a2,8b,1f),
	HX_("isEqual",6a,73,08,0f),
	::String(null()) };

::hx::Class MagLevAny_obj::__mClass;

void MagLevAny_obj::__register()
{
	MagLevAny_obj _hx_dummy;
	MagLevAny_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("maglev.MagLevAny",9e,3f,dd,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MagLevAny_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MagLevAny_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MagLevAny_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MagLevAny_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace maglev
