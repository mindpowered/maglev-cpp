// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_maglev_MagLev
#include <maglev/MagLev.h>
#endif
#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
#ifndef INCLUDED_maglev_MagLevArray
#include <maglev/MagLevArray.h>
#endif
#ifndef INCLUDED_maglev_MagLevBoolean
#include <maglev/MagLevBoolean.h>
#endif
#ifndef INCLUDED_maglev_MagLevError
#include <maglev/MagLevError.h>
#endif
#ifndef INCLUDED_maglev_MagLevFunction
#include <maglev/MagLevFunction.h>
#endif
#ifndef INCLUDED_maglev_MagLevNull
#include <maglev/MagLevNull.h>
#endif
#ifndef INCLUDED_maglev_MagLevNumber
#include <maglev/MagLevNumber.h>
#endif
#ifndef INCLUDED_maglev_MagLevObject
#include <maglev/MagLevObject.h>
#endif
#ifndef INCLUDED_maglev_MagLevOld
#include <maglev/MagLevOld.h>
#endif
#ifndef INCLUDED_maglev_MagLevResult
#include <maglev/MagLevResult.h>
#endif
#ifndef INCLUDED_maglev_MagLevString
#include <maglev/MagLevString.h>
#endif
#ifndef INCLUDED_maglev_MagLevType
#include <maglev/MagLevType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_45_new,"maglev.MagLevOld","new",0x85ff9ecb,"maglev.MagLevOld.new","maglev/MagLevOld.hx",45,0x84580086)
HX_LOCAL_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_54_register,"maglev.MagLevOld","register",0x2b98b418,"maglev.MagLevOld.register","maglev/MagLevOld.hx",54,0x84580086)
HX_LOCAL_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_53_register,"maglev.MagLevOld","register",0x2b98b418,"maglev.MagLevOld.register","maglev/MagLevOld.hx",53,0x84580086)
HX_LOCAL_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_67_call,"maglev.MagLevOld","call",0xb262e7d3,"maglev.MagLevOld.call","maglev/MagLevOld.hx",67,0x84580086)
HX_LOCAL_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_82_listen,"maglev.MagLevOld","listen",0x77dc8ebc,"maglev.MagLevOld.listen","maglev/MagLevOld.hx",82,0x84580086)
HX_LOCAL_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_80_listen,"maglev.MagLevOld","listen",0x77dc8ebc,"maglev.MagLevOld.listen","maglev/MagLevOld.hx",80,0x84580086)
HX_LOCAL_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_95_emit,"maglev.MagLevOld","emit",0xb3be6d88,"maglev.MagLevOld.emit","maglev/MagLevOld.hx",95,0x84580086)
HX_LOCAL_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_104_convertToHaxe,"maglev.MagLevOld","convertToHaxe",0xf6cbabbf,"maglev.MagLevOld.convertToHaxe","maglev/MagLevOld.hx",104,0x84580086)
HX_LOCAL_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_145_convertToMagLev,"maglev.MagLevOld","convertToMagLev",0xf656e6e3,"maglev.MagLevOld.convertToMagLev","maglev/MagLevOld.hx",145,0x84580086)
HX_LOCAL_STACK_FRAME(_hx_pos_1d53d4c2e241c78b_48_getInstance,"maglev.MagLevOld","getInstance",0x95e593b6,"maglev.MagLevOld.getInstance","maglev/MagLevOld.hx",48,0x84580086)
namespace maglev{

void MagLevOld_obj::__construct( ::maglev::MagLev maglev){
            	HX_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_45_new)
HXDLIN(  45)		this->maglev = maglev;
            	}

Dynamic MagLevOld_obj::__CreateEmpty() { return new MagLevOld_obj; }

void *MagLevOld_obj::_hx_vtable = 0;

Dynamic MagLevOld_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MagLevOld_obj > _hx_result = new MagLevOld_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MagLevOld_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fe6397f;
}

void MagLevOld_obj::_hx_register(::String method, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0, ::maglev::MagLevOld,_gthis, ::Dynamic,callback) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_54_register)
HXLINE(  55)			::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new();
HXLINE(  56)			int i = 0;
HXLINE(  57)			while((i < args->size())){
HXLINE(  58)				 ::maglev::MagLevOld _gthis1 = _gthis;
HXDLIN(  58)				arr->push(_gthis1->convertToHaxe(args->get(i)));
            			}
HXLINE(  60)			 ::maglev::MagLevOld _gthis1 = _gthis;
HXDLIN(  60)			 ::maglev::MagLevAny result = _gthis1->convertToMagLev(callback(arr));
HXLINE(  61)			return ::maglev::MagLevResult_obj::fromResult(result);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_53_register)
HXDLIN(  53)		 ::maglev::MagLevOld _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  54)		 ::Dynamic myfunc =  ::Dynamic(new _hx_Closure_0(_gthis,callback));
HXLINE(  63)		 ::maglev::MagLevFunction mycallback =  ::maglev::MagLevFunction_obj::__alloc( HX_CTX ,myfunc,null());
HXLINE(  64)		this->maglev->_hx_register(method,mycallback);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLevOld_obj,_hx_register,(void))

 ::Dynamic MagLevOld_obj::call(::String method,::cpp::VirtualArray args){
            	HX_GC_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_67_call)
HXLINE(  68)		 ::maglev::MagLevArray myargs =  ::maglev::MagLevArray_obj::__alloc( HX_CTX );
HXLINE(  69)		{
HXLINE(  69)			int _g = 0;
HXDLIN(  69)			while((_g < args->get_length())){
HXLINE(  69)				 ::Dynamic arg = args->__get(_g);
HXDLIN(  69)				_g = (_g + 1);
HXLINE(  70)				myargs->push(this->convertToMagLev(arg));
            			}
            		}
HXLINE(  72)		 ::maglev::MagLevResult myresult = this->maglev->call(method,myargs);
HXLINE(  73)		if (myresult->isError()) {
HXLINE(  74)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(myresult->getError()->getMessage()));
            		}
            		else {
HXLINE(  76)			return this->convertToHaxe(myresult->getResult());
            		}
HXLINE(  73)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLevOld_obj,call,return )

void MagLevOld_obj::listen(::String event, ::Dynamic callback){
            		HX_BEGIN_LOCAL_FUNC_S3(::hx::LocalFunc,_hx_Closure_0, ::maglev::MagLevOld,_gthis,::String,event, ::Dynamic,callback) HXARGC(1)
            		 ::maglev::MagLevResult _hx_run( ::maglev::MagLevArray args){
            			HX_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_82_listen)
HXLINE(  83)			::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new();
HXLINE(  84)			int i = 0;
HXLINE(  85)			while((i < args->size())){
HXLINE(  86)				 ::maglev::MagLevOld _gthis1 = _gthis;
HXDLIN(  86)				arr->push(_gthis1->convertToHaxe(args->get(i)));
            			}
HXLINE(  88)			callback(event,arr);
HXLINE(  89)			return null();
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_80_listen)
HXDLIN(  80)		 ::maglev::MagLevOld _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE(  82)		 ::Dynamic mysub =  ::Dynamic(new _hx_Closure_0(_gthis,event,callback));
HXLINE(  91)		 ::maglev::MagLevFunction mycallback =  ::maglev::MagLevFunction_obj::__alloc( HX_CTX ,mysub,null());
HXLINE(  92)		this->maglev->listen(event,mycallback);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLevOld_obj,listen,(void))

void MagLevOld_obj::emit(::String event,::cpp::VirtualArray args){
            	HX_GC_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_95_emit)
HXLINE(  96)		 ::maglev::MagLevArray myargs =  ::maglev::MagLevArray_obj::__alloc( HX_CTX );
HXLINE(  97)		{
HXLINE(  97)			int _g = 0;
HXDLIN(  97)			while((_g < args->get_length())){
HXLINE(  97)				 ::Dynamic arg = args->__get(_g);
HXDLIN(  97)				_g = (_g + 1);
HXLINE(  98)				myargs->push(this->convertToMagLev(arg));
            			}
            		}
HXLINE( 100)		this->maglev->emit(event,myargs);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLevOld_obj,emit,(void))

 ::Dynamic MagLevOld_obj::convertToHaxe( ::maglev::MagLevAny x){
            	HX_GC_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_104_convertToHaxe)
HXDLIN( 104)		if (::hx::IsEq( x->getType(),::maglev::MagLevType_obj::MagLevType_Null_dyn() )) {
HXLINE( 105)			return null();
            		}
            		else {
HXLINE( 107)			if (::hx::IsEq( x->getType(),::maglev::MagLevType_obj::MagLevType_Boolean_dyn() )) {
HXLINE( 108)				 ::maglev::MagLevBoolean y = ::hx::TCast<  ::maglev::MagLevBoolean >::cast(x);
HXLINE( 109)				return y->getBool();
            			}
            			else {
HXLINE( 111)				if (::hx::IsEq( x->getType(),::maglev::MagLevType_obj::MagLevType_String_dyn() )) {
HXLINE( 112)					 ::maglev::MagLevString y = ::hx::TCast<  ::maglev::MagLevString >::cast(x);
HXLINE( 113)					return y->getString();
            				}
            				else {
HXLINE( 115)					if (::hx::IsEq( x->getType(),::maglev::MagLevType_obj::MagLevType_Number_dyn() )) {
HXLINE( 116)						 ::maglev::MagLevNumber y = ::hx::TCast<  ::maglev::MagLevNumber >::cast(x);
HXLINE( 117)						return y->getFloat();
            					}
            					else {
HXLINE( 119)						if (::hx::IsEq( x->getType(),::maglev::MagLevType_obj::MagLevType_Array_dyn() )) {
HXLINE( 120)							 ::maglev::MagLevArray y = ::hx::TCast<  ::maglev::MagLevArray >::cast(x);
HXLINE( 121)							::cpp::VirtualArray arr = ::cpp::VirtualArray_obj::__new();
HXLINE( 122)							int i = 0;
HXLINE( 123)							while((i < y->size())){
HXLINE( 124)								arr->push(y->get(i));
            							}
HXLINE( 126)							return arr;
            						}
            						else {
HXLINE( 128)							if (::hx::IsEq( x->getType(),::maglev::MagLevType_obj::MagLevType_Object_dyn() )) {
HXLINE( 129)								 ::maglev::MagLevObject y = ::hx::TCast<  ::maglev::MagLevObject >::cast(x);
HXLINE( 130)								 ::haxe::ds::StringMap map =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 131)								 ::maglev::MagLevArray keys = y->keys();
HXLINE( 132)								int i = 0;
HXLINE( 133)								while((i < keys->size())){
HXLINE( 134)									::String key = ::hx::TCast<  ::maglev::MagLevString >::cast(keys->get(i))->getString();
HXLINE( 135)									map->set(key,y->get(key));
            								}
HXLINE( 137)								return map;
            							}
            							else {
HXLINE( 140)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("convertToHaxe: unknown type",4a,83,07,f2)));
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 104)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevOld_obj,convertToHaxe,return )

 ::maglev::MagLevAny MagLevOld_obj::convertToMagLev( ::Dynamic x){
            	HX_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_145_convertToMagLev)
HXDLIN( 145)		if (::hx::IsNull( x )) {
HXLINE( 146)			return ::maglev::MagLevNull_obj::create();
            		}
            		else {
HXLINE( 148)			if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< bool >()) ))) {
HXLINE( 149)				return ::maglev::MagLevBoolean_obj::fromBool(::hx::TCast< bool >::cast(x));
            			}
            			else {
HXLINE( 151)				if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< ::String >()) ))) {
HXLINE( 152)					return ::maglev::MagLevString_obj::fromString(::hx::TCast< ::String >::cast(x));
            				}
            				else {
HXLINE( 154)					if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< int >()) ))) {
HXLINE( 155)						return ::maglev::MagLevNumber_obj::fromInt(::hx::TCast< int >::cast(x));
            					}
            					else {
HXLINE( 157)						if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< ::Float >()) ))) {
HXLINE( 158)							return ::maglev::MagLevNumber_obj::fromFloat(( (Float)(x) ));
            						}
            						else {
HXLINE( 160)							if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ArrayBase::__mClass) ))) {
HXLINE( 161)								 ::maglev::MagLevArray arr = ::maglev::MagLevArray_obj::create();
HXLINE( 162)								::cpp::VirtualArray y = ( (::cpp::VirtualArray)(x) );
HXLINE( 163)								{
HXLINE( 163)									int _g = 0;
HXDLIN( 163)									while((_g < y->get_length())){
HXLINE( 163)										 ::Dynamic item = y->__get(_g);
HXDLIN( 163)										_g = (_g + 1);
HXLINE( 164)										arr->push(this->convertToMagLev(item));
            									}
            								}
HXLINE( 166)								return arr;
            							}
            							else {
HXLINE( 168)								if (::Std_obj::isOfType(x,( ( ::Dynamic)(::hx::ClassOf< ::haxe::ds::StringMap >()) ))) {
HXLINE( 169)									 ::haxe::ds::StringMap map = ( ( ::haxe::ds::StringMap)(x) );
HXLINE( 170)									 ::maglev::MagLevObject obj = ::maglev::MagLevObject_obj::create();
HXLINE( 171)									{
HXLINE( 171)										 ::Dynamic key = map->keys();
HXDLIN( 171)										while(( (bool)(key->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 171)											::String key1 = ( (::String)(key->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 172)											obj->set(key1,this->convertToMagLev(map->get(key1)));
            										}
            									}
HXLINE( 174)									return obj;
            								}
            								else {
HXLINE( 176)									if (::Reflect_obj::isObject(x)) {
HXLINE( 177)										 ::maglev::MagLevObject obj = ::maglev::MagLevObject_obj::create();
HXLINE( 178)										{
HXLINE( 178)											int _g = 0;
HXDLIN( 178)											::Array< ::String > _g1 = ::Reflect_obj::fields(x);
HXDLIN( 178)											while((_g < _g1->length)){
HXLINE( 178)												::String field = _g1->__get(_g);
HXDLIN( 178)												_g = (_g + 1);
HXLINE( 179)												 ::Dynamic val = ::Reflect_obj::getProperty(x,field);
HXLINE( 180)												obj->set(field,this->convertToMagLev(val));
            											}
            										}
HXLINE( 182)										return obj;
            									}
            									else {
HXLINE( 184)										if (::Reflect_obj::isFunction(x)) {
HXLINE( 185)											 ::Dynamic f = x;
HXLINE( 186)											return ::maglev::MagLevFunction_obj::fromFunction(f);
            										}
            										else {
HXLINE( 189)											HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("convertToMagLev: unknown type",ae,84,a9,64)));
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 145)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevOld_obj,convertToMagLev,return )

 ::maglev::MagLevOld MagLevOld_obj::getInstance(::String key){
            	HX_GC_STACKFRAME(&_hx_pos_1d53d4c2e241c78b_48_getInstance)
HXLINE(  49)		 ::maglev::MagLevOld instance =  ::maglev::MagLevOld_obj::__alloc( HX_CTX ,::maglev::MagLev_obj::getInstance(key));
HXLINE(  50)		return instance;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MagLevOld_obj,getInstance,return )


::hx::ObjectPtr< MagLevOld_obj > MagLevOld_obj::__new( ::maglev::MagLev maglev) {
	::hx::ObjectPtr< MagLevOld_obj > __this = new MagLevOld_obj();
	__this->__construct(maglev);
	return __this;
}

::hx::ObjectPtr< MagLevOld_obj > MagLevOld_obj::__alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev maglev) {
	MagLevOld_obj *__this = (MagLevOld_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MagLevOld_obj), true, "maglev.MagLevOld"));
	*(void **)__this = MagLevOld_obj::_hx_vtable;
	__this->__construct(maglev);
	return __this;
}

MagLevOld_obj::MagLevOld_obj()
{
}

void MagLevOld_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MagLevOld);
	HX_MARK_MEMBER_NAME(maglev,"maglev");
	HX_MARK_END_CLASS();
}

void MagLevOld_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(maglev,"maglev");
}

::hx::Val MagLevOld_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"emit") ) { return ::hx::Val( emit_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"maglev") ) { return ::hx::Val( maglev ); }
		if (HX_FIELD_EQ(inName,"listen") ) { return ::hx::Val( listen_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"convertToHaxe") ) { return ::hx::Val( convertToHaxe_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"convertToMagLev") ) { return ::hx::Val( convertToMagLev_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MagLevOld_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val MagLevOld_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"maglev") ) { maglev=inValue.Cast<  ::maglev::MagLev >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MagLevOld_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("maglev",2a,df,2b,b3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MagLevOld_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::maglev::MagLev */ ,(int)offsetof(MagLevOld_obj,maglev),HX_("maglev",2a,df,2b,b3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MagLevOld_obj_sStaticStorageInfo = 0;
#endif

static ::String MagLevOld_obj_sMemberFields[] = {
	HX_("maglev",2a,df,2b,b3),
	HX_("register",63,a6,9f,d0),
	HX_("call",9e,18,ba,41),
	HX_("listen",47,c8,f9,ef),
	HX_("emit",53,9e,15,43),
	HX_("convertToHaxe",94,89,1b,b6),
	HX_("convertToMagLev",f8,a3,b9,0f),
	::String(null()) };

::hx::Class MagLevOld_obj::__mClass;

static ::String MagLevOld_obj_sStaticFields[] = {
	HX_("getInstance",4b,e2,d4,7f),
	::String(null())
};

void MagLevOld_obj::__register()
{
	MagLevOld_obj _hx_dummy;
	MagLevOld_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("maglev.MagLevOld",59,dd,e7,9a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MagLevOld_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MagLevOld_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MagLevOld_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MagLevOld_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MagLevOld_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MagLevOld_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace maglev
