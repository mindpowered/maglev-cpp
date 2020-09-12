// Generated by Haxe 4.1.1
#ifndef INCLUDED_haxe_ds_ListSort
#define INCLUDED_haxe_ds_ListSort

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,ds,ListSort)

namespace haxe{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES ListSort_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ListSort_obj OBJ_;
		ListSort_obj();

	public:
		enum { _hx_ClassId = 0x71bac631 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.ds.ListSort")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.ds.ListSort"); }

		inline static ::hx::ObjectPtr< ListSort_obj > __new() {
			::hx::ObjectPtr< ListSort_obj > __this = new ListSort_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ListSort_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ListSort_obj *__this = (ListSort_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListSort_obj), false, "haxe.ds.ListSort"));
			*(void **)__this = ListSort_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ListSort_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ListSort",fc,b2,fe,05); }

		static  ::Dynamic sort( ::Dynamic list, ::Dynamic cmp);
		static ::Dynamic sort_dyn();

		static  ::Dynamic sortSingleLinked( ::Dynamic list, ::Dynamic cmp);
		static ::Dynamic sortSingleLinked_dyn();

};

} // end namespace haxe
} // end namespace ds

#endif /* INCLUDED_haxe_ds_ListSort */ 