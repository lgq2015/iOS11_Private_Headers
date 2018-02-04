/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDAccessoryTransaction : HMDBackingStoreModelObject

@property (nonatomic, retain) NSNumber *accessoryCategory;
@property (nonatomic, retain) NSNumber *blocked;
@property (nonatomic, retain) NSString *configurationAppIdentifier;
@property (nonatomic, retain) NSString *firmwareVersion;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSString *model;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *providedName;
@property (nonatomic, retain) NSString *roomUUID;
@property (nonatomic, retain) NSString *serialNumber;

+ (id)properties;

- (id)dependentUUIDs;

@end
