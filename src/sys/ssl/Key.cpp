// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_ssl_Key
#include <sys/ssl/Key.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_78db7bfa4c2e2148_34_new,"sys.ssl.Key","new",0xfc27226e,"sys.ssl.Key.new","/opt/haxe/std/cpp/_std/sys/ssl/Key.hx",34,0xe44b16d9)
HX_LOCAL_STACK_FRAME(_hx_pos_7497395d146164c9_55___init__,"::sys::ssl::Key_obj","__init__",0x25088cc6,"::sys::ssl::Key_obj.__init__","/opt/haxe/std/cpp/_std/sys/ssl/Key.hx",55,0xe44b16d9)
HX_LOCAL_STACK_FRAME(_hx_pos_78db7bfa4c2e2148_37_loadFile,"sys.ssl.Key","loadFile",0xd83e1af4,"sys.ssl.Key.loadFile","/opt/haxe/std/cpp/_std/sys/ssl/Key.hx",37,0xe44b16d9)
HX_LOCAL_STACK_FRAME(_hx_pos_78db7bfa4c2e2148_47_readPEM,"sys.ssl.Key","readPEM",0xcf4f5030,"sys.ssl.Key.readPEM","/opt/haxe/std/cpp/_std/sys/ssl/Key.hx",47,0xe44b16d9)
HX_LOCAL_STACK_FRAME(_hx_pos_78db7bfa4c2e2148_51_readDER,"sys.ssl.Key","readDER",0xcf463529,"sys.ssl.Key.readDER","/opt/haxe/std/cpp/_std/sys/ssl/Key.hx",51,0xe44b16d9)
namespace sys{
namespace ssl{

void Key_obj::__construct( ::Dynamic k){
            	HX_STACKFRAME(&_hx_pos_78db7bfa4c2e2148_34_new)
HXDLIN(  34)		this->_hx___k = k;
            	}

Dynamic Key_obj::__CreateEmpty() { return new Key_obj; }

void *Key_obj::_hx_vtable = 0;

Dynamic Key_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Key_obj > _hx_result = new Key_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Key_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6dab52dc;
}

void Key_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_7497395d146164c9_55___init__)
HXDLIN(  55)		_hx_ssl_init();
            	}


 ::sys::ssl::Key Key_obj::loadFile(::String file, ::Dynamic isPublic,::String pass){
            	HX_STACKFRAME(&_hx_pos_78db7bfa4c2e2148_37_loadFile)
HXLINE(  38)		 ::haxe::io::Bytes data = ::sys::io::File_obj::getBytes(file);
HXLINE(  39)		::String str = ::cpp::Lib_obj::stringReference(data);
HXLINE(  40)		if ((str.indexOf(HX_("-----BEGIN ",24,f7,1c,33),null()) >= 0)) {
HXLINE(  41)			return ::sys::ssl::Key_obj::readPEM(str,::hx::IsEq( isPublic,true ),pass);
            		}
            		else {
HXLINE(  43)			return ::sys::ssl::Key_obj::readDER(data,::hx::IsEq( isPublic,true ));
            		}
HXLINE(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Key_obj,loadFile,return )

 ::sys::ssl::Key Key_obj::readPEM(::String data,bool isPublic,::String pass){
            	HX_GC_STACKFRAME(&_hx_pos_78db7bfa4c2e2148_47_readPEM)
HXDLIN(  47)		return  ::sys::ssl::Key_obj::__alloc( HX_CTX ,_hx_ssl_key_from_pem(data,isPublic,pass));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Key_obj,readPEM,return )

 ::sys::ssl::Key Key_obj::readDER( ::haxe::io::Bytes data,bool isPublic){
            	HX_GC_STACKFRAME(&_hx_pos_78db7bfa4c2e2148_51_readDER)
HXDLIN(  51)		return  ::sys::ssl::Key_obj::__alloc( HX_CTX ,_hx_ssl_key_from_der(data->b,isPublic));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Key_obj,readDER,return )


Key_obj::Key_obj()
{
}

void Key_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Key);
	HX_MARK_MEMBER_NAME(_hx___k,"__k");
	HX_MARK_END_CLASS();
}

void Key_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_hx___k,"__k");
}

::hx::Val Key_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__k") ) { return ::hx::Val( _hx___k ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Key_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"readPEM") ) { outValue = readPEM_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"readDER") ) { outValue = readDER_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"loadFile") ) { outValue = loadFile_dyn(); return true; }
	}
	return false;
}

::hx::Val Key_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__k") ) { _hx___k=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Key_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("__k",4b,69,48,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Key_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(Key_obj,_hx___k),HX_("__k",4b,69,48,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Key_obj_sStaticStorageInfo = 0;
#endif

static ::String Key_obj_sMemberFields[] = {
	HX_("__k",4b,69,48,00),
	::String(null()) };

::hx::Class Key_obj::__mClass;

static ::String Key_obj_sStaticFields[] = {
	HX_("loadFile",c2,9f,5b,b4),
	HX_("readPEM",22,df,ce,02),
	HX_("readDER",1b,c4,c5,02),
	::String(null())
};

void Key_obj::__register()
{
	Key_obj _hx_dummy;
	Key_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.ssl.Key",7c,13,b6,c7);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Key_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Key_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Key_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Key_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Key_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Key_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Key_obj::__boot()
{
}

} // end namespace sys
} // end namespace ssl
