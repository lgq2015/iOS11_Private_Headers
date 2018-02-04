/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _ATXAppInstallMonitor : NSObject {
    _ATXAppInfoManager * _appInfoManager;
    NSDictionary * _assetData;
    NSObject<OS_dispatch_queue> * _installQueue;
    id /* block */  _updateCompletionBlock;
}

- (void).cxx_destruct;
- (void)_receivedInstallNotificationWithApps:(id)arg1 placeholderInstallNotification:(bool)arg2;
- (void)_receivedUninstallNotificationWithApps:(id)arg1 placeholderUninstallNotification:(bool)arg2;
- (void)dealloc;
- (id)fetchAllAppsFromDatastore;
- (id)fetchAllAppsWithInstallDateFromDatastore;
- (id)fetchInstalledApps;
- (void)handleInstallationOfApps:(id)arg1 andBackdate:(bool)arg2;
- (void)handleUninstallationOfApps:(id)arg1;
- (id)initWithAppInfoManager:(id)arg1;
- (void)noSyncUpdateWithWaitTime:(unsigned long long)arg1 andBackdate:(bool)arg2;
- (void)receivedInstallNotification:(id)arg1;
- (void)receivedStateChangeNotification:(id)arg1;
- (void)receivedUninstallNotification:(id)arg1;
- (id)removeIntersectionBetweenSet:(id)arg1 set:(id)arg2;
- (bool)restoreInProgress;
- (void)setUpdateCompletionBlock:(id /* block */)arg1;
- (void)start;
- (void)stop;
- (void)synchronousUpdateAndBackdate:(bool)arg1;
- (void)synchronousUpdateWithUninstallWaitTime:(unsigned long long)arg1 andBackdate:(bool)arg2;
- (void)train;

@end
