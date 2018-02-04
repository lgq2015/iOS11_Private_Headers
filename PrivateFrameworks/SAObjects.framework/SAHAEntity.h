/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAHAEntity : SADomainObject

@property (nonatomic, copy) NSString *accessory;
@property (nonatomic, copy) NSURL *accessoryIdentifier;
@property (nonatomic, copy) NSArray *attributes;
@property (nonatomic, copy) NSNumber *currentDevice;
@property (nonatomic, copy) NSString *entityType;
@property (nonatomic, copy) NSString *hashedRouteUID;
@property (nonatomic, copy) NSString *home;
@property (nonatomic, copy) NSURL *homeIdentifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *room;
@property (nonatomic, copy) NSURL *roomIdentifier;
@property (nonatomic, copy) NSString *sceneType;
@property (nonatomic, copy) NSString *serviceGroup;
@property (nonatomic, copy) NSArray *serviceGroupIdentifiers;
@property (nonatomic, copy) NSString *serviceSubType;
@property (nonatomic, copy) NSString *serviceType;
@property (nonatomic, copy) NSArray *status;
@property (nonatomic, copy) NSArray *targetAttributes;
@property (nonatomic, copy) NSString *zone;
@property (nonatomic, copy) NSArray *zoneIdentifiers;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)entity;
+ (id)entityWithDictionary:(id)arg1 context:(id)arg2;

- (id)accessory;
- (id)accessoryIdentifier;
- (id)attributes;
- (id)currentDevice;
- (id)encodedClassName;
- (id)entityType;
- (id)groupIdentifier;
- (id)hashedRouteUID;
- (id)home;
- (id)homeIdentifier;
- (id)name;
- (id)room;
- (id)roomIdentifier;
- (id)sceneType;
- (id)serviceGroup;
- (id)serviceGroupIdentifiers;
- (id)serviceSubType;
- (id)serviceType;
- (void)setAccessory:(id)arg1;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setCurrentDevice:(id)arg1;
- (void)setEntityType:(id)arg1;
- (void)setHashedRouteUID:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeIdentifier:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setRoomIdentifier:(id)arg1;
- (void)setSceneType:(id)arg1;
- (void)setServiceGroup:(id)arg1;
- (void)setServiceGroupIdentifiers:(id)arg1;
- (void)setServiceSubType:(id)arg1;
- (void)setServiceType:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTargetAttributes:(id)arg1;
- (void)setZone:(id)arg1;
- (void)setZoneIdentifiers:(id)arg1;
- (id)status;
- (id)targetAttributes;
- (id)zone;
- (id)zoneIdentifiers;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

- (id)shortDescription;

@end
