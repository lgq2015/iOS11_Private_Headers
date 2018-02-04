/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
 */

@interface CacheDeleteListener : NSObject <NSXPCListenerDelegate> {
    bool  _isResumed;
    NSXPCListener * _listener;
    Protocol * _protocol;
    NSMutableSet * _requiredEntitlements;
    NSString * _serviceName;
    id  _xObj;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isResumed;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) Protocol *protocol;
@property (nonatomic, retain) NSMutableSet *requiredEntitlements;
@property (nonatomic, retain) NSString *serviceName;
@property (readonly) Class superclass;
@property (nonatomic, retain) id xObj;

+ (id)daemonListenerWithExportedObject:(id)arg1;
+ (id)daemonPublicListenerWithExportedObject:(id)arg1;

- (void).cxx_destruct;
- (void)addRequiredEntitlement:(id)arg1;
- (id)initWithName:(id)arg1 listener:(id)arg2 protocol:(id)arg3 exportedObj:(id)arg4 isExtension:(bool)arg5;
- (bool)isResumed;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)protocol;
- (id)requiredEntitlements;
- (void)resume;
- (id)serviceName;
- (void)setIsResumed:(bool)arg1;
- (void)setListener:(id)arg1;
- (void)setProtocol:(id)arg1;
- (void)setRequiredEntitlements:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setXObj:(id)arg1;
- (void)suspend;
- (id)xObj;

@end
