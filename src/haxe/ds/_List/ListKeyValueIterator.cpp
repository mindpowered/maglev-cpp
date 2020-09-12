// Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds__List_ListKeyValueIterator
#include <haxe/ds/_List/ListKeyValueIterator.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9d4744d61bced7c9_299_new,"haxe.ds._List.ListKeyValueIterator","new",0x709bf3d8,"haxe.ds._List.ListKeyValueIterator.new","/opt/haxe/std/haxe/ds/List.hx",299,0x070c3ebf)
HX_LOCAL_STACK_FRAME(_hx_pos_9d4744d61bced7c9_305_hasNext,"haxe.ds._List.ListKeyValueIterator","hasNext",0x6af1e4e5,"haxe.ds._List.ListKeyValueIterator.hasNext","/opt/haxe/std/haxe/ds/List.hx",305,0x070c3ebf)
HX_LOCAL_STACK_FRAME(_hx_pos_9d4744d61bced7c9_308_next,"haxe.ds._List.ListKeyValueIterator","next",0x17d96a7b,"haxe.ds._List.ListKeyValueIterator.next","/opt/haxe/std/haxe/ds/List.hx",308,0x070c3ebf)
namespace haxe{
namespace ds{
namespace _List{

void ListKeyValueIterator_obj::__construct( ::haxe::ds::_List::ListNode head){
            	HX_STACKFRAME(&_hx_pos_9d4744d61bced7c9_299_new)
HXLINE( 300)		this->head = head;
HXLINE( 301)		this->idx = 0;
            	}

Dynamic ListKeyValueIterator_obj::__CreateEmpty() { return new ListKeyValueIterator_obj; }

void *ListKeyValueIterator_obj::_hx_vtable = 0;

Dynamic ListKeyValueIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ListKeyValueIterator_obj > _hx_result = new ListKeyValueIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ListKeyValueIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x622694c6;
}

bool ListKeyValueIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_9d4744d61bced7c9_305_hasNext)
HXDLIN( 305)		return ::hx::IsNotNull( this->head );
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListKeyValueIterator_obj,hasNext,return )

 ::Dynamic ListKeyValueIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_9d4744d61bced7c9_308_next)
HXLINE( 309)		 ::Dynamic val = this->head->item;
HXLINE( 310)		this->head = this->head->next;
HXLINE( 311)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("key",9f,89,51,00),this->idx++)
            			->setFixed(1,HX_("value",71,7f,b8,31),val));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListKeyValueIterator_obj,next,return )


::hx::ObjectPtr< ListKeyValueIterator_obj > ListKeyValueIterator_obj::__new( ::haxe::ds::_List::ListNode head) {
	::hx::ObjectPtr< ListKeyValueIterator_obj > __this = new ListKeyValueIterator_obj();
	__this->__construct(head);
	return __this;
}

::hx::ObjectPtr< ListKeyValueIterator_obj > ListKeyValueIterator_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::ds::_List::ListNode head) {
	ListKeyValueIterator_obj *__this = (ListKeyValueIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ListKeyValueIterator_obj), true, "haxe.ds._List.ListKeyValueIterator"));
	*(void **)__this = ListKeyValueIterator_obj::_hx_vtable;
	__this->__construct(head);
	return __this;
}

ListKeyValueIterator_obj::ListKeyValueIterator_obj()
{
}

void ListKeyValueIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListKeyValueIterator);
	HX_MARK_MEMBER_NAME(idx,"idx");
	HX_MARK_MEMBER_NAME(head,"head");
	HX_MARK_END_CLASS();
}

void ListKeyValueIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(idx,"idx");
	HX_VISIT_MEMBER_NAME(head,"head");
}

::hx::Val ListKeyValueIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"idx") ) { return ::hx::Val( idx ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { return ::hx::Val( head ); }
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ListKeyValueIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"idx") ) { idx=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"head") ) { head=inValue.Cast<  ::haxe::ds::_List::ListNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListKeyValueIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("idx",3d,04,50,00));
	outFields->push(HX_("head",20,29,0b,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ListKeyValueIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ListKeyValueIterator_obj,idx),HX_("idx",3d,04,50,00)},
	{::hx::fsObject /*  ::haxe::ds::_List::ListNode */ ,(int)offsetof(ListKeyValueIterator_obj,head),HX_("head",20,29,0b,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ListKeyValueIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String ListKeyValueIterator_obj_sMemberFields[] = {
	HX_("idx",3d,04,50,00),
	HX_("head",20,29,0b,45),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ListKeyValueIterator_obj::__mClass;

void ListKeyValueIterator_obj::__register()
{
	ListKeyValueIterator_obj _hx_dummy;
	ListKeyValueIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds._List.ListKeyValueIterator",e6,67,77,96);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ListKeyValueIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ListKeyValueIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListKeyValueIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListKeyValueIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
} // end namespace _List