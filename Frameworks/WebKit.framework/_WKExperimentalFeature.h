/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKExperimentalFeature : NSObject <WKObject> {
    struct ObjectStorage<API::ExperimentalFeature> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _experimentalFeature;
}

@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) bool defaultValue;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *details;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *key;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (void)dealloc;
- (bool)defaultValue;
- (id)description;
- (id)details;
- (id)key;
- (id)name;

@end
