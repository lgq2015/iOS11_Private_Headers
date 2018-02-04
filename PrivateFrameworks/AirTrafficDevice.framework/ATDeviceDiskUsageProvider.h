/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceDiskUsageProvider : NSObject {
    ATClientController * _clientController;
    ATUserDefaults * _defaults;
    NSMutableDictionary * _diskUsageInfo;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _usageInfoAccessQueue;
    NSObject<OS_dispatch_group> * _usageUpdateGroup;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_diskUsageForDataClass:(id)arg1;
- (void)_loadCurrentDiskUsage;
- (void)_updatePurgeableStorageUsage;
- (id)getCurrentUsage;
- (void)getCurrentUsageWithUpdatedDataClasses:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)getUpdatedUsageWithCompletion:(id /* block */)arg1;
- (id)init;

@end
