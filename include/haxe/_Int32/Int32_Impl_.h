// Generated by Haxe 4.1.1
#ifndef INCLUDED_haxe__Int32_Int32_Impl_
#define INCLUDED_haxe__Int32_Int32_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,_Int32,Int32_Impl_)

namespace haxe{
namespace _Int32{


class HXCPP_CLASS_ATTRIBUTES Int32_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Int32_Impl__obj OBJ_;
		Int32_Impl__obj();

	public:
		enum { _hx_ClassId = 0x23048859 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe._Int32.Int32_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe._Int32.Int32_Impl_"); }

		inline static ::hx::ObjectPtr< Int32_Impl__obj > __new() {
			::hx::ObjectPtr< Int32_Impl__obj > __this = new Int32_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Int32_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Int32_Impl__obj *__this = (Int32_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Int32_Impl__obj), false, "haxe._Int32.Int32_Impl_"));
			*(void **)__this = Int32_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Int32_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Int32_Impl_",4e,d6,96,c5); }

		static int negate(int this1);
		static ::Dynamic negate_dyn();

		static int preIncrement(int this1);
		static ::Dynamic preIncrement_dyn();

		static int postIncrement(int this1);
		static ::Dynamic postIncrement_dyn();

		static int preDecrement(int this1);
		static ::Dynamic preDecrement_dyn();

		static int postDecrement(int this1);
		static ::Dynamic postDecrement_dyn();

		static int add(int a,int b);
		static ::Dynamic add_dyn();

		static int addInt(int a,int b);
		static ::Dynamic addInt_dyn();

		static int sub(int a,int b);
		static ::Dynamic sub_dyn();

		static int subInt(int a,int b);
		static ::Dynamic subInt_dyn();

		static int intSub(int a,int b);
		static ::Dynamic intSub_dyn();

		static Float toFloat(int this1);
		static ::Dynamic toFloat_dyn();

		static int ucompare(int a,int b);
		static ::Dynamic ucompare_dyn();

		static int clamp(int x);
		static ::Dynamic clamp_dyn();

};

} // end namespace haxe
} // end namespace _Int32

#endif /* INCLUDED_haxe__Int32_Int32_Impl_ */ 
