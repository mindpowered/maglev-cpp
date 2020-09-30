// Based on code Generated by Haxe 4.1.1
#include <hxcpp.h>

#ifndef INCLUDED_haxe_ds_Option
#include <haxe/ds/Option.h>
#endif
#ifndef INCLUDED_haxe_ds_Either
#include <haxe/ds/Either.h>
#endif
#ifndef INCLUDED_haxe_StackItem
#include <haxe/StackItem.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif
#ifndef INCLUDED_maglev_MagLev
#include <maglev/MagLev.h>
#endif
#ifndef INCLUDED_haxe_xml_Parser
#include <haxe/xml/Parser.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_SysTools
#include <haxe/SysTools.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_maglev_MagLevCpp
#include <maglev/MagLevCpp.h>
#endif
#ifndef INCLUDED_maglev_CppCallbackPtr
#include <maglev/CppCallbackPtr.h>
#endif
#ifndef INCLUDED_maglev_CppAny
#include <maglev/CppAny.h>
#endif
#ifndef INCLUDED_haxe_xml_Printer
#include <haxe/xml/Printer.h>
#endif
#ifndef INCLUDED_haxe_xml_XmlParserException
#include <haxe/xml/XmlParserException.h>
#endif
#ifndef INCLUDED_haxe_iterators_StringKeyValueIterator
#include <haxe/iterators/StringKeyValueIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_StringIteratorUnicode
#include <haxe/iterators/StringIteratorUnicode.h>
#endif
#ifndef INCLUDED_haxe_iterators_StringIterator
#include <haxe/iterators/StringIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_HashMapKeyValueIterator
#include <haxe/iterators/HashMapKeyValueIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayKeyValueIterator
#include <haxe/iterators/ArrayKeyValueIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_format_JsonPrinter
#include <haxe/format/JsonPrinter.h>
#endif
#ifndef INCLUDED_haxe_format_JsonParser
#include <haxe/format/JsonParser.h>
#endif
#ifndef INCLUDED_haxe_ds_WeakMap
#include <haxe/ds/WeakMap.h>
#endif
#ifndef INCLUDED_haxe_ds__Vector_Vector_Impl_
#include <haxe/ds/_Vector/Vector_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_ds__ReadOnlyArray_ReadOnlyArray_Impl_
#include <haxe/ds/_ReadOnlyArray/ReadOnlyArray_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_ObjectMap
#include <haxe/ds/ObjectMap.h>
#endif
#ifndef INCLUDED_haxe_ds__Map_Map_Impl_
#include <haxe/ds/_Map/Map_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_ListSort
#include <haxe/ds/ListSort.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListKeyValueIterator
#include <haxe/ds/_List/ListKeyValueIterator.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListIterator
#include <haxe/ds/_List/ListIterator.h>
#endif
#ifndef INCLUDED_haxe_ds__List_ListNode
#include <haxe/ds/_List/ListNode.h>
#endif
#ifndef INCLUDED_haxe_ds_List
#include <haxe/ds/List.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMapData
#include <haxe/ds/_HashMap/HashMapData.h>
#endif
#ifndef INCLUDED_haxe_ds__HashMap_HashMap_Impl_
#include <haxe/ds/_HashMap/HashMap_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericStack
#include <haxe/ds/GenericStack.h>
#endif
#ifndef INCLUDED_haxe_ds__GenericStack_GenericStackIterator
#include <haxe/ds/_GenericStack/GenericStackIterator.h>
#endif
#ifndef INCLUDED_haxe_ds_GenericCell
#include <haxe/ds/GenericCell.h>
#endif
#ifndef INCLUDED_haxe_ds_EnumValueMap
#include <haxe/ds/EnumValueMap.h>
#endif
#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_haxe_ValueException
#include <haxe/ValueException.h>
#endif
#ifndef INCLUDED_haxe_NativeStackTrace
#include <haxe/NativeStackTrace.h>
#endif
#ifndef INCLUDED_haxe_Json
#include <haxe/Json.h>
#endif
#ifndef INCLUDED_haxe_Int64Helper
#include <haxe/Int64Helper.h>
#endif
#ifndef INCLUDED_haxe__Int64_Int64_Impl_
#include <haxe/_Int64/Int64_Impl_.h>
#endif
#ifndef INCLUDED_haxe__Int32_Int32_Impl_
#include <haxe/_Int32/Int32_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe__CallStack_CallStack_Impl_
#include <haxe/_CallStack/CallStack_Impl_.h>
#endif
#ifndef INCLUDED_cpp_Finalizable
#include <cpp/Finalizable.h>
#endif
#ifndef INCLUDED__UInt_UInt_Impl_
#include <_UInt/UInt_Impl_.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Lambda
#include <Lambda.h>
#endif
#ifndef INCLUDED_IntIterator
#include <IntIterator.h>
#endif
#ifndef INCLUDED__EnumValue_EnumValue_Impl_
#include <_EnumValue/EnumValue_Impl_.h>
#endif
#ifndef INCLUDED_Date
#include <Date.h>
#endif


void __boot_maglev()
{
::haxe::ds::Option_obj::__register();
::haxe::ds::Either_obj::__register();
::haxe::StackItem_obj::__register();
::ValueType_obj::__register();
::maglev::MagLev_obj::__register();
::haxe::xml::Parser_obj::__register();
::haxe::Log_obj::__register();
::Xml_obj::__register();
::_Xml::XmlType_Impl__obj::__register();
::StringTools_obj::__register();
::haxe::SysTools_obj::__register();
::EReg_obj::__register();
::maglev::MagLevCpp_obj::__register();
::maglev::CppCallbackPtr_obj::__register();
::maglev::CppAny_obj::__register();
::haxe::xml::Printer_obj::__register();
::haxe::xml::XmlParserException_obj::__register();
::haxe::iterators::StringKeyValueIterator_obj::__register();
::haxe::iterators::StringIteratorUnicode_obj::__register();
::haxe::iterators::StringIterator_obj::__register();
::haxe::iterators::MapKeyValueIterator_obj::__register();
::haxe::iterators::HashMapKeyValueIterator_obj::__register();
::haxe::iterators::ArrayKeyValueIterator_obj::__register();
::haxe::iterators::ArrayIterator_obj::__register();
::haxe::format::JsonPrinter_obj::__register();
::haxe::format::JsonParser_obj::__register();
::haxe::ds::WeakMap_obj::__register();
::haxe::ds::_Vector::Vector_Impl__obj::__register();
::haxe::ds::StringMap_obj::__register();
::haxe::ds::_ReadOnlyArray::ReadOnlyArray_Impl__obj::__register();
::haxe::ds::ObjectMap_obj::__register();
::haxe::ds::_Map::Map_Impl__obj::__register();
::haxe::ds::ListSort_obj::__register();
::haxe::ds::_List::ListKeyValueIterator_obj::__register();
::haxe::ds::_List::ListIterator_obj::__register();
::haxe::ds::_List::ListNode_obj::__register();
::haxe::ds::List_obj::__register();
::haxe::ds::IntMap_obj::__register();
::haxe::ds::_HashMap::HashMapData_obj::__register();
::haxe::ds::_HashMap::HashMap_Impl__obj::__register();
::haxe::ds::GenericStack_obj::__register();
::haxe::ds::_GenericStack::GenericStackIterator_obj::__register();
::haxe::ds::GenericCell_obj::__register();
::haxe::ds::EnumValueMap_obj::__register();
::haxe::ds::TreeNode_obj::__register();
::haxe::ds::BalancedTree_obj::__register();
::haxe::ds::ArraySort_obj::__register();
::haxe::ValueException_obj::__register();
::haxe::NativeStackTrace_obj::__register();
::haxe::Json_obj::__register();
::haxe::Int64Helper_obj::__register();
::haxe::_Int64::Int64_Impl__obj::__register();
::haxe::_Int32::Int32_Impl__obj::__register();
::haxe::Exception_obj::__register();
::haxe::IMap_obj::__register();
::haxe::_CallStack::CallStack_Impl__obj::__register();
::cpp::Finalizable_obj::__register();
::_UInt::UInt_Impl__obj::__register();
::Type_obj::__register();
::StringBuf_obj::__register();
::Std_obj::__register();
::Reflect_obj::__register();
::Lambda_obj::__register();
::IntIterator_obj::__register();
::_EnumValue::EnumValue_Impl__obj::__register();
::Date_obj::__register();
::haxe::ds::Option_obj::__boot();
::haxe::ds::Either_obj::__boot();
::haxe::StackItem_obj::__boot();
::ValueType_obj::__boot();
::EReg_obj::__boot();
::haxe::Log_obj::__boot();
::haxe::SysTools_obj::__boot();
::StringTools_obj::__boot();
::_Xml::XmlType_Impl__obj::__boot();
::Xml_obj::__boot();
::haxe::xml::Parser_obj::__boot();
::maglev::MagLev_obj::__boot();
}
