/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDXPCClient : NSObject <NSCopying> {
    NSUUID * _UUID;
    NSXPCConnection * _connection;
    NSString * _containerAppBundleIdentifier;
    NSMutableSet * _droppedEntitlements;
    _HKEntitlements * _entitlements;
    NSString * _entitlementsApplicationIdentifier;
    bool  _isExtension;
    NSString * _name;
    NSString * _processBundleIdentifier;
    NSString * _sourceBundleIdentifier;
}

@property (readonly) NSUUID *UUID;
@property (readonly, copy) NSString *applicationIdentifier;
@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *containerAppBundleIdentifier;
@property (nonatomic, retain) NSMutableSet *droppedEntitlements;
@property (readonly) _HKEntitlements *entitlements;
@property (readonly) bool isExtension;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *processBundleIdentifier;
@property (readonly) int processIdentifier;
@property (readonly, copy) NSString *sourceBundleIdentifier;

+ (id)clientWithConnection:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)UUID;
- (id)_initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)applicationIdentifier;
- (id)baseDataEntityEncodingOptions;
- (id)connection;
- (id)containerAppBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)dropEntitlement:(id)arg1;
- (id)droppedEntitlements;
- (id)entitlements;
- (id)filterWithQueryFilter:(id)arg1 profile:(id)arg2;
- (bool)hasEntitlement:(id)arg1;
- (bool)hasRequiredEntitlement:(id)arg1 error:(id*)arg2;
- (id)initWithConnection:(id)arg1 entitlements:(id)arg2;
- (id)initWithEntitlements:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExtension;
- (id)name;
- (id)processBundleIdentifier;
- (int)processIdentifier;
- (void)restoreEntitlement:(id)arg1;
- (void)setDroppedEntitlements:(id)arg1;
- (bool)shouldBypassAuthorization;
- (id)sourceBundleIdentifier;
- (id)valueForEntitlement:(id)arg1;

@end
