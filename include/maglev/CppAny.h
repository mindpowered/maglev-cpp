// Generated by Haxe 4.1.1
#ifndef INCLUDED_maglev_CppAny
#define INCLUDED_maglev_CppAny

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_f1f713c9e000f5d3
#define INCLUDED_f1f713c9e000f5d3
#include "array"
#endif
#ifndef INCLUDED_31a7389c9269a947
#define INCLUDED_31a7389c9269a947
#include "hx/StdString.h"
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS1(maglev,CppAny)

namespace maglev{


class HXCPP_CLASS_ATTRIBUTES CppAny_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CppAny_obj OBJ_;
		CppAny_obj();

	public:
		enum { _hx_ClassId = 0x10781c53 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="maglev.CppAny")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"maglev.CppAny"); }
		static ::hx::ObjectPtr< CppAny_obj > __new();
		static ::hx::ObjectPtr< CppAny_obj > __alloc(::hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CppAny_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CppAny",a9,bd,03,91); }

		 ::Dynamic data;
		 ::Dynamic getData();
		::Dynamic getData_dyn();

		void setData( ::Dynamic any);
		::Dynamic setData_dyn();

		void setNull();
		::Dynamic setNull_dyn();

		bool isNull();
		::Dynamic isNull_dyn();

		void setDouble(double data);
		::Dynamic setDouble_dyn();

		void setFloat(Float data);
		::Dynamic setFloat_dyn();

		double getDouble();
		::Dynamic getDouble_dyn();

		Float getFloat();
		::Dynamic getFloat_dyn();

		bool isNumeric();
		::Dynamic isNumeric_dyn();

		void setBool(bool data);
		::Dynamic setBool_dyn();

		bool getBool();
		::Dynamic getBool_dyn();

		bool isBool();
		::Dynamic isBool_dyn();

		void setString(::String data);
		::Dynamic setString_dyn();

		void setStdString( hx::StdString data);

		::String getString();
		::Dynamic getString_dyn();

		 hx::StdString getStdString();

		bool isString();
		::Dynamic isString_dyn();

		void makeArray();
		::Dynamic makeArray_dyn();

		void pushArray( ::maglev::CppAny item);
		::Dynamic pushArray_dyn();

		::Array< ::Dynamic> getArray();
		::Dynamic getArray_dyn();

		 std::vector<CppAny> getCppAnyVector();

		bool isArray();
		::Dynamic isArray_dyn();

		void setMap( ::haxe::ds::StringMap data);
		::Dynamic setMap_dyn();

		 ::haxe::ds::StringMap getMap();
		::Dynamic getMap_dyn();

		 ::maglev::CppAny getMapValue( hx::StdString key);

		 std::vector<CppAny> getMapKeys();

};

} // end namespace maglev

#endif /* INCLUDED_maglev_CppAny */ 
