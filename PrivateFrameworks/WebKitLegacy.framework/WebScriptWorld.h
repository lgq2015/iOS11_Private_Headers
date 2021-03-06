/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebScriptWorld : NSObject {
    WebScriptWorldPrivate * _private;
}

+ (id)findOrCreateWorld:(struct DOMWrapperWorld { unsigned int x1; struct HashMap<void *, JSC::Weak<JSC::JSObject>, WTF::PtrHash<void *>, WTF::HashTraits<void *>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > > { struct HashTable<void *, WTF::KeyValuePair<void *, JSC::Weak<JSC::JSObject> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<void *, JSC::Weak<JSC::JSObject> > >, WTF::PtrHash<void *>, WTF::HashMap<void *, JSC::Weak<JSC::JSObject>, WTF::PtrHash<void *>, WTF::HashTraits<void *>, WTF::HashTraits<JSC::Weak<JSC::JSObject> > >::KeyValuePairTraits, WTF::HashTraits<void *> > { struct KeyValuePair<void *, JSC::Weak<JSC::JSObject> > {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_2_1_1; } x2; struct HashMap<WebCore::DeprecatedCSSOMValue *, void *, WTF::PtrHash<WebCore::DeprecatedCSSOMValue *>, WTF::HashTraits<WebCore::DeprecatedCSSOMValue *>, WTF::HashTraits<void *> > { struct HashTable<WebCore::DeprecatedCSSOMValue *, WTF::KeyValuePair<WebCore::DeprecatedCSSOMValue *, void *>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WebCore::DeprecatedCSSOMValue *, void *> >, WTF::PtrHash<WebCore::DeprecatedCSSOMValue *>, WTF::HashMap<WebCore::DeprecatedCSSOMValue *, void *, WTF::PtrHash<WebCore::DeprecatedCSSOMValue *>, WTF::HashTraits<WebCore::DeprecatedCSSOMValue *>, WTF::HashTraits<void *> >::KeyValuePairTraits, WTF::HashTraits<WebCore::DeprecatedCSSOMValue *> > { struct KeyValuePair<WebCore::DeprecatedCSSOMValue *, void *> {} *x_1_2_1; unsigned int x_1_2_2; unsigned int x_1_2_3; unsigned int x_1_2_4; unsigned int x_1_2_5; } x_3_1_1; } x3; }*)arg1;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext { }*)arg1;
+ (id)scriptWorldForJavaScriptContext:(id)arg1;
+ (id)standardWorld;
+ (id)world;

- (void)dealloc;
- (id)init;
- (id)initWithWorld:(struct Ref<WebCore::DOMWrapperWorld> { struct DOMWrapperWorld {} *x1; }*)arg1;
- (void)unregisterWorld;

@end
