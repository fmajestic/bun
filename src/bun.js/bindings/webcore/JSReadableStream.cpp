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
#include "JSReadableStream.h"

#include "ExtendedDOMClientIsoSubspaces.h"
#include "ExtendedDOMIsoSubspaces.h"
#include "JSDOMAttribute.h"
#include "JSDOMBinding.h"
#include "JSDOMBuiltinConstructor.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMGlobalObjectInlines.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "WebCoreJSClientData.h"
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/JSCInlines.h>
#include <JavaScriptCore/JSDestructibleObjectHeapCellType.h>
#include <JavaScriptCore/SlotVisitorMacros.h>
#include <JavaScriptCore/SubspaceInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include "ZigGeneratedClasses.h"

namespace WebCore {
using namespace JSC;

extern "C" void ReadableStream__incrementCount(void*, int32_t);

// Functions

// Attributes

static JSC_DECLARE_CUSTOM_GETTER(jsReadableStreamConstructor);

class JSReadableStreamPrototype final : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSReadableStreamPrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSReadableStreamPrototype* ptr = new (NotNull, JSC::allocateCell<JSReadableStreamPrototype>(vm)) JSReadableStreamPrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    template<typename CellType, JSC::SubspaceAccess>
    static JSC::GCClient::IsoSubspace* subspaceFor(JSC::VM& vm)
    {
        STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSReadableStreamPrototype, Base);
        return &vm.plainObjectSpace();
    }
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSReadableStreamPrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};
STATIC_ASSERT_ISO_SUBSPACE_SHARABLE(JSReadableStreamPrototype, JSReadableStreamPrototype::Base);

using JSReadableStreamDOMConstructor = JSDOMBuiltinConstructor<JSReadableStream>;

template<> const ClassInfo JSReadableStreamDOMConstructor::s_info = { "ReadableStream"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSReadableStreamDOMConstructor) };

template<> JSValue JSReadableStreamDOMConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSReadableStreamDOMConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    JSString* nameString = jsNontrivialString(vm, "ReadableStream"_s);
    m_originalName.set(vm, this, nameString);
    putDirect(vm, vm.propertyNames->name, nameString, JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->prototype, JSReadableStream::prototype(vm, globalObject), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum | JSC::PropertyAttribute::DontDelete);
}

template<> FunctionExecutable* JSReadableStreamDOMConstructor::initializeExecutable(VM& vm)
{
    return readableStreamInitializeReadableStreamCodeGenerator(vm);
}

/* Hash table for prototype */

static const HashTableValue JSReadableStreamPrototypeTableValues[] = {
    { "constructor"_s, static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { HashTableValue::GetterSetterType, jsReadableStreamConstructor, 0 } },
    { "locked"_s, static_cast<unsigned>(JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::Accessor | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinAccessorType, readableStreamLockedCodeGenerator, 0 } },
    { "cancel"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, readableStreamCancelCodeGenerator, 0 } },
    { "getReader"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, readableStreamGetReaderCodeGenerator, 0 } },
    { "pipeTo"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, readableStreamPipeToCodeGenerator, 1 } },
    { "pipeThrough"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, readableStreamPipeThroughCodeGenerator, 2 } },
    { "tee"_s, static_cast<unsigned>(JSC::PropertyAttribute::Function | JSC::PropertyAttribute::Builtin), NoIntrinsic, { HashTableValue::BuiltinGeneratorType, readableStreamTeeCodeGenerator, 0 } },

};

const ClassInfo JSReadableStreamPrototype::s_info = { "ReadableStream"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSReadableStreamPrototype) };

static JSC_DEFINE_CUSTOM_SETTER(JSReadableStreamPrototype__nativePtrSetterWrap, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue encodedThisValue, JSC::EncodedJSValue encodedJSValue, JSC::PropertyName))
{
    JSReadableStream* thisObject = jsCast<JSReadableStream*>(JSValue::decode(encodedThisValue));
    thisObject->setNativePtr(lexicalGlobalObject->vm(), JSValue::decode(encodedJSValue));
    return true;
}

static JSC_DEFINE_CUSTOM_GETTER(JSReadableStreamPrototype__nativePtrGetterWrap, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue encodedThisValue, JSC::PropertyName))
{
    JSReadableStream* thisObject = jsCast<JSReadableStream*>(JSValue::decode(encodedThisValue));
    return JSValue::encode(thisObject->nativePtr());
}

static JSC_DEFINE_CUSTOM_SETTER(JSReadableStreamPrototype__nativeTypeSetterWrap, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue encodedThisValue, JSC::EncodedJSValue encodedJSValue, JSC::PropertyName))
{
    JSReadableStream* thisObject = jsCast<JSReadableStream*>(JSValue::decode(encodedThisValue));
    thisObject->setNativeType(JSValue::decode(encodedJSValue).toInt32(lexicalGlobalObject));
    return true;
}

static JSC_DEFINE_CUSTOM_GETTER(JSReadableStreamPrototype__nativeTypeGetterWrap, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue encodedThisValue, JSC::PropertyName))
{
    JSReadableStream* thisObject = jsCast<JSReadableStream*>(JSValue::decode(encodedThisValue));
    return JSValue::encode(jsNumber(thisObject->nativeType()));
}

static JSC_DEFINE_CUSTOM_SETTER(JSReadableStreamPrototype__disturbedSetterWrap, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue encodedThisValue, JSC::EncodedJSValue encodedJSValue, JSC::PropertyName))
{
    JSReadableStream* thisObject = jsCast<JSReadableStream*>(JSValue::decode(encodedThisValue));
    thisObject->setDisturbed(JSValue::decode(encodedJSValue).toBoolean(lexicalGlobalObject));
    return true;
}

static JSC_DEFINE_CUSTOM_GETTER(JSReadableStreamPrototype__disturbedGetterWrap, (JSC::JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue encodedThisValue, JSC::PropertyName))
{
    JSReadableStream* thisObject = jsCast<JSReadableStream*>(JSValue::decode(encodedThisValue));
    return JSValue::encode(jsBoolean(thisObject->disturbed()));
}

void JSReadableStreamPrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    auto clientData = WebCore::clientData(vm);

    this->putDirectCustomAccessor(vm, clientData->builtinNames().bunNativePtrPrivateName(), DOMAttributeGetterSetter::create(vm, JSReadableStreamPrototype__nativePtrGetterWrap, JSReadableStreamPrototype__nativePtrSetterWrap, DOMAttributeAnnotation { JSReadableStream::info(), nullptr }), JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute | PropertyAttribute::DontDelete);
    this->putDirectCustomAccessor(vm, clientData->builtinNames().bunNativeTypePrivateName(), DOMAttributeGetterSetter::create(vm, JSReadableStreamPrototype__nativeTypeGetterWrap, JSReadableStreamPrototype__nativeTypeSetterWrap, DOMAttributeAnnotation { JSReadableStream::info(), nullptr }), JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute | PropertyAttribute::DontDelete);
    this->putDirectCustomAccessor(vm, clientData->builtinNames().disturbedPrivateName(), DOMAttributeGetterSetter::create(vm, JSReadableStreamPrototype__disturbedGetterWrap, JSReadableStreamPrototype__disturbedSetterWrap, DOMAttributeAnnotation { JSReadableStream::info(), nullptr }), JSC::PropertyAttribute::CustomAccessor | JSC::PropertyAttribute::DOMAttribute | PropertyAttribute::DontDelete);

    reifyStaticProperties(vm, JSReadableStream::info(), JSReadableStreamPrototypeTableValues, *this);
    this->putDirectBuiltinFunction(vm, globalObject(), vm.propertyNames->asyncIteratorSymbol, readableStreamLazyAsyncIteratorCodeGenerator(vm), JSC::PropertyAttribute::DontDelete | 0);
    this->putDirectBuiltinFunction(vm, globalObject(), JSC::Identifier::fromString(vm, "values"_s), readableStreamValuesCodeGenerator(vm), JSC::PropertyAttribute::DontDelete | 0);
    JSC_TO_STRING_TAG_WITHOUT_TRANSITION();
}

const ClassInfo JSReadableStream::s_info = { "ReadableStream"_s, &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSReadableStream) };

JSReadableStream::JSReadableStream(Structure* structure, JSDOMGlobalObject& globalObject)
    : JSDOMObject(structure, globalObject)
{
}

void JSReadableStream::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

void JSReadableStream::setNativePtr(JSC::VM& vm, JSC::JSValue value)
{

    this->m_nativePtr.set(vm, this, value);
}

JSObject* JSReadableStream::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    auto* structure = JSReadableStreamPrototype::createStructure(vm, &globalObject, globalObject.objectPrototype());
    structure->setMayBePrototype(true);
    return JSReadableStreamPrototype::create(vm, &globalObject, structure);
}

JSObject* JSReadableStream::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSReadableStream>(vm, globalObject);
}

JSValue JSReadableStream::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSReadableStreamDOMConstructor, DOMConstructorID::ReadableStream>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSReadableStream::destroy(JSC::JSCell* cell)
{
    JSReadableStream* thisObject = static_cast<JSReadableStream*>(cell);
    thisObject->JSReadableStream::~JSReadableStream();
}

JSC_DEFINE_CUSTOM_GETTER(jsReadableStreamConstructor, (JSGlobalObject * lexicalGlobalObject, JSC::EncodedJSValue thisValue, PropertyName))
{
    VM& vm = JSC::getVM(lexicalGlobalObject);
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSReadableStreamPrototype*>(JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(lexicalGlobalObject, throwScope);
    return JSValue::encode(JSReadableStream::getConstructor(JSC::getVM(lexicalGlobalObject), prototype->globalObject()));
}

JSC::GCClient::IsoSubspace* JSReadableStream::subspaceForImpl(JSC::VM& vm)
{
    return WebCore::subspaceForImpl<JSReadableStream, UseCustomHeapCellType::No>(
        vm,
        [](auto& spaces) { return spaces.m_clientSubspaceForReadableStream.get(); },
        [](auto& spaces, auto&& space) { spaces.m_clientSubspaceForReadableStream = std::forward<decltype(space)>(space); },
        [](auto& spaces) { return spaces.m_subspaceForReadableStream.get(); },
        [](auto& spaces, auto&& space) { spaces.m_subspaceForReadableStream = std::forward<decltype(space)>(space); });
}

template<typename Visitor>
void JSReadableStream::visitChildrenImpl(JSCell* cell, Visitor& visitor)
{
    JSReadableStream* stream = jsCast<JSReadableStream*>(cell);
    ASSERT_GC_OBJECT_INHERITS(stream, info());
    Base::visitChildren(stream, visitor);

    visitor.append(stream->m_nativePtr);
}

DEFINE_VISIT_CHILDREN(JSReadableStream);

}
