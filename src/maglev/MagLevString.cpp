// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
#ifndef INCLUDED_maglev_MagLevString
#include <maglev/MagLevString.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fc3d282075c9cb4d_545_new,"maglev.MagLevString","new",0x3f0f9bd1,"maglev.MagLevString.new","maglev/MagLev.hx",545,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_fc3d282075c9cb4d_550_getString,"maglev.MagLevString","getString",0xeaa62838,"maglev.MagLevString.getString","maglev/MagLev.hx",550,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_fc3d282075c9cb4d_553_getType,"maglev.MagLevString","getType",0x3fd07a61,"maglev.MagLevString.getType","maglev/MagLev.hx",553,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_fc3d282075c9cb4d_559_isEqual,"maglev.MagLevString","isEqual",0x2f4d4b5b,"maglev.MagLevString.isEqual","maglev/MagLev.hx",559,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_fc3d282075c9cb4d_568_toJson,"maglev.MagLevString","toJson",0x5d47de72,"maglev.MagLevString.toJson","maglev/MagLev.hx",568,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_fc3d282075c9cb4d_543_fromString,"maglev.MagLevString","fromString",0x72dc228a,"maglev.MagLevString.fromString","maglev/MagLev.hx",543,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_fc3d282075c9cb4d_556_getStaticType,"maglev.MagLevString","getStaticType",0x62dc296f,"maglev.MagLevString.getStaticType","maglev/MagLev.hx",556,0x5b19476f)
namespace maglev{

void MagLevString_obj::__construct(::String value){
            	HX_STACKFRAME(&_hx_pos_fc3d282075c9cb4d_545_new)
HXLINE( 546)		this->value = value;
HXLINE( 547)		super::__construct();
            	}

Dynamic MagLevString_obj::__CreateEmpty() { return new MagLevString_obj; }

void *MagLevString_obj::_hx_vtable = 0;

Dynamic MagLevString_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MagLevString_obj > _hx_result = new MagLevString_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MagLevString_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0a8c36b9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0a8c36b9;
	} else {
		return inClassId==(int)0x7fdb9bc4;
	}
}

::String MagLevString_obj::getString(){
            	HX_STACKFRAME(&_hx_pos_fc3d282075c9cb4d_550_getString)
HXDLIN( 550)		return this->value;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevString_obj,getString,return )

int MagLevString_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_fc3d282075c9cb4d_553_getType)
HXDLIN( 553)		return 3;
            	}


bool MagLevString_obj::isEqual( ::maglev::MagLevAny other){
            	HX_STACKFRAME(&_hx_pos_fc3d282075c9cb4d_559_isEqual)
HXDLIN( 559)		int _hx_tmp = other->getType();
HXDLIN( 559)		if ((_hx_tmp == this->getType())) {
HXLINE( 560)			 ::maglev::MagLevString o = ::hx::TCast<  ::maglev::MagLevString >::cast(other);
HXLINE( 561)			::String _hx_tmp = this->getString();
HXDLIN( 561)			return (_hx_tmp == o->getString());
            		}
            		else {
HXLINE( 564)			return false;
            		}
HXLINE( 559)		return false;
            	}


 ::maglev::MagLevString MagLevString_obj::toJson(){
            	HX_GC_STACKFRAME(&_hx_pos_fc3d282075c9cb4d_568_toJson)
HXDLIN( 568)		return  ::maglev::MagLevString_obj::__alloc( HX_CTX ,((HX_("\"",22,00,00,00) + this->value) + HX_("\"",22,00,00,00)));
            	}


 ::maglev::MagLevString MagLevString_obj::fromString(::String value){
            	HX_GC_STACKFRAME(&_hx_pos_fc3d282075c9cb4d_543_fromString)
HXDLIN( 543)		return  ::maglev::MagLevString_obj::__alloc( HX_CTX ,value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MagLevString_obj,fromString,return )

int MagLevString_obj::getStaticType(){
            	HX_STACKFRAME(&_hx_pos_fc3d282075c9cb4d_556_getStaticType)
HXDLIN( 556)		return 3;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MagLevString_obj,getStaticType,return )


MagLevString_obj::MagLevString_obj()
{
}

void MagLevString_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MagLevString);
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void MagLevString_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val MagLevString_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toJson") ) { return ::hx::Val( toJson_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return ::hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEqual") ) { return ::hx::Val( isEqual_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getString") ) { return ::hx::Val( getString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MagLevString_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getStaticType") ) { outValue = getStaticType_dyn(); return true; }
	}
	return false;
}

::hx::Val MagLevString_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MagLevString_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("value",71,7f,b8,31));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MagLevString_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MagLevString_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MagLevString_obj_sStaticStorageInfo = 0;
#endif

static ::String MagLevString_obj_sMemberFields[] = {
	HX_("value",71,7f,b8,31),
	HX_("getString",07,b2,86,8d),
	HX_("getType",70,a2,8b,1f),
	HX_("isEqual",6a,73,08,0f),
	HX_("toJson",43,ad,21,7c),
	::String(null()) };

::hx::Class MagLevString_obj::__mClass;

static ::String MagLevString_obj_sStaticFields[] = {
	HX_("fromString",db,2d,74,54),
	HX_("getStaticType",be,46,27,0b),
	::String(null())
};

void MagLevString_obj::__register()
{
	MagLevString_obj _hx_dummy;
	MagLevString_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("maglev.MagLevString",5f,5f,a7,7c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MagLevString_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MagLevString_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MagLevString_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MagLevString_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MagLevString_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MagLevString_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace maglev
