// Generated by Haxe 4.1.1
#ifndef INCLUDED_haxe_io_BytesBuffer
#define INCLUDED_haxe_io_BytesBuffer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,BytesBuffer)
HX_DECLARE_CLASS2(haxe,io,Encoding)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES BytesBuffer_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BytesBuffer_obj OBJ_;
		BytesBuffer_obj();

	public:
		enum { _hx_ClassId = 0x183160df };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.io.BytesBuffer")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.io.BytesBuffer"); }
		static ::hx::ObjectPtr< BytesBuffer_obj > __new();
		static ::hx::ObjectPtr< BytesBuffer_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BytesBuffer_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BytesBuffer",ab,73,22,f6); }

		::Array< unsigned char > b;
		int get_length();
		::Dynamic get_length_dyn();

		void addByte(int byte);
		::Dynamic addByte_dyn();

		void add( ::haxe::io::Bytes src);
		::Dynamic add_dyn();

		void addString(::String v, ::haxe::io::Encoding encoding);
		::Dynamic addString_dyn();

		void addInt32(int v);
		::Dynamic addInt32_dyn();

		void addInt64( cpp::Int64Struct v);
		::Dynamic addInt64_dyn();

		void addFloat(Float v);
		::Dynamic addFloat_dyn();

		void addDouble(Float v);
		::Dynamic addDouble_dyn();

		void addBytes( ::haxe::io::Bytes src,int pos,int len);
		::Dynamic addBytes_dyn();

		 ::haxe::io::Bytes getBytes();
		::Dynamic getBytes_dyn();

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_BytesBuffer */ 
