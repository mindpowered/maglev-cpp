// Generated by Haxe 4.1.1
#ifndef INCLUDED_maglev_MagLevBoolean
#define INCLUDED_maglev_MagLevBoolean

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
HX_DECLARE_CLASS1(maglev,MagLevAny)
HX_DECLARE_CLASS1(maglev,MagLevBoolean)
HX_DECLARE_CLASS1(maglev,MagLevString)

namespace maglev{


class HXCPP_CLASS_ATTRIBUTES MagLevBoolean_obj : public  ::maglev::MagLevAny_obj
{
	public:
		typedef  ::maglev::MagLevAny_obj super;
		typedef MagLevBoolean_obj OBJ_;
		MagLevBoolean_obj();

	public:
		enum { _hx_ClassId = 0x4e494b34 };

		void __construct(bool value);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="maglev.MagLevBoolean")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"maglev.MagLevBoolean"); }
		static ::hx::ObjectPtr< MagLevBoolean_obj > __new(bool value);
		static ::hx::ObjectPtr< MagLevBoolean_obj > __alloc(::hx::Ctx *_hx_ctx,bool value);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MagLevBoolean_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MagLevBoolean",9e,20,d6,b5); }

		static  ::maglev::MagLevBoolean fromBool(bool value);
		static ::Dynamic fromBool_dyn();

		static int getStaticType();
		static ::Dynamic getStaticType_dyn();

		bool value;
		bool getBool();
		::Dynamic getBool_dyn();

		int getType();

		bool isEqual( ::maglev::MagLevAny other);

		 ::maglev::MagLevString toJson();

};

} // end namespace maglev

#endif /* INCLUDED_maglev_MagLevBoolean */ 
