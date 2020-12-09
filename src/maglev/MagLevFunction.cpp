// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
#ifndef INCLUDED_maglev_MagLevArray
#include <maglev/MagLevArray.h>
#endif
#ifndef INCLUDED_maglev_MagLevFunction
#include <maglev/MagLevFunction.h>
#endif
#ifndef INCLUDED_maglev_MagLevResult
#include <maglev/MagLevResult.h>
#endif
#ifndef INCLUDED_maglev_MagLevString
#include <maglev/MagLevString.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_333_new,"maglev.MagLevFunction","new",0x91894d18,"maglev.MagLevFunction.new","maglev/MagLev.hx",333,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_339_call,"maglev.MagLevFunction","call",0xbf51bce6,"maglev.MagLevFunction.call","maglev/MagLev.hx",339,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_342_hasName,"maglev.MagLevFunction","hasName",0x89a1cb7d,"maglev.MagLevFunction.hasName","maglev/MagLev.hx",342,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_345_getName,"maglev.MagLevFunction","getName",0x8ce05ab9,"maglev.MagLevFunction.getName","maglev/MagLev.hx",345,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_348_getType,"maglev.MagLevFunction","getType",0x90e9db28,"maglev.MagLevFunction.getType","maglev/MagLev.hx",348,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_354_isEqual,"maglev.MagLevFunction","isEqual",0x8066ac22,"maglev.MagLevFunction.isEqual","maglev/MagLev.hx",354,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_368_toJson,"maglev.MagLevFunction","toJson",0x4a20f38b,"maglev.MagLevFunction.toJson","maglev/MagLev.hx",368,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_328_fromFunction,"maglev.MagLevFunction","fromFunction",0x1c2ab2ea,"maglev.MagLevFunction.fromFunction","maglev/MagLev.hx",328,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_331_fromNamedFunction,"maglev.MagLevFunction","fromNamedFunction",0xf24536df,"maglev.MagLevFunction.fromNamedFunction","maglev/MagLev.hx",331,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_c1339eb894fc0ca9_351_getStaticType,"maglev.MagLevFunction","getStaticType",0x6c6cd976,"maglev.MagLevFunction.getStaticType","maglev/MagLev.hx",351,0x5b19476f)
namespace maglev{

void MagLevFunction_obj::__construct( ::Dynamic value,::String name){
            	HX_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_333_new)
HXLINE( 334)		this->name = name;
HXLINE( 335)		this->value = value;
HXLINE( 336)		super::__construct();
            	}

Dynamic MagLevFunction_obj::__CreateEmpty() { return new MagLevFunction_obj; }

void *MagLevFunction_obj::_hx_vtable = 0;

Dynamic MagLevFunction_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MagLevFunction_obj > _hx_result = new MagLevFunction_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool MagLevFunction_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0befd170) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0befd170;
	} else {
		return inClassId==(int)0x7fdb9bc4;
	}
}

 ::maglev::MagLevResult MagLevFunction_obj::call( ::maglev::MagLevArray args){
            	HX_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_339_call)
HXDLIN( 339)		return ( ( ::maglev::MagLevResult)(this->value(args)) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevFunction_obj,call,return )

bool MagLevFunction_obj::hasName(){
            	HX_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_342_hasName)
HXDLIN( 342)		return ::hx::IsNotNull( this->name );
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevFunction_obj,hasName,return )

::String MagLevFunction_obj::getName(){
            	HX_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_345_getName)
HXDLIN( 345)		return this->name;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevFunction_obj,getName,return )

int MagLevFunction_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_348_getType)
HXDLIN( 348)		return 200;
            	}


bool MagLevFunction_obj::isEqual( ::maglev::MagLevAny other){
            	HX_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_354_isEqual)
HXDLIN( 354)		int _hx_tmp = other->getType();
HXDLIN( 354)		if ((_hx_tmp == this->getType())) {
HXLINE( 355)			 ::maglev::MagLevFunction o = ::hx::TCast<  ::maglev::MagLevFunction >::cast(other);
HXLINE( 356)			bool _hx_tmp;
HXDLIN( 356)			if (this->hasName()) {
HXLINE( 356)				_hx_tmp = o->hasName();
            			}
            			else {
HXLINE( 356)				_hx_tmp = false;
            			}
HXDLIN( 356)			if (_hx_tmp) {
HXLINE( 357)				::String _hx_tmp = this->getName();
HXDLIN( 357)				return (_hx_tmp == o->getName());
            			}
            			else {
HXLINE( 360)				return false;
            			}
            		}
            		else {
HXLINE( 364)			return false;
            		}
HXLINE( 354)		return false;
            	}


 ::maglev::MagLevString MagLevFunction_obj::toJson(){
            	HX_GC_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_368_toJson)
HXDLIN( 368)		if (this->hasName()) {
HXLINE( 369)			return  ::maglev::MagLevString_obj::__alloc( HX_CTX ,((HX_("<function ",4c,22,77,c5) + this->name) + HX_(">",3e,00,00,00)));
            		}
            		else {
HXLINE( 372)			return  ::maglev::MagLevString_obj::__alloc( HX_CTX ,HX_("<anon func>",e2,ab,20,33));
            		}
HXLINE( 368)		return null();
            	}


 ::maglev::MagLevFunction MagLevFunction_obj::fromFunction( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_328_fromFunction)
HXDLIN( 328)		return  ::maglev::MagLevFunction_obj::__alloc( HX_CTX ,value,null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MagLevFunction_obj,fromFunction,return )

 ::maglev::MagLevFunction MagLevFunction_obj::fromNamedFunction( ::Dynamic value,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_331_fromNamedFunction)
HXDLIN( 331)		return  ::maglev::MagLevFunction_obj::__alloc( HX_CTX ,value,name);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MagLevFunction_obj,fromNamedFunction,return )

int MagLevFunction_obj::getStaticType(){
            	HX_STACKFRAME(&_hx_pos_c1339eb894fc0ca9_351_getStaticType)
HXDLIN( 351)		return 200;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MagLevFunction_obj,getStaticType,return )


::hx::ObjectPtr< MagLevFunction_obj > MagLevFunction_obj::__new( ::Dynamic value,::String name) {
	::hx::ObjectPtr< MagLevFunction_obj > __this = new MagLevFunction_obj();
	__this->__construct(value,name);
	return __this;
}

::hx::ObjectPtr< MagLevFunction_obj > MagLevFunction_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::String name) {
	MagLevFunction_obj *__this = (MagLevFunction_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MagLevFunction_obj), true, "maglev.MagLevFunction"));
	*(void **)__this = MagLevFunction_obj::_hx_vtable;
	__this->__construct(value,name);
	return __this;
}

MagLevFunction_obj::MagLevFunction_obj()
{
}

void MagLevFunction_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MagLevFunction);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void MagLevFunction_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(value,"value");
}

::hx::Val MagLevFunction_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { return ::hx::Val( value ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toJson") ) { return ::hx::Val( toJson_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasName") ) { return ::hx::Val( hasName_dyn() ); }
		if (HX_FIELD_EQ(inName,"getName") ) { return ::hx::Val( getName_dyn() ); }
		if (HX_FIELD_EQ(inName,"getType") ) { return ::hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEqual") ) { return ::hx::Val( isEqual_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MagLevFunction_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"fromFunction") ) { outValue = fromFunction_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getStaticType") ) { outValue = getStaticType_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"fromNamedFunction") ) { outValue = fromNamedFunction_dyn(); return true; }
	}
	return false;
}

::hx::Val MagLevFunction_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MagLevFunction_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MagLevFunction_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(MagLevFunction_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(MagLevFunction_obj,value),HX_("value",71,7f,b8,31)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MagLevFunction_obj_sStaticStorageInfo = 0;
#endif

static ::String MagLevFunction_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("value",71,7f,b8,31),
	HX_("call",9e,18,ba,41),
	HX_("hasName",c5,92,43,18),
	HX_("getName",01,22,82,1b),
	HX_("getType",70,a2,8b,1f),
	HX_("isEqual",6a,73,08,0f),
	HX_("toJson",43,ad,21,7c),
	::String(null()) };

::hx::Class MagLevFunction_obj::__mClass;

static ::String MagLevFunction_obj_sStaticFields[] = {
	HX_("fromFunction",a2,86,69,b4),
	HX_("fromNamedFunction",27,e8,13,98),
	HX_("getStaticType",be,46,27,0b),
	::String(null())
};

void MagLevFunction_obj::__register()
{
	MagLevFunction_obj _hx_dummy;
	MagLevFunction_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("maglev.MagLevFunction",26,21,ef,b4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MagLevFunction_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MagLevFunction_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MagLevFunction_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MagLevFunction_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MagLevFunction_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MagLevFunction_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace maglev
