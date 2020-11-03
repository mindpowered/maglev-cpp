// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
#ifndef INCLUDED_maglev_MagLevError
#include <maglev/MagLevError.h>
#endif
#ifndef INCLUDED_maglev_MagLevNumber
#include <maglev/MagLevNumber.h>
#endif
#ifndef INCLUDED_maglev_MagLevString
#include <maglev/MagLevString.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7152bb62ae818fcd_248_new,"maglev.MagLevError","new",0x4295c6ec,"maglev.MagLevError.new","maglev/MagLev.hx",248,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_7152bb62ae818fcd_254_getCode,"maglev.MagLevError","getCode",0x39d58d6f,"maglev.MagLevError.getCode","maglev/MagLev.hx",254,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_7152bb62ae818fcd_257_getMessage,"maglev.MagLevError","getMessage",0xa291eec5,"maglev.MagLevError.getMessage","maglev/MagLev.hx",257,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_7152bb62ae818fcd_260_getData,"maglev.MagLevError","getData",0x3a74326c,"maglev.MagLevError.getData","maglev/MagLev.hx",260,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_7152bb62ae818fcd_263_getType,"maglev.MagLevError","getType",0x4519cefc,"maglev.MagLevError.getType","maglev/MagLev.hx",263,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_7152bb62ae818fcd_268_isEqual,"maglev.MagLevError","isEqual",0x34969ff6,"maglev.MagLevError.isEqual","maglev/MagLev.hx",268,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_7152bb62ae818fcd_277_toJson,"maglev.MagLevError","toJson",0x4f875637,"maglev.MagLevError.toJson","maglev/MagLev.hx",277,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_7152bb62ae818fcd_243_create,"maglev.MagLevError","create",0x4f750ff0,"maglev.MagLevError.create","maglev/MagLev.hx",243,0x5b19476f)
HX_LOCAL_STACK_FRAME(_hx_pos_7152bb62ae818fcd_266_getStaticType,"maglev.MagLevError","getStaticType",0x3d5b644a,"maglev.MagLevError.getStaticType","maglev/MagLev.hx",266,0x5b19476f)
namespace maglev{

void MagLevError_obj::__construct( ::maglev::MagLevNumber code, ::maglev::MagLevString message, ::maglev::MagLevAny data){
            	HX_STACKFRAME(&_hx_pos_7152bb62ae818fcd_248_new)
HXLINE( 249)		this->code = code;
HXLINE( 250)		this->message = message;
HXLINE( 251)		this->data = data;
            	}

Dynamic MagLevError_obj::__CreateEmpty() { return new MagLevError_obj; }

void *MagLevError_obj::_hx_vtable = 0;

Dynamic MagLevError_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MagLevError_obj > _hx_result = new MagLevError_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MagLevError_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x44dbbe70;
}

int MagLevError_obj::getCode(){
            	HX_STACKFRAME(&_hx_pos_7152bb62ae818fcd_254_getCode)
HXDLIN( 254)		return this->code->getInt();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevError_obj,getCode,return )

::String MagLevError_obj::getMessage(){
            	HX_STACKFRAME(&_hx_pos_7152bb62ae818fcd_257_getMessage)
HXDLIN( 257)		return this->message->getString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevError_obj,getMessage,return )

 ::maglev::MagLevAny MagLevError_obj::getData(){
            	HX_STACKFRAME(&_hx_pos_7152bb62ae818fcd_260_getData)
HXDLIN( 260)		return this->data;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevError_obj,getData,return )

int MagLevError_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_7152bb62ae818fcd_263_getType)
HXDLIN( 263)		return 100;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevError_obj,getType,return )

bool MagLevError_obj::isEqual( ::maglev::MagLevError other){
            	HX_GC_STACKFRAME(&_hx_pos_7152bb62ae818fcd_268_isEqual)
HXLINE( 270)		bool same = true;
HXLINE( 271)		if (same) {
HXLINE( 271)			 ::maglev::MagLevNumber same1 = this->code;
HXDLIN( 271)			same = same1->isEqual( ::maglev::MagLevNumber_obj::__alloc( HX_CTX ,( (Float)(other->getCode()) )));
            		}
            		else {
HXLINE( 271)			same = false;
            		}
HXLINE( 272)		if (same) {
HXLINE( 272)			 ::maglev::MagLevString same1 = this->message;
HXDLIN( 272)			same = same1->isEqual( ::maglev::MagLevString_obj::__alloc( HX_CTX ,other->getMessage()));
            		}
            		else {
HXLINE( 272)			same = false;
            		}
HXLINE( 273)		if (same) {
HXLINE( 273)			 ::maglev::MagLevAny same1 = this->data;
HXDLIN( 273)			same = same1->isEqual(other->getData());
            		}
            		else {
HXLINE( 273)			same = false;
            		}
HXLINE( 274)		return same;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MagLevError_obj,isEqual,return )

 ::maglev::MagLevString MagLevError_obj::toJson(){
            	HX_GC_STACKFRAME(&_hx_pos_7152bb62ae818fcd_277_toJson)
HXDLIN( 277)		::String _hx_tmp = ((HX_("{\"code\": ",d4,23,09,40) + ::Std_obj::string(this->code->toJson())) + HX_(", \"message\": ",8f,e4,0e,25));
HXDLIN( 277)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->message->toJson())) + HX_(", \"data\": ",f0,41,60,15));
HXDLIN( 277)		return  ::maglev::MagLevString_obj::__alloc( HX_CTX ,((_hx_tmp1 + ::Std_obj::string(this->data->toJson())) + HX_("}",7d,00,00,00)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MagLevError_obj,toJson,return )

 ::maglev::MagLevError MagLevError_obj::create(int code,::String message, ::maglev::MagLevAny data){
            	HX_GC_STACKFRAME(&_hx_pos_7152bb62ae818fcd_243_create)
HXLINE( 244)		 ::maglev::MagLevNumber code2 =  ::maglev::MagLevNumber_obj::__alloc( HX_CTX ,( (Float)(code) ));
HXLINE( 245)		 ::maglev::MagLevString message2 =  ::maglev::MagLevString_obj::__alloc( HX_CTX ,message);
HXLINE( 246)		return  ::maglev::MagLevError_obj::__alloc( HX_CTX ,code2,message2,data);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(MagLevError_obj,create,return )

int MagLevError_obj::getStaticType(){
            	HX_STACKFRAME(&_hx_pos_7152bb62ae818fcd_266_getStaticType)
HXDLIN( 266)		return 100;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MagLevError_obj,getStaticType,return )


::hx::ObjectPtr< MagLevError_obj > MagLevError_obj::__new( ::maglev::MagLevNumber code, ::maglev::MagLevString message, ::maglev::MagLevAny data) {
	::hx::ObjectPtr< MagLevError_obj > __this = new MagLevError_obj();
	__this->__construct(code,message,data);
	return __this;
}

::hx::ObjectPtr< MagLevError_obj > MagLevError_obj::__alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLevNumber code, ::maglev::MagLevString message, ::maglev::MagLevAny data) {
	MagLevError_obj *__this = (MagLevError_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MagLevError_obj), true, "maglev.MagLevError"));
	*(void **)__this = MagLevError_obj::_hx_vtable;
	__this->__construct(code,message,data);
	return __this;
}

MagLevError_obj::MagLevError_obj()
{
}

void MagLevError_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MagLevError);
	HX_MARK_MEMBER_NAME(code,"code");
	HX_MARK_MEMBER_NAME(message,"message");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_END_CLASS();
}

void MagLevError_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(code,"code");
	HX_VISIT_MEMBER_NAME(message,"message");
	HX_VISIT_MEMBER_NAME(data,"data");
}

::hx::Val MagLevError_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { return ::hx::Val( code ); }
		if (HX_FIELD_EQ(inName,"data") ) { return ::hx::Val( data ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toJson") ) { return ::hx::Val( toJson_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { return ::hx::Val( message ); }
		if (HX_FIELD_EQ(inName,"getCode") ) { return ::hx::Val( getCode_dyn() ); }
		if (HX_FIELD_EQ(inName,"getData") ) { return ::hx::Val( getData_dyn() ); }
		if (HX_FIELD_EQ(inName,"getType") ) { return ::hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEqual") ) { return ::hx::Val( isEqual_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMessage") ) { return ::hx::Val( getMessage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MagLevError_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
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

::hx::Val MagLevError_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"code") ) { code=inValue.Cast<  ::maglev::MagLevNumber >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::maglev::MagLevAny >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"message") ) { message=inValue.Cast<  ::maglev::MagLevString >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MagLevError_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("code",2d,b1,c4,41));
	outFields->push(HX_("message",c7,35,11,9a));
	outFields->push(HX_("data",2a,56,63,42));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MagLevError_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::maglev::MagLevNumber */ ,(int)offsetof(MagLevError_obj,code),HX_("code",2d,b1,c4,41)},
	{::hx::fsObject /*  ::maglev::MagLevString */ ,(int)offsetof(MagLevError_obj,message),HX_("message",c7,35,11,9a)},
	{::hx::fsObject /*  ::maglev::MagLevAny */ ,(int)offsetof(MagLevError_obj,data),HX_("data",2a,56,63,42)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MagLevError_obj_sStaticStorageInfo = 0;
#endif

static ::String MagLevError_obj_sMemberFields[] = {
	HX_("code",2d,b1,c4,41),
	HX_("message",c7,35,11,9a),
	HX_("data",2a,56,63,42),
	HX_("getCode",e3,60,47,14),
	HX_("getMessage",d1,bb,72,e9),
	HX_("getData",e0,05,e6,14),
	HX_("getType",70,a2,8b,1f),
	HX_("isEqual",6a,73,08,0f),
	HX_("toJson",43,ad,21,7c),
	::String(null()) };

::hx::Class MagLevError_obj::__mClass;

static ::String MagLevError_obj_sStaticFields[] = {
	HX_("create",fc,66,0f,7c),
	HX_("getStaticType",be,46,27,0b),
	::String(null())
};

void MagLevError_obj::__register()
{
	MagLevError_obj _hx_dummy;
	MagLevError_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("maglev.MagLevError",fa,20,9d,4c);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MagLevError_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(MagLevError_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MagLevError_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MagLevError_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MagLevError_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MagLevError_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace maglev
