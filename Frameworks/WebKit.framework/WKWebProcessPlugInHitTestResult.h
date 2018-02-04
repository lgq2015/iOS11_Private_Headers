/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleHitTestResult> { 
        struct type { 
            unsigned char __lx[152]; 
        } data; 
    }  _hitTestResult;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (id)nodeHandle;

@end
