// Generated by Haxe 4.1.1
#ifndef INCLUDED_maglev_MagLevFunction
#define INCLUDED_maglev_MagLevFunction

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_maglev_MagLevAny
#include <maglev/MagLevAny.h>
#endif
HX_DECLARE_CLASS1(maglev,MagLevAny)
HX_DECLARE_CLASS1(maglev,MagLevArray)
HX_DECLARE_CLASS1(maglev,MagLevFunction)
HX_DECLARE_CLASS1(maglev,MagLevResult)
HX_DECLARE_CLASS1(maglev,MagLevString)

namespace maglev{


class HXCPP_CLASS_ATTRIBUTES MagLevFunction_obj : public  ::maglev::MagLevAny_obj
{
	public:
		typedef  ::maglev::MagLevAny_obj super;
		typedef MagLevFunction_obj OBJ_;
		MagLevFunction_obj();

	public:
		enum { _hx_ClassId = 0x0befd170 };

		void __construct( ::Dynamic value,::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="maglev.MagLevFunction")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"maglev.MagLevFunction"); }
		static ::hx::ObjectPtr< MagLevFunction_obj > __new( ::Dynamic value,::String name);
		static ::hx::ObjectPtr< MagLevFunction_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic value,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MagLevFunction_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MagLevFunction",62,ac,ca,b8); }

		static  ::maglev::MagLevFunction fromFunction( ::Dynamic value);
		static ::Dynamic fromFunction_dyn();

		static  ::maglev::MagLevFunction fromNamedFunction( ::Dynamic value,::String name);
		static ::Dynamic fromNamedFunction_dyn();

		::String name;
		 ::Dynamic value;
		Dynamic value_dyn() { return value;}
		 ::maglev::MagLevResult call( ::maglev::MagLevArray args);
		::Dynamic call_dyn();

		bool hasName();
		::Dynamic hasName_dyn();

		::String getName();
		::Dynamic getName_dyn();

		int getType();

		bool isEqual( ::maglev::MagLevAny other);

		 ::maglev::MagLevString toJson();

};

} // end namespace maglev

#endif /* INCLUDED_maglev_MagLevFunction */ 