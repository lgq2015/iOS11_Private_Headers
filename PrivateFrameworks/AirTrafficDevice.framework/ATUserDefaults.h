/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATUserDefaults : NSObject {
    NSMutableDictionary * _defaults;
}

@property (nonatomic, retain) NSDictionary *diskUsageInfo;
@property (nonatomic) bool hasCompletedDataMigration;

+ (id)readOnlyDefaults;
+ (id)sharedInstance;
+ (void)synchronize;

- (void).cxx_destruct;
- (void)_updateDefaults;
- (id)allHosts;
- (id)diskUsageInfo;
- (bool)hasCompletedDataMigration;
- (id)hostInfoForIdentifier:(id)arg1;
- (id)init;
- (void)removeHost:(id)arg1;
- (void)setDiskUsageInfo:(id)arg1;
- (void)setHasCompletedDataMigration:(bool)arg1;
- (void)updateHostInfo:(id)arg1 disabledAssetTypes:(id)arg2;
- (void)updateLastSyncWithHostLibrary:(id)arg1;

@end
