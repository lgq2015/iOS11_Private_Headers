/* made by EzioChiu.
 */

@protocol WFNetworkListing <NSObject>

@required

- (<WFNetworkListRecord> *)currentNetwork;
- (float)currentNetworkScaledRSSI;
- (long long)currentNetworkState;
- (void)powerStateDidChange:(bool)arg1;
- (void)refresh;
- (void)setCurrentNetwork:(id <WFNetworkListRecord>)arg1;
- (void)setCurrentNetworkScaledRSSI:(float)arg1;
- (void)setCurrentNetworkState:(long long)arg1;
- (void)setListDelegate:(id <WFNetworkListDelegate>)arg1;
- (void)setNetworks:(NSSet *)arg1;
- (void)setShowOtherNetwork:(bool)arg1;
- (bool)showOtherNetwork;

@optional

- (NSString *)currentNetworkSubtitle;
- (long long)deviceCapability;
- (bool)disabled;
- (void)networkListDelegateDidPresentAccessoryViewController:(UIViewController<WFAccessoryViewController> *)arg1;
- (void)networkListDelegateWillPresentAccessoryViewController:(UIViewController<WFAccessoryViewController> *)arg1;
- (void)setCurrentNetwork:(id <WFNetworkListRecord>)arg1 scrollToRecord:(bool)arg2;
- (void)setCurrentNetworkSubtitle:(NSString *)arg1;
- (void)setDeviceCapability:(long long)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setScanning:(bool)arg1;
- (void)setUserAutoJoinEnabled:(bool)arg1;
- (bool)shouldPromptWhenCarPlaySessionIsActive;
- (bool)shouldPromptWhenPersonalHotspotIsEnabled;
- (bool)supportsWiFiPasswordSharing;
- (void)updateViewsForNetworks:(NSSet *)arg1;
- (bool)userAutoJoinEnabled;

@end
