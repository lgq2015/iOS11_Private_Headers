/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoAppMonitor.framework/NanoAppMonitor
 */

@interface NanoAppUsageMonitor : NSObject {
    NanoAppDataProvider * _appDataProvider;
    BKSApplicationStateMonitor * _appStateMonitor;
    NSObject<NanoAppUsageMonitoring> * _delegate;
    NSMutableArray * _recentlyUsedApps;
}

@property (nonatomic) NanoAppDataProvider *appDataProvider;
@property (nonatomic) NSObject<NanoAppUsageMonitoring> *delegate;
@property (nonatomic, readonly) NSArray *recentlyUsedApps;

- (void).cxx_destruct;
- (void)_addUsage:(id)arg1;
- (void)_companionAppUsage:(id)arg1 date:(id)arg2;
- (void)_logUsage;
- (id)appDataProvider;
- (id)delegate;
- (id)init;
- (id)recentlyUsedApps;
- (void)setAppDataProvider:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start:(id /* block */)arg1;

@end
