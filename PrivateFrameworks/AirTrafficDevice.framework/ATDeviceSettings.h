/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceSettings : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    NSUserDefaults * _userDefaults;
}

@property (nonatomic, readonly, copy) NSArray *dataClassesNeedingSync;
@property (nonatomic, readonly) bool fairPlayEnabled;
@property (nonatomic, readonly) bool grappaEnabled;
@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic, readonly) bool isDeviceLinkClient;
@property (nonatomic) double lastAuthenticationDialogResponseTime;
@property (nonatomic, readonly, copy) NSString *libraryIdentifier;
@property (nonatomic, readonly) double pairingSyncCompletionTime;
@property (nonatomic, readonly) unsigned long long restoreBatchSize;
@property (nonatomic, readonly) bool restoreBatchingEnabled;
@property (nonatomic, readonly, copy) NSString *serviceDomain;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (nonatomic, readonly) bool useNetServicesConnection;
@property (nonatomic, readonly) bool useNewDownloadService;
@property (nonatomic, readonly) bool watchProxyDownloadsDisabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_endpointInfoForLibrary:(id)arg1;
- (void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2;
- (int)activeRestoreType;
- (id)dataClassesNeedingSync;
- (id)endpointInfo;
- (bool)fairPlayEnabled;
- (bool)grappaEnabled;
- (bool)hasCompletedDataMigration;
- (id)hostInfoForLibrary:(id)arg1;
- (id)init;
- (id)interfaceName;
- (bool)isDeviceLinkClient;
- (bool)isSyncPendingForDataClass:(id)arg1;
- (double)lastAuthenticationDialogResponseTime;
- (id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2;
- (id)libraryIdentifier;
- (double)pairingSyncCompletionTime;
- (void)removeEndpointInfoForLibrary:(id)arg1;
- (unsigned long long)restoreBatchSize;
- (bool)restoreBatchingEnabled;
- (id)serviceDomain;
- (id)serviceName;
- (id)serviceType;
- (void)setActiveRestoreType:(int)arg1;
- (void)setEndpointInfo:(id)arg1;
- (void)setHasCompletedDataMigration:(bool)arg1;
- (void)setHostInfo:(id)arg1 forLibrary:(id)arg2;
- (void)setLastAuthenticationDialogResponseTime:(double)arg1;
- (void)setPairingSyncCompletionTime:(double)arg1;
- (void)setSyncPending:(bool)arg1 forDataClass:(id)arg2;
- (void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3;
- (void)setVersion:(unsigned long long)arg1 forDataclass:(id)arg2;
- (id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2;
- (void)synchronize;
- (void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2;
- (bool)useNetServicesConnection;
- (bool)useNewDownloadService;
- (unsigned long long)versionForDataclass:(id)arg1;
- (bool)watchProxyDownloadsDisabled;

@end
