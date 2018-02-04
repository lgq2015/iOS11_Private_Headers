/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSharedHomeModel : HMDBackingStoreModelObject

@property (nonatomic, retain) NSNumber *configurationVersion;
@property (nonatomic, retain) NSData *homeData;

+ (id)properties;

@end
