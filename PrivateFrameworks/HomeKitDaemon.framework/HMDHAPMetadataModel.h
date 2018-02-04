/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHAPMetadataModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSData *legacyCloudData;
@property (nonatomic, retain) NSData *legacyIDSData;
@property (nonatomic, retain) NSNumber *metadataVersion;
@property (nonatomic, retain) NSDictionary *rawPlist;
@property (nonatomic, retain) NSNumber *schemaVersion;

+ (id)metadataModelObjectUUID;
+ (id)modelWithDictionary:(id)arg1;
+ (id)properties;

- (id)metadataDictionary;

@end
