/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptObject : NSObject {
    unsigned int  _checkOutWhenHidden;
    NSString * _className;
    NSMutableArray * _eventListeners;
    SUScriptObjectInvocationBatch * _invocationBatch;
    unsigned int  _isVisible;
    NSLock * _lock;
    SUScriptNativeObject * _nativeObject;
    SUScriptObject * _parentScriptObject;
    NSMutableSet * _scriptObjects;
}

@property (getter=_className, readonly) NSString *className;
@property (readonly, retain) SUClientInterface *clientInterface;
@property (readonly) struct OpaqueJSContext { }*copyJavaScriptContext;
@property (retain) SUScriptNativeObject *nativeObject;
@property SUScriptObject *parentScriptObject;
@property (readonly) NSMutableArray *scriptAttributeKeys;
@property (readonly) bool sourceIsTrusted;
@property (readonly, retain) WebFrame *webFrame;

+ (void)initialize;
+ (bool)isKeyExcludedFromWebScript:(const char *)arg1;
+ (bool)isSelectorExcludedFromWebScript:(SEL)arg1;
+ (id)webScriptNameForKey:(const char *)arg1;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)DOMElementWithElement:(id)arg1;
- (void)_checkOutAfterVisibilityChange;
- (id)_className;
- (id)_copyListenersForName:(id)arg1;
- (void)addListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(bool)arg3;
- (void)checkInScriptObject:(id)arg1;
- (void)checkInScriptObjects:(id)arg1;
- (void)checkOutBatchTarget:(id)arg1;
- (void)checkOutScriptObject:(id)arg1;
- (void)checkOutScriptObjects:(id)arg1;
- (id)clientInterface;
- (struct OpaqueJSContext { }*)copyJavaScriptContext;
- (id)copyObjectForScriptFromPoolWithClass:(Class)arg1;
- (void)dealloc;
- (void)didPerformBatchedInvocations;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2;
- (void)dispatchEvent:(id)arg1 forName:(id)arg2 synchronously:(bool)arg3;
- (bool)equals:(id)arg1;
- (void)finalizeForWebScript;
- (id)init;
- (id)invocationBatch:(bool)arg1;
- (bool)isVisible;
- (void)loadImageWithURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)lock;
- (id)nativeObject;
- (id)newImageWithURL:(id)arg1;
- (id)newImageWithURL:(id)arg1 scale:(double)arg2;
- (id)parentScriptObject;
- (id)parentViewController;
- (void)removeListenerForEventWithName:(id)arg1 callback:(id)arg2 useCapture:(bool)arg3;
- (id)scriptAttributeKeys;
- (bool)scriptObjectIsCheckedIn:(id)arg1;
- (void)setNativeObject:(id)arg1;
- (void)setParentScriptObject:(id)arg1;
- (void)setVisible:(bool)arg1;
- (bool)sourceIsTrusted;
- (id)stringRepresentation;
- (void)tearDownUserInterface;
- (void)unlock;
- (id)viewControllerFactory;
- (id)webFrame;
- (id)webThreadMainThreadBatchProxy;
- (void)willPerformBatchedInvocations;

@end
