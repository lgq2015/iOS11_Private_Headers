/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDCloudHomeManagerZone : HMDCloudZone

+ (void)createHomeManagerZoneWithName:(id)arg1 owner:(id)arg2 cacheZone:(id)arg3 cloudCache:(id)arg4 completion:(id /* block */)arg5;
+ (id)zoneRootRecordName;
+ (id)zoneSubscriptionName:(id)arg1;

- (id)createCloudZoneChangeTemporaryCache:(bool)arg1;
- (void)setServerChangeToken:(id)arg1;

@end
