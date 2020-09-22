// Generated by Haxe 4.1.1
#include <hxcpp.h>

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

HX_DEFINE_STACK_FRAME(_hx_pos_74be3df12ab3af58_35_new,"maglev.MagLev","new",0xda2b4be0,"maglev.MagLev.new","maglev/MagLev.hx",35,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_74be3df12ab3af58_52_register,"maglev.MagLev","register",0xfe787ae3,"maglev.MagLev.register","maglev/MagLev.hx",52,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_74be3df12ab3af58_56_call,"maglev.MagLev","call",0x046ead1e,"maglev.MagLev.call","maglev/MagLev.hx",56,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_74be3df12ab3af58_63_listen,"maglev.MagLev","listen",0x385c7cc7,"maglev.MagLev.listen","maglev/MagLev.hx",63,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_74be3df12ab3af58_72_emit,"maglev.MagLev","emit",0x05ca32d3,"maglev.MagLev.emit","maglev/MagLev.hx",72,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_74be3df12ab3af58_44_getInstance,"maglev.MagLev","getInstance",0xfed3ddcb,"maglev.MagLev.getInstance","maglev/MagLev.hx",44,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_74be3df12ab3af58_37_boot,"maglev.MagLev","boot",0x03d018b2,"maglev.MagLev.boot","maglev/MagLev.hx",37,0x5b19476f)
namespace maglev{

void MagLev_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_74be3df12ab3af58_35_new)
HXLINE(  39)		this->_listeners =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE(  38)		this->_methods =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}

Dynamic MagLev_obj::__CreateEmpty() { return new MagLev_obj; }

void *MagLev_obj::_hx_vtable = 0;

Dynamic MagLev_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MagLev_obj > _hx_result = new MagLev_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool MagLev_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x671c69d4;
}

void MagLev_obj::_hx_register(::String method, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_74be3df12ab3af58_52_register)
HXDLIN(  52)		this->_methods->set(method,callback);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLev_obj,_hx_register,(void))

 ::Dynamic MagLev_obj::call(::String method,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_74be3df12ab3af58_56_call)
HXDLIN(  56)		if (this->_methods->exists(method)) {
HXLINE(  57)			return this->_methods->get(method)(args);
            		}
            		else {
HXLINE(  59)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((HX_("Method '",48,09,e1,28) + method) + HX_("' not registered",48,2b,e6,b7))));
            		}
HXLINE(  56)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLev_obj,call,return )

void MagLev_obj::listen(::String event, ::Dynamic callback){
            	HX_STACKFRAME(&_hx_pos_74be3df12ab3af58_63_listen)
HXLINE(  65)		if (!(this->_listeners->exists(event))) {
HXLINE(  66)			::Dynamic this1 = this->_listeners;
HXDLIN(  66)			::Array< ::Dynamic> v = ::Array_obj< ::Dynamic>::__new();
HXDLIN(  66)			( ( ::haxe::ds::StringMap)(this1) )->set(event,v);
            		}
HXLINE(  68)		( (::Array< ::Dynamic>)(this->_listeners->get(event)) )->push(callback);
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLev_obj,listen,(void))

void MagLev_obj::emit(::String event,::cpp::VirtualArray args){
            	HX_STACKFRAME(&_hx_pos_74be3df12ab3af58_72_emit)
HXDLIN(  72)		if (this->_listeners->exists(event)) {
HXLINE(  73)			::Array< ::Dynamic> listeners = ( (::Array< ::Dynamic>)(this->_listeners->get(event)) );
HXLINE(  74)			{
HXLINE(  74)				int _g = 0;
HXDLIN(  74)				while((_g < listeners->length)){
HXLINE(  74)					 ::Dynamic listener = listeners->__get(_g);
HXDLIN(  74)					_g = (_g + 1);
HXLINE(  75)					listener(event,args);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(MagLev_obj,emit,(void))

 ::haxe::ds::StringMap MagLev_obj::_instances;

 ::maglev::MagLev MagLev_obj::getInstance(::String key){
            	HX_GC_STACKFRAME(&_hx_pos_74be3df12ab3af58_44_getInstance)
HXLINE(  45)		if (!(::maglev::MagLev_obj::_instances->exists(key))) {
HXLINE(  46)			::Dynamic this1 = ::maglev::MagLev_obj::_instances;
HXDLIN(  46)			 ::maglev::MagLev v =  ::maglev::MagLev_obj::__alloc( HX_CTX );
HXDLIN(  46)			( ( ::haxe::ds::StringMap)(this1) )->set(key,v);
            		}
HXLINE(  48)		return ( ( ::maglev::MagLev)(::maglev::MagLev_obj::_instances->get(key)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MagLev_obj,getInstance,return )


::hx::ObjectPtr< MagLev_obj > MagLev_obj::__new() {
	::hx::ObjectPtr< MagLev_obj > __this = new MagLev_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< MagLev_obj > MagLev_obj::__alloc(::hx::Ctx *_hx_ctx) {
	MagLev_obj *__this = (MagLev_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MagLev_obj), true, "maglev.MagLev"));
	*(void **)__this = MagLev_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

MagLev_obj::MagLev_obj()
{
}

void MagLev_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MagLev);
	HX_MARK_MEMBER_NAME(_methods,"_methods");
	HX_MARK_MEMBER_NAME(_listeners,"_listeners");
	HX_MARK_END_CLASS();
}

void MagLev_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_methods,"_methods");
	HX_VISIT_MEMBER_NAME(_listeners,"_listeners");
}

::hx::Val MagLev_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"call") ) { return ::hx::Val( call_dyn() ); }
		if (HX_FIELD_EQ(inName,"emit") ) { return ::hx::Val( emit_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"listen") ) { return ::hx::Val( listen_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_methods") ) { return ::hx::Val( _methods ); }
		if (HX_FIELD_EQ(inName,"register") ) { return ::hx::Val( _hx_register_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_listeners") ) { return ::hx::Val( _listeners ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MagLev_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { outValue = ( _instances ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getInstance") ) { outValue = getInstance_dyn(); return true; }
	}
	return false;
}

::hx::Val MagLev_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_methods") ) { _methods=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_listeners") ) { _listeners=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MagLev_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"_instances") ) { _instances=ioValue.Cast<  ::haxe::ds::StringMap >(); return true; }
	}
	return false;
}

void MagLev_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_methods",f3,67,f5,5f));
	outFields->push(HX_("_listeners",40,e1,30,4f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MagLev_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(MagLev_obj,_methods),HX_("_methods",f3,67,f5,5f)},
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(int)offsetof(MagLev_obj,_listeners),HX_("_listeners",40,e1,30,4f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo MagLev_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::StringMap */ ,(void *) &MagLev_obj::_instances,HX_("_instances",ff,fe,bc,a6)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String MagLev_obj_sMemberFields[] = {
	HX_("_methods",f3,67,f5,5f),
	HX_("_listeners",40,e1,30,4f),
	HX_("register",63,a6,9f,d0),
	HX_("call",9e,18,ba,41),
	HX_("listen",47,c8,f9,ef),
	HX_("emit",53,9e,15,43),
	::String(null()) };

static void MagLev_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MagLev_obj::_instances,"_instances");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MagLev_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MagLev_obj::_instances,"_instances");
};

#endif

::hx::Class MagLev_obj::__mClass;

static ::String MagLev_obj_sStaticFields[] = {
	HX_("_instances",ff,fe,bc,a6),
	HX_("getInstance",4b,e2,d4,7f),
	::String(null())
};

void MagLev_obj::__register()
{
	MagLev_obj _hx_dummy;
	MagLev_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("maglev.MagLev",ee,1b,68,8c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MagLev_obj::__GetStatic;
	__mClass->mSetStaticField = &MagLev_obj::__SetStatic;
	__mClass->mMarkFunc = MagLev_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MagLev_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MagLev_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MagLev_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MagLev_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MagLev_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MagLev_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void MagLev_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_74be3df12ab3af58_37_boot)
HXDLIN(  37)		_instances =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
            	}
}

} // end namespace maglev
