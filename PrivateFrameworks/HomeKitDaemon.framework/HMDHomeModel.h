/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomeModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSNumber *automaticSoftwareUpdateEnabled;
@property (nonatomic, retain) NSString *defaultRoomUUID;
@property (nonatomic, retain) NSData *homeLocationData;
@property (nonatomic, retain) NSString *mediaPassword;
@property (nonatomic, retain) NSNumber *mediaPeerToPeerEnabled;
@property (nonatomic, retain) NSNumber *minimumMediaUserPrivilege;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *ownerName;
@property (nonatomic, retain) NSData *ownerPublicKey;
@property (nonatomic, retain) NSString *ownerUserID;
@property (nonatomic, retain) NSNumber *presenceAuthorizationStatus;
@property (nonatomic, retain) NSNumber *presenceComputeStatus;
@property (nonatomic, retain) NSString *primaryResidentUUID;
@property (nonatomic, retain) HMDHomeKitVersion *sharedHomeSourceVersion;

+ (id)properties;

@end
