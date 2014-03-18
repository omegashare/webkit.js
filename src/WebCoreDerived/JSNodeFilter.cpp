/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSNodeFilter.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "JSNode.h"
#include "NodeFilter.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSNodeFilterTableValues[] =
{
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSNodeFilterTable = { 2, 1, JSNodeFilterTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSNodeFilterConstructorTableValues[] =
{
    { "FILTER_ACCEPT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterFILTER_ACCEPT), (intptr_t)0 },
    { "FILTER_REJECT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterFILTER_REJECT), (intptr_t)0 },
    { "FILTER_SKIP", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterFILTER_SKIP), (intptr_t)0 },
    { "SHOW_ALL", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ALL), (intptr_t)0 },
    { "SHOW_ELEMENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ELEMENT), (intptr_t)0 },
    { "SHOW_ATTRIBUTE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ATTRIBUTE), (intptr_t)0 },
    { "SHOW_TEXT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_TEXT), (intptr_t)0 },
    { "SHOW_CDATA_SECTION", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_CDATA_SECTION), (intptr_t)0 },
    { "SHOW_ENTITY_REFERENCE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ENTITY_REFERENCE), (intptr_t)0 },
    { "SHOW_ENTITY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ENTITY), (intptr_t)0 },
    { "SHOW_PROCESSING_INSTRUCTION", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_PROCESSING_INSTRUCTION), (intptr_t)0 },
    { "SHOW_COMMENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_COMMENT), (intptr_t)0 },
    { "SHOW_DOCUMENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_DOCUMENT), (intptr_t)0 },
    { "SHOW_DOCUMENT_TYPE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_DOCUMENT_TYPE), (intptr_t)0 },
    { "SHOW_DOCUMENT_FRAGMENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_DOCUMENT_FRAGMENT), (intptr_t)0 },
    { "SHOW_NOTATION", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_NOTATION), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSNodeFilterConstructorTable = { 34, 31, JSNodeFilterConstructorTableValues, 0 };

COMPILE_ASSERT(1 == NodeFilter::FILTER_ACCEPT, NodeFilterEnumFILTER_ACCEPTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(2 == NodeFilter::FILTER_REJECT, NodeFilterEnumFILTER_REJECTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(3 == NodeFilter::FILTER_SKIP, NodeFilterEnumFILTER_SKIPIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0xFFFFFFFF == NodeFilter::SHOW_ALL, NodeFilterEnumSHOW_ALLIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000001 == NodeFilter::SHOW_ELEMENT, NodeFilterEnumSHOW_ELEMENTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000002 == NodeFilter::SHOW_ATTRIBUTE, NodeFilterEnumSHOW_ATTRIBUTEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000004 == NodeFilter::SHOW_TEXT, NodeFilterEnumSHOW_TEXTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000008 == NodeFilter::SHOW_CDATA_SECTION, NodeFilterEnumSHOW_CDATA_SECTIONIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000010 == NodeFilter::SHOW_ENTITY_REFERENCE, NodeFilterEnumSHOW_ENTITY_REFERENCEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000020 == NodeFilter::SHOW_ENTITY, NodeFilterEnumSHOW_ENTITYIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000040 == NodeFilter::SHOW_PROCESSING_INSTRUCTION, NodeFilterEnumSHOW_PROCESSING_INSTRUCTIONIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000080 == NodeFilter::SHOW_COMMENT, NodeFilterEnumSHOW_COMMENTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000100 == NodeFilter::SHOW_DOCUMENT, NodeFilterEnumSHOW_DOCUMENTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000200 == NodeFilter::SHOW_DOCUMENT_TYPE, NodeFilterEnumSHOW_DOCUMENT_TYPEIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000400 == NodeFilter::SHOW_DOCUMENT_FRAGMENT, NodeFilterEnumSHOW_DOCUMENT_FRAGMENTIsWrongUseDoNotCheckConstants);
COMPILE_ASSERT(0x00000800 == NodeFilter::SHOW_NOTATION, NodeFilterEnumSHOW_NOTATIONIsWrongUseDoNotCheckConstants);

const ClassInfo JSNodeFilterConstructor::s_info = { "NodeFilterConstructor", &Base::s_info, &JSNodeFilterConstructorTable, 0, CREATE_METHOD_TABLE(JSNodeFilterConstructor) };

JSNodeFilterConstructor::JSNodeFilterConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSNodeFilterConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSNodeFilterPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSNodeFilterConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeFilterConstructor, JSDOMWrapper>(exec, JSNodeFilterConstructorTable, jsCast<JSNodeFilterConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSNodeFilterPrototypeTableValues[] =
{
    { "FILTER_ACCEPT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterFILTER_ACCEPT), (intptr_t)0 },
    { "FILTER_REJECT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterFILTER_REJECT), (intptr_t)0 },
    { "FILTER_SKIP", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterFILTER_SKIP), (intptr_t)0 },
    { "SHOW_ALL", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ALL), (intptr_t)0 },
    { "SHOW_ELEMENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ELEMENT), (intptr_t)0 },
    { "SHOW_ATTRIBUTE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ATTRIBUTE), (intptr_t)0 },
    { "SHOW_TEXT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_TEXT), (intptr_t)0 },
    { "SHOW_CDATA_SECTION", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_CDATA_SECTION), (intptr_t)0 },
    { "SHOW_ENTITY_REFERENCE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ENTITY_REFERENCE), (intptr_t)0 },
    { "SHOW_ENTITY", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_ENTITY), (intptr_t)0 },
    { "SHOW_PROCESSING_INSTRUCTION", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_PROCESSING_INSTRUCTION), (intptr_t)0 },
    { "SHOW_COMMENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_COMMENT), (intptr_t)0 },
    { "SHOW_DOCUMENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_DOCUMENT), (intptr_t)0 },
    { "SHOW_DOCUMENT_TYPE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_DOCUMENT_TYPE), (intptr_t)0 },
    { "SHOW_DOCUMENT_FRAGMENT", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_DOCUMENT_FRAGMENT), (intptr_t)0 },
    { "SHOW_NOTATION", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsNodeFilterSHOW_NOTATION), (intptr_t)0 },
    { "acceptNode", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsNodeFilterPrototypeFunctionAcceptNode), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSNodeFilterPrototypeTable = { 66, 63, JSNodeFilterPrototypeTableValues, 0 };
const ClassInfo JSNodeFilterPrototype::s_info = { "NodeFilterPrototype", &Base::s_info, &JSNodeFilterPrototypeTable, 0, CREATE_METHOD_TABLE(JSNodeFilterPrototype) };

JSObject* JSNodeFilterPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSNodeFilter>(vm, globalObject);
}

bool JSNodeFilterPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSNodeFilterPrototype* thisObject = jsCast<JSNodeFilterPrototype*>(object);
    return getStaticPropertySlot<JSNodeFilterPrototype, JSObject>(exec, JSNodeFilterPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSNodeFilter::s_info = { "NodeFilter", &Base::s_info, &JSNodeFilterTable, 0 , CREATE_METHOD_TABLE(JSNodeFilter) };

JSNodeFilter::JSNodeFilter(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<NodeFilter> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSNodeFilter::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSNodeFilter::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSNodeFilterPrototype::create(vm, globalObject, JSNodeFilterPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSNodeFilter::destroy(JSC::JSCell* cell)
{
    JSNodeFilter* thisObject = static_cast<JSNodeFilter*>(cell);
    thisObject->JSNodeFilter::~JSNodeFilter();
}

JSNodeFilter::~JSNodeFilter()
{
    releaseImplIfNotNull();
}

bool JSNodeFilter::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSNodeFilter* thisObject = jsCast<JSNodeFilter*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSNodeFilter, Base>(exec, JSNodeFilterTable, thisObject, propertyName, slot);
}

EncodedJSValue jsNodeFilterConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSNodeFilter* domObject = jsDynamicCast<JSNodeFilter*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSNodeFilter::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSNodeFilter::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSNodeFilterConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsNodeFilterPrototypeFunctionAcceptNode(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSNodeFilter* castedThis = jsDynamicCast<JSNodeFilter*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSNodeFilter::info());
    NodeFilter& impl = castedThis->impl();
    Node* n(toNode(exec->argument(0)));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());

    JSC::JSValue result = jsNumber(impl.acceptNode(exec, n));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    return JSValue::encode(result);
}

// Constant getters

EncodedJSValue jsNodeFilterFILTER_ACCEPT(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(1)));
}

EncodedJSValue jsNodeFilterFILTER_REJECT(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(2)));
}

EncodedJSValue jsNodeFilterFILTER_SKIP(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(3)));
}

EncodedJSValue jsNodeFilterSHOW_ALL(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0xFFFFFFFF)));
}

EncodedJSValue jsNodeFilterSHOW_ELEMENT(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000001)));
}

EncodedJSValue jsNodeFilterSHOW_ATTRIBUTE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000002)));
}

EncodedJSValue jsNodeFilterSHOW_TEXT(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000004)));
}

EncodedJSValue jsNodeFilterSHOW_CDATA_SECTION(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000008)));
}

EncodedJSValue jsNodeFilterSHOW_ENTITY_REFERENCE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000010)));
}

EncodedJSValue jsNodeFilterSHOW_ENTITY(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000020)));
}

EncodedJSValue jsNodeFilterSHOW_PROCESSING_INSTRUCTION(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000040)));
}

EncodedJSValue jsNodeFilterSHOW_COMMENT(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000080)));
}

EncodedJSValue jsNodeFilterSHOW_DOCUMENT(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000100)));
}

EncodedJSValue jsNodeFilterSHOW_DOCUMENT_TYPE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000200)));
}

EncodedJSValue jsNodeFilterSHOW_DOCUMENT_FRAGMENT(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000400)));
}

EncodedJSValue jsNodeFilterSHOW_NOTATION(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0x00000800)));
}

bool JSNodeFilterOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSNodeFilterOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSNodeFilter* jsNodeFilter = jsCast<JSNodeFilter*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsNodeFilter->impl(), jsNodeFilter);
    jsNodeFilter->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, NodeFilter* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSNodeFilter>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to NodeFilter.
    COMPILE_ASSERT(!__is_polymorphic(NodeFilter), NodeFilter_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<NodeFilter>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSNodeFilter>(exec, globalObject, impl);
}


}