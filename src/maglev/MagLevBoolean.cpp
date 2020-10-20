// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
#ifndef INCLUDED_maglev_MagLevBoolean
#include <maglev/MagLevBoolean.h>
#endif
#ifndef INCLUDED_maglev_MagLevString
#include <maglev/MagLevString.h>
#endif
#ifndef INCLUDED_maglev__MagLev_MagLevType_Impl_
#include <maglev/_MagLev/MagLevType_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9cce07e260f1bc30_529_new,"maglev.MagLevBoolean","new",0xa41b464c,"maglev.MagLevBoolean.new","maglev/MagLev.hx",529,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_9cce07e260f1bc30_534_getBool,"maglev.MagLevBoolean","getBool",0x6b550fcc,"maglev.MagLevBoolean.getBool","maglev/MagLev.hx",534,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_9cce07e260f1bc30_537_getType,"maglev.MagLevBoolean","getType",0x77427e5c,"maglev.MagLevBoolean.getType","maglev/MagLev.hx",537,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_9cce07e260f1bc30_540_isEqual,"maglev.MagLevBoolean","isEqual",0x66bf4f56,"maglev.MagLevBoolean.isEqual","maglev/MagLev.hx",540,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_9cce07e260f1bc30_549_toJson,"maglev.MagLevBoolean","toJson",0x20afb2d7,"maglev.MagLevBoolean.toJson","maglev/MagLev.hx",549,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_9cce07e260f1bc30_527_fromBool,"maglev.MagLevBoolean","fromBool",0x0730e548,"maglev.MagLevBoolean.fromBool","maglev/MagLev.hx",527,0x5b19476f)
namespace maglev{

void MagLevBoolean_obj::__construct(bool value){
            	HX_STACKFRAME(&_hx_pos_9cce07e260f1bc30_529_new)
HXLINE( 530)		this->value = value;
HXLINE( 531)		super::__construct();
            	}

Dynamic MagLevBoolean_obj::__CreateEmpty() { return new MagLevBoolean_obj; }

void *MagLevBoolean_obj::_hx_vtable = 0;

Dynamic MagLevBoolean_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MagLevBoolean_obj > _hx_result = new MagLevBoolean_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MagLevBoolean_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x4e494b34) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x4e494b34;
	} else {
		return inClassId==(int)0x7fdb9bc4;
	}
}

bool MagLevBoolean_obj::getBool(){
            	HX_STACKFRAME(&_hx_pos_9cce07e260f1bc30_534_getBool)
HXDLIN( 534)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevBoolean_obj,getBool,return )

int MagLevBoolean_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_9cce07e260f1bc30_537_getType)
HXDLIN( 537)		return ::maglev::_MagLev::MagLevType_Impl__obj::MagLevType_Boolean;
            	}


bool MagLevBoolean_obj::isEqual( ::maglev::MagLevAny other){
            	HX_STACKFRAME(&_hx_pos_9cce07e260f1bc30_540_isEqual)
HXDLIN( 540)		int _hx_tmp = other->getType();
HXDLIN( 540)		if ((_hx_tmp == this->getType())) {
HXLINE( 541)			 ::maglev::MagLevBoolean o = ::hx::TCast<  ::maglev::MagLevBoolean >::cast(other);
HXLINE( 542)			bool _hx_tmp = this->getBool();
HXDLIN( 542)			return (_hx_tmp == o->getBool());
            		}
            		else {
HXLINE( 545)			return false;
            		}
HXLINE( 540)		return false;
            	}


 ::maglev::MagLevString MagLevBoolean_obj::toJson(){
            	HX_GC_STACKFRAME(&_hx_pos_9cce07e260f1bc30_549_toJson)
HXDLIN( 549)		if (this->value) {
HXLINE( 550)			return  ::maglev::MagLevString_obj::__alloc( HX_CTX ,HX_("true",4e,a7,03,4d));
            		}
            		else {
HXLINE( 552)			return  ::maglev::MagLevString_obj::__alloc( HX_CTX ,HX_("false",a3,35,4f,fb));
            		}
HXLINE( 549)		return null();
            	}


 ::maglev::MagLevBoolean MagLevBoolean_obj::fromBool(bool value){
            	HX_GC_STACKFRAME(&_hx_pos_9cce07e260f1bc30_527_fromBool)
HXDLIN( 527)		return  ::maglev::MagLevBoolean_obj::__alloc( HX_CTX ,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MagLevBoolean_obj,fromBool,return )


::hx::ObjectPtr< MagLevBoolean_obj > MagLevBoolean_obj::__new(bool value) {
	::hx::ObjectPtr< MagLevBoolean_obj > __this = new MagLevBoolean_obj();
	__this->__construct(value);
	return __this;
}

::hx::ObjectPtr< MagLevBoolean_obj > MagLevBoolean_obj::__alloc(::hx::Ctx *_hx_ctx,bool value) {
	MagLevBoolean_obj *__this = (MagLevBoolean_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MagLevBoolean_obj), false, "maglev.MagLevBoolean"));
	*(void **)__this = MagLevBoolean_obj::_hx_vtable;
	__this->__construct(value);
	return __this;
}

MagLevBoolean_obj::MagLevBoolean_obj()
{
}

::hx::Val MagLevBoolean_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toJson") ) { return ::hx::Val( toJson_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getBool") ) { return ::hx::Val( getBool_dyn() ); }
		if (HX_FIELD_EQ(inName,"getType") ) { return ::hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEqual") ) { return ::hx::Val( isEqual_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MagLevBoolean_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fromBool") ) { outValue = fromBool_dyn(); return true; }
	}
	return false;
}

::hx::Val MagLevBoolean_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MagLevBoolean_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MagLevBoolean_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(MagLevBoolean_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MagLevBoolean_obj_sStaticStorageInfo = 0;
#endif

static ::String MagLevBoolean_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("getBool",e0,33,9e,13),
	HX_("getType",70,a2,8b,1f),
	HX_("isEqual",6a,73,08,0f),
	HX_("toJson",43,ad,21,7c),
	::String(null()) };

::hx::Class MagLevBoolean_obj::__mClass;

static ::String MagLevBoolean_obj_sStaticFields[] = {
	HX_("fromBool",b4,52,e7,9e),
	::String(null())
};

void MagLevBoolean_obj::__register()
{
	MagLevBoolean_obj _hx_dummy;
	MagLevBoolean_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("maglev.MagLevBoolean",5a,70,d7,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MagLevBoolean_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MagLevBoolean_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MagLevBoolean_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MagLevBoolean_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MagLevBoolean_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MagLevBoolean_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace maglev
