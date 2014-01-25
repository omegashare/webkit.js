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

#ifndef JSRTCDTMFSender_h
#define JSRTCDTMFSender_h

#if ENABLE(MEDIA_STREAM)

#include "JSDOMBinding.h"
#include "RTCDTMFSender.h"
#include <runtime/JSGlobalObject.h>
#include <runtime/JSObject.h>
#include <runtime/ObjectPrototype.h>

namespace WebCore {

class JSRTCDTMFSender : public JSDOMWrapper {
public:
    typedef JSDOMWrapper Base;
    static JSRTCDTMFSender* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<RTCDTMFSender> impl)
    {
        JSRTCDTMFSender* ptr = new (NotNull, JSC::allocateCell<JSRTCDTMFSender>(globalObject->vm().heap)) JSRTCDTMFSender(structure, globalObject, impl);
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSC::JSGlobalObject*);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static void put(JSC::JSCell*, JSC::ExecState*, JSC::PropertyName, JSC::JSValue, JSC::PutPropertySlot&);
    static void destroy(JSC::JSCell*);
    ~JSRTCDTMFSender();
    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static void visitChildren(JSCell*, JSC::SlotVisitor&);

    RTCDTMFSender& impl() const { return *m_impl; }
    void releaseImpl() { m_impl->deref(); m_impl = 0; }

    void releaseImplIfNotNull()
    {
        if (m_impl) {
            m_impl->deref();
            m_impl = 0;
        }
    }

private:
    RTCDTMFSender* m_impl;
protected:
    JSRTCDTMFSender(JSC::Structure*, JSDOMGlobalObject*, PassRefPtr<RTCDTMFSender>);
    void finishCreation(JSC::VM&);
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::OverridesVisitChildren | Base::StructureFlags;
};

class JSRTCDTMFSenderOwner : public JSC::WeakHandleOwner {
public:
    virtual bool isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown>, void* context, JSC::SlotVisitor&);
    virtual void finalize(JSC::Handle<JSC::Unknown>, void* context);
};

inline JSC::WeakHandleOwner* wrapperOwner(DOMWrapperWorld&, RTCDTMFSender*)
{
    DEFINE_STATIC_LOCAL(JSRTCDTMFSenderOwner, jsRTCDTMFSenderOwner, ());
    return &jsRTCDTMFSenderOwner;
}

inline void* wrapperContext(DOMWrapperWorld& world, RTCDTMFSender*)
{
    return &world;
}

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, RTCDTMFSender*);
RTCDTMFSender* toRTCDTMFSender(JSC::JSValue);

class JSRTCDTMFSenderPrototype : public JSC::JSNonFinalObject {
public:
    typedef JSC::JSNonFinalObject Base;
    static JSC::JSObject* self(JSC::VM&, JSC::JSGlobalObject*);
    static JSRTCDTMFSenderPrototype* create(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSRTCDTMFSenderPrototype* ptr = new (NotNull, JSC::allocateCell<JSRTCDTMFSenderPrototype>(vm.heap)) JSRTCDTMFSenderPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSRTCDTMFSenderPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure) : JSC::JSNonFinalObject(vm, structure) { }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::OverridesVisitChildren | Base::StructureFlags;
};

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsRTCDTMFSenderPrototypeFunctionInsertDTMF(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRTCDTMFSenderPrototypeFunctionAddEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRTCDTMFSenderPrototypeFunctionRemoveEventListener(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsRTCDTMFSenderPrototypeFunctionDispatchEvent(JSC::ExecState*);
// Attributes

JSC::EncodedJSValue jsRTCDTMFSenderCanInsertDTMF(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCDTMFSenderTrack(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCDTMFSenderToneBuffer(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCDTMFSenderDuration(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCDTMFSenderInterToneGap(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
JSC::EncodedJSValue jsRTCDTMFSenderOntonechange(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue, JSC::PropertyName);
void setJSRTCDTMFSenderOntonechange(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);

} // namespace WebCore

#endif // ENABLE(MEDIA_STREAM)

#endif