// Generated by Haxe 4.1.1
#ifndef INCLUDED_maglev_MagLevOld
#define INCLUDED_maglev_MagLevOld

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS1(maglev,MagLev)
HX_DECLARE_CLASS1(maglev,MagLevAny)
HX_DECLARE_CLASS1(maglev,MagLevOld)

namespace maglev{


class HXCPP_CLASS_ATTRIBUTES MagLevOld_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MagLevOld_obj OBJ_;
		MagLevOld_obj();

	public:
		enum { _hx_ClassId = 0x7fe6397f };

		void __construct( ::maglev::MagLev maglev);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="maglev.MagLevOld")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"maglev.MagLevOld"); }
		static ::hx::ObjectPtr< MagLevOld_obj > __new( ::maglev::MagLev maglev);
		static ::hx::ObjectPtr< MagLevOld_obj > __alloc(::hx::Ctx *_hx_ctx, ::maglev::MagLev maglev);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MagLevOld_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MagLevOld",9d,1b,b0,b2); }

		static  ::maglev::MagLevOld getInstance(::String key);
		static ::Dynamic getInstance_dyn();

		 ::maglev::MagLev maglev;
		void _hx_register(::String method, ::Dynamic callback);
		::Dynamic _hx_register_dyn();

		void call(::String method,::cpp::VirtualArray args, ::Dynamic callback);
		::Dynamic call_dyn();

		void listen(::String event, ::Dynamic callback);
		::Dynamic listen_dyn();

		void emit(::String event,::cpp::VirtualArray args);
		::Dynamic emit_dyn();

		 ::Dynamic convertToHaxe( ::maglev::MagLevAny x);
		::Dynamic convertToHaxe_dyn();

		 ::maglev::MagLevAny convertToMagLev( ::Dynamic x);
		::Dynamic convertToMagLev_dyn();

};

} // end namespace maglev

#endif /* INCLUDED_maglev_MagLevOld */ 
