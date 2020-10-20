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
#ifndef INCLUDED_maglev__MagLev_MagLevType_Impl_
#include <maglev/_MagLev/MagLevType_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2e379a9ac695f20c_301_new,"maglev.MagLevObject","new",0x0f4b80bf,"maglev.MagLevObject.new","maglev/MagLev.hx",301,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_306_clear,"maglev.MagLevObject","clear",0xc8e737ac,"maglev.MagLevObject.clear","maglev/MagLev.hx",306,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_309_exists,"maglev.MagLevObject","exists",0xb9a1b2dd,"maglev.MagLevObject.exists","maglev/MagLev.hx",309,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_312_get,"maglev.MagLevObject","get",0x0f4630f5,"maglev.MagLevObject.get","maglev/MagLev.hx",312,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_314_keys,"maglev.MagLevObject","keys",0x50c984b5,"maglev.MagLevObject.keys","maglev/MagLev.hx",314,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_322_remove,"maglev.MagLevObject","remove",0xfe4a3145,"maglev.MagLevObject.remove","maglev/MagLev.hx",322,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_325_set,"maglev.MagLevObject","set",0x0f4f4c01,"maglev.MagLevObject.set","maglev/MagLev.hx",325,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_328_getStringMap,"maglev.MagLevObject","getStringMap",0x3f449a96,"maglev.MagLevObject.getStringMap","maglev/MagLev.hx",328,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_331_getType,"maglev.MagLevObject","getType",0xaf2c6e4f,"maglev.MagLevObject.getType","maglev/MagLev.hx",331,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_334_isEqual,"maglev.MagLevObject","isEqual",0x9ea93f49,"maglev.MagLevObject.isEqual","maglev/MagLev.hx",334,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_359_toJson,"maglev.MagLevObject","toJson",0x75e34244,"maglev.MagLevObject.toJson","maglev/MagLev.hx",359,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_2e379a9ac695f20c_299_create,"maglev.MagLevObject","create",0x75d0fbfd,"maglev.MagLevObject.create","maglev/MagLev.hx",299,0x5b19476f)
namespace maglev{

void MagLevObject_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_2e379a9ac695f20c_301_new)
HXLINE( 302)		this->values =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 303)		super::__construct();
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
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_306_clear)
HXDLIN( 306)		this->values->clear();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevObject_obj,clear,(void))

bool MagLevObject_obj::exists(::String key){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_309_exists)
HXDLIN( 309)		return this->values->exists(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevObject_obj,exists,return )

 ::maglev::MagLevAny MagLevObject_obj::get(::String key){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_312_get)
HXDLIN( 312)		return ::maglev::MagLevNull_obj::wrap(( ( ::maglev::MagLevAny)(this->values->get(key)) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevObject_obj,get,return )

 ::maglev::MagLevArray MagLevObject_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_2e379a9ac695f20c_314_keys)
HXLINE( 315)		 ::maglev::MagLevArray arr =  ::maglev::MagLevArray_obj::__alloc( HX_CTX );
HXLINE( 316)		{
HXLINE( 316)			 ::Dynamic k = this->values->keys();
HXDLIN( 316)			while(( (bool)(k->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 316)				::String k1 = ( (::String)(k->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 317)				arr->push( ::maglev::MagLevString_obj::__alloc( HX_CTX ,k1));
            			}
            		}
HXLINE( 319)		return arr;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevObject_obj,keys,return )

bool MagLevObject_obj::remove(::String key){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_322_remove)
HXDLIN( 322)		return this->values->remove(key);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevObject_obj,remove,return )

void MagLevObject_obj::set(::String key, ::maglev::MagLevAny value){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_325_set)
HXDLIN( 325)		::Dynamic this1 = this->values;
HXDLIN( 325)		( ( ::haxe::ds::StringMap)(this1) )->set(key,::maglev::MagLevNull_obj::wrap(value));
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLevObject_obj,set,(void))

 ::haxe::ds::StringMap MagLevObject_obj::getStringMap(){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_328_getStringMap)
HXDLIN( 328)		return this->values;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevObject_obj,getStringMap,return )

int MagLevObject_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_331_getType)
HXDLIN( 331)		return ::maglev::_MagLev::MagLevType_Impl__obj::MagLevType_Object;
            	}


bool MagLevObject_obj::isEqual( ::maglev::MagLevAny other){
            	HX_STACKFRAME(&_hx_pos_2e379a9ac695f20c_334_isEqual)
HXDLIN( 334)		int _hx_tmp = other->getType();
HXDLIN( 334)		if ((_hx_tmp == this->getType())) {
HXLINE( 335)			 ::maglev::MagLevObject obj = ::hx::TCast<  ::maglev::MagLevObject >::cast(other);
HXLINE( 336)			{
HXLINE( 336)				 ::Dynamic key = this->values->keys();
HXDLIN( 336)				while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 336)					::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 337)					bool found = false;
HXLINE( 338)					bool equal = false;
HXLINE( 339)					{
HXLINE( 339)						 ::Dynamic key2 = obj->getStringMap()->keys();
HXDLIN( 339)						while(( (bool)(key2->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 339)							::String key21 = ( (::String)(key2->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 340)							if ((key1 == key21)) {
HXLINE( 341)								found = true;
HXLINE( 342)								 ::maglev::MagLevAny val = ( ( ::maglev::MagLevAny)(this->values->get(key1)) );
HXLINE( 343)								 ::maglev::MagLevAny val2 = ( ( ::maglev::MagLevAny)(obj->values->get(key21)) );
HXLINE( 344)								if (val->isEqual(val2)) {
HXLINE( 345)									equal = true;
            								}
            							}
            						}
            					}
HXLINE( 349)					bool _hx_tmp;
HXDLIN( 349)					if (found) {
HXLINE( 349)						_hx_tmp = !(equal);
            					}
            					else {
HXLINE( 349)						_hx_tmp = true;
            					}
HXDLIN( 349)					if (_hx_tmp) {
HXLINE( 350)						return false;
            					}
            				}
            			}
HXLINE( 353)			return true;
            		}
            		else {
HXLINE( 356)			return false;
            		}
HXLINE( 334)		return false;
            	}


 ::maglev::MagLevString MagLevObject_obj::toJson(){
            	HX_GC_STACKFRAME(&_hx_pos_2e379a9ac695f20c_359_toJson)
HXLINE( 360)		::String s = HX_("{",7b,00,00,00);
HXLINE( 361)		bool first = true;
HXLINE( 362)		{
HXLINE( 362)			 ::Dynamic key = this->values->keys();
HXDLIN( 362)			while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 362)				::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 363)				if (!(first)) {
HXLINE( 364)					s = (s + HX_(", ",74,26,00,00));
            				}
HXLINE( 366)				s = (s + key1);
HXLINE( 367)				s = (s + HX_(": ",a6,32,00,00));
HXLINE( 368)				s = (s + ::Std_obj::string(( ( ::maglev::MagLevAny)(this->values->get(key1)) )->toJson()));
HXLINE( 369)				first = false;
            			}
            		}
HXLINE( 371)		s = (s + HX_("}",7d,00,00,00));
HXLINE( 372)		return  ::maglev::MagLevString_obj::__alloc( HX_CTX ,s);
            	}


 ::maglev::MagLevObject MagLevObject_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_2e379a9ac695f20c_299_create)
HXDLIN( 299)		return  ::maglev::MagLevObject_obj::__alloc( HX_CTX );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MagLevObject_obj,create,return )


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
