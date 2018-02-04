/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKVisitedLinkStore : NSObject <WKObject> {
    struct ObjectStorage<WebKit::VisitedLinkStore> { 
        struct type { 
            unsigned char __lx[192]; 
        } data; 
    }  _visitedLinkStore;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)addVisitedLinkWithURL:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeAll;

@end
