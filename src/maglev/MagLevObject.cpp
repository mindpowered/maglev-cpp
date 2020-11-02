// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
#ifndef INCLUDED_maglev_MagLevArray
#include <maglev/MagLevArray.h>
#endif
#ifndef INCLUDED_maglev_MagLevNull
#include <maglev/MagLevNull.h>
#endif
#ifndef INCLUDED_maglev_MagLevObject
#include <maglev/MagLevObject.h>
#endif
#ifndef INCLUDED_maglev_MagLevString
#include <maglev/MagLevString.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2e379a9ac695f20c_339_new,"maglev.MagLevObject","new",0x0f4b80bf,"maglev.MagLevObject.new","maglev/MagLev.hx",339,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_344_clear,"maglev.MagLevObject","clear",0xc8e737ac,"maglev.MagLevObject.clear","maglev/MagLev.hx",344,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_347_exists,"maglev.MagLevObject","exists",0xb9a1b2dd,"maglev.MagLevObject.exists","maglev/MagLev.hx",347,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_350_get,"maglev.MagLevObject","get",0x0f4630f5,"maglev.MagLevObject.get","maglev/MagLev.hx",350,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_352_keys,"maglev.MagLevObject","keys",0x50c984b5,"maglev.MagLevObject.keys","maglev/MagLev.hx",352,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_360_remove,"maglev.MagLevObject","remove",0xfe4a3145,"maglev.MagLevObject.remove","maglev/MagLev.hx",360,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_363_set,"maglev.MagLevObject","set",0x0f4f4c01,"maglev.MagLevObject.set","maglev/MagLev.hx",363,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_366_getStringMap,"maglev.MagLevObject","getStringMap",0x3f449a96,"maglev.MagLevObject.getStringMap","maglev/MagLev.hx",366,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_369_getType,"maglev.MagLevObject","getType",0xaf2c6e4f,"maglev.MagLevObject.getType","maglev/MagLev.hx",369,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_375_isEqual,"maglev.MagLevObject","isEqual",0x9ea93f49,"maglev.MagLevObject.isEqual","maglev/MagLev.hx",375,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_400_toJson,"maglev.MagLevObject","toJson",0x75e34244,"maglev.MagLevObject.toJson","maglev/MagLev.hx",400,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_337_create,"maglev.MagLevObject","create",0x75d0fbfd,"maglev.MagLevObject.create","maglev/MagLev.hx",337,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_372_getStaticType,"maglev.MagLevObject","getStaticType",0xd124c3dd,"maglev.MagLevObject.getStaticType","maglev/MagLev.hx",372,0x5b19476f)
namespace maglev{

void MagLevObject_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2e379a9ac695f20c_339_new)
HXLINE( 340)		this->values =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 341)		super::__construct();
            	}

Dynamic MagLevObject_obj::__CreateEmpty() { return new MagLevObject_obj; }

void *MagLevObject_obj::_hx_vtable = 0;

Dynamic MagLevObject_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MagLevObject_obj > _hx_result = new MagLevObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MagLevObject_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0e9b8ca7) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0e9b8ca7;
	} else {
		return inClassId==(int)0x7fdb9bc4;
	}
}

void MagLevObject_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_344_clear)
HXDLIN( 344)		this->values->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevObject_obj,clear,(void))

bool MagLevObject_obj::exists(::String key){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_347_exists)
HXDLIN( 347)		return this->values->exists(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevObject_obj,exists,return )

 ::maglev::MagLevAny MagLevObject_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_350_get)
HXDLIN( 350)		return ::maglev::MagLevNull_obj::wrap(( ( ::maglev::MagLevAny)(this->values->get(key)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevObject_obj,get,return )

 ::maglev::MagLevArray MagLevObject_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_2e379a9ac695f20c_352_keys)
HXLINE( 353)		 ::maglev::MagLevArray arr =  ::maglev::MagLevArray_obj::__alloc( HX_CTX );
HXLINE( 354)		{
HXLINE( 354)			 ::Dynamic k = this->values->keys();
HXDLIN( 354)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 354)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 355)				arr->push( ::maglev::MagLevString_obj::__alloc( HX_CTX ,k1));
            			}
            		}
HXLINE( 357)		return arr;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevObject_obj,keys,return )

bool MagLevObject_obj::remove(::String key){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_360_remove)
HXDLIN( 360)		return this->values->remove(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevObject_obj,remove,return )

void MagLevObject_obj::set(::String key, ::maglev::MagLevAny value){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_363_set)
HXDLIN( 363)		::Dynamic this1 = this->values;
HXDLIN( 363)		( ( ::haxe::ds::StringMap)(this1) )->set(key,::maglev::MagLevNull_obj::wrap(value));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLevObject_obj,set,(void))

 ::haxe::ds::StringMap MagLevObject_obj::getStringMap(){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_366_getStringMap)
HXDLIN( 366)		return this->values;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevObject_obj,getStringMap,return )

int MagLevObject_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_369_getType)
HXDLIN( 369)		return 6;
            	}


bool MagLevObject_obj::isEqual( ::maglev::MagLevAny other){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_375_isEqual)
HXDLIN( 375)		int _hx_tmp = other->getType();
HXDLIN( 375)		if ((_hx_tmp == this->getType())) {
HXLINE( 376)			 ::maglev::MagLevObject obj = ::hx::TCast<  ::maglev::MagLevObject >::cast(other);
HXLINE( 377)			{
HXLINE( 377)				 ::Dynamic key = this->values->keys();
HXDLIN( 377)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 377)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 378)					bool found = false;
HXLINE( 379)					bool equal = false;
HXLINE( 380)					{
HXLINE( 380)						 ::Dynamic key2 = obj->getStringMap()->keys();
HXDLIN( 380)						while(( (bool)(key2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 380)							::String key21 = ( (::String)(key2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 381)							if ((key1 == key21)) {
HXLINE( 382)								found = true;
HXLINE( 383)								 ::maglev::MagLevAny val = ( ( ::maglev::MagLevAny)(this->values->get(key1)) );
HXLINE( 384)								 ::maglev::MagLevAny val2 = ( ( ::maglev::MagLevAny)(obj->values->get(key21)) );
HXLINE( 385)								if (val->isEqual(val2)) {
HXLINE( 386)									equal = true;
            								}
            							}
            						}
            					}
HXLINE( 390)					bool _hx_tmp;
HXDLIN( 390)					if (found) {
HXLINE( 390)						_hx_tmp = !(equal);
            					}
            					else {
HXLINE( 390)						_hx_tmp = true;
            					}
HXDLIN( 390)					if (_hx_tmp) {
HXLINE( 391)						return false;
            					}
            				}
            			}
HXLINE( 394)			return true;
            		}
            		else {
HXLINE( 397)			return false;
            		}
HXLINE( 375)		return false;
            	}


 ::maglev::MagLevString MagLevObject_obj::toJson(){
            	HX_GC_STACKFRAME(&_hx_pos_2e379a9ac695f20c_400_toJson)
HXLINE( 401)		::String s = HX_("{",7b,00,00,00);
HXLINE( 402)		bool first = true;
HXLINE( 403)		{
HXLINE( 403)			 ::Dynamic key = this->values->keys();
HXDLIN( 403)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 403)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 404)				if (!(first)) {
HXLINE( 405)					s = (s + HX_(", ",74,26,00,00));
            				}
HXLINE( 407)				s = (s + key1);
HXLINE( 408)				s = (s + HX_(": ",a6,32,00,00));
HXLINE( 409)				s = (s + ::Std_obj::string(( ( ::maglev::MagLevAny)(this->values->get(key1)) )->toJson()));
HXLINE( 410)				first = false;
            			}
            		}
HXLINE( 412)		s = (s + HX_("}",7d,00,00,00));
HXLINE( 413)		return  ::maglev::MagLevString_obj::__alloc( HX_CTX ,s);
            	}


 ::maglev::MagLevObject MagLevObject_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_2e379a9ac695f20c_337_create)
HXDLIN( 337)		return  ::maglev::MagLevObject_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MagLevObject_obj,create,return )

int MagLevObject_obj::getStaticType(){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_372_getStaticType)
HXDLIN( 372)		return 6;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MagLevObject_obj,getStaticType,return )


::hx::ObjectPtr< MagLevObject_obj > MagLevObject_obj::__new() {
	::hx::ObjectPtr< MagLevObject_obj > __this = new MagLevObject_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MagLevObject_obj > MagLevObject_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MagLevObject_obj *__this = (MagLevObject_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MagLevObject_obj), true, "maglev.MagLevObject"));
	*(void **)__this = MagLevObject_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MagLevObject_obj::MagLevObject_obj()
{
}

void MagLevObject_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MagLevObject);
	HX_MARK_MEMBER_NAME(values,"values");
	HX_MARK_END_CLASS();
}

void MagLevObject_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(values,"values");
}

::hx::Val MagLevObject_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { return ::hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"toJson") ) { return ::hx::Val( toJson_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return ::hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEqual") ) { return ::hx::Val( isEqual_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getStringMap") ) { return ::hx::Val( getStringMap_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MagLevObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getStaticType") ) { outValue = getStaticType_dyn(); return true; }
	}
	return false;
}

::hx::Val MagLevObject_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MagLevObject_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("values",e2,03,b7,4f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MagLevObject_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(MagLevObject_obj,values),HX_("values",e2,03,b7,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MagLevObject_obj_sStaticStorageInfo = 0;
#endif

static ::String MagLevObject_obj_sMemberFields[] = {
	HX_("values",e2,03,b7,4f),
	HX_("clear",8d,71,5b,48),
	HX_("exists",dc,1d,e0,bf),
	HX_("get",96,80,4e,00),
	HX_("keys",f4,e1,06,47),
	HX_("remove",44,9c,88,04),
	HX_("set",a2,9b,57,00),
	HX_("getStringMap",d5,ce,0f,d7),
	HX_("getType",70,a2,8b,1f),
	HX_("isEqual",6a,73,08,0f),
	HX_("toJson",43,ad,21,7c),
	::String(null()) };

::hx::Class MagLevObject_obj::__mClass;

static ::String MagLevObject_obj_sStaticFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("getStaticType",be,46,27,0b),
	::String(null())
};

void MagLevObject_obj::__register()
{
	MagLevObject_obj _hx_dummy;
	MagLevObject_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("maglev.MagLevObject",4d,b5,b6,80);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MagLevObject_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MagLevObject_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MagLevObject_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MagLevObject_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MagLevObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MagLevObject_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace maglev
