/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKWebsitePolicies : NSObject <WKObject> {
    struct ObjectStorage<API::WebsitePolicies> { 
        struct type { 
            unsigned char __lx[32]; 
        } data; 
    }  _websitePolicies;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (nonatomic) unsigned long long allowedAutoplayQuirks;
@property (nonatomic) long long autoplayPolicy;
@property (nonatomic) bool contentBlockersEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (unsigned long long)allowedAutoplayQuirks;
- (long long)autoplayPolicy;
- (bool)contentBlockersEnabled;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setAllowedAutoplayQuirks:(unsigned long long)arg1;
- (void)setAutoplayPolicy:(long long)arg1;
- (void)setContentBlockersEnabled:(bool)arg1;

@end
