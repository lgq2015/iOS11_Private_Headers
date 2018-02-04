/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInController : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundle> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    }  _bundle;
    struct RetainPtr<id<WKWebProcessPlugIn> > { 
        void *m_ptr; 
    }  _principalClassInstance;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) struct OpaqueWKBundle { }*_bundleRef;
@property (readonly) WKConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) id parameters;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct OpaqueWKBundle { }*)_bundleRef;
- (void)_setPrincipalClassInstance:(id)arg1;
- (id)connection;
- (void)dealloc;
- (id)parameters;

@end
