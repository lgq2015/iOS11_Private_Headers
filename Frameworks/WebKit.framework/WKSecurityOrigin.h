/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKSecurityOrigin : NSObject <WKObject> {
    struct ObjectStorage<API::SecurityOrigin> { 
        struct type { 
            unsigned char __lx[24]; 
        } data; 
    }  _securityOrigin;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *host;
@property (nonatomic, readonly) long long port;
@property (nonatomic, readonly, copy) NSString *protocol;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (id)description;
- (id)host;
- (long long)port;
- (id)protocol;

@end
