/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKSystemAppStateCache : NSObject <LSApplicationWorkspaceObserverProtocol> {
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSMutableSet * _removedSystemApps;
    NSMutableSet * _restrictedSystemApps;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_queue_applicationsDidChange:(id)arg1 state:(unsigned long long)arg2;
- (void)_queue_initializeRemovedSystemApps;
- (void)_queue_initializeRestrictedSystemApps;
- (id)_queue_removedSystemApps;
- (id)_queue_restrictedSystemApps;
- (void)applicationStateDidChange:(id)arg1;
- (void)applicationsDidInstall:(id)arg1;
- (void)applicationsDidUninstall:(id)arg1;
- (void)dealloc;
- (id)init;
- (bool)isRemovedSystemApp:(id)arg1;
- (bool)isRestrictedSystemApp:(id)arg1;
- (void)prewarmGizmoDaemon;
- (id)removedSystemApps;
- (id)restrictedSystemApps;

@end
