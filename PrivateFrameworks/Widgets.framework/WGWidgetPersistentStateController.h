/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetPersistentStateController : NSObject <NSXPCListenerDelegate, _NCWidgetController_Host_IPC> {
    WGWidgetDiscoveryController * _discoveryController;
    NSXPCListener * _listener;
    NSMutableDictionary * _widgetIdentifiersToCachedState;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_persistentStateForWidgetWithIdentifier:(id)arg1 containingBundleIdentifier:(id)arg2;
+ (bool)hasContentForWidgetWithIdentifier:(id)arg1 containingBundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)__requestRefreshAfterDate:(id)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (void)__setHasContent:(bool)arg1 forWidgetWithBundleIdentifier:(id)arg2;
- (bool)_setHasContent:(bool)arg1 forWidgetWithIdentifier:(id)arg2;
- (void)_setValue:(id)arg1 forKey:(id)arg2 forWidgetWithIdentifier:(id)arg3 containingBundleID:(id)arg4;
- (void)_synchronizePersistentStateForWidgetWithIdentifier:(id)arg1;
- (id)_updateCachedStateForWidgetWithIdentifier:(id)arg1 containingBundleID:(id)arg2;
- (id)_valueForKey:(id)arg1 forWidgetWithIdentifier:(id)arg2;
- (void)dealloc;
- (bool)doesWidgetWithIdentifierHaveContent:(id)arg1;
- (id)initWithDiscoveryController:(id)arg1;
- (long long)largestAvailableDisplayModeForWidgetWithIdentifier:(id)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (bool)setLargestAvailableDisplayMode:(long long)arg1 forWidgetWithIdentifier:(id)arg2;

@end
