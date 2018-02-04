/* made by EzioChiu.
 */

@protocol WiFiShimDelegate <NSObject>

@optional

- (void)wifiShim_AWDLLinkUp:(bool)arg1;
- (void)wifiShim_BSSIDChangedForInterface:(NSString *)arg1;
- (void)wifiShim_L2NewMetrics:(NSDictionary *)arg1 forInterface:(NSString *)arg2;
- (void)wifiShim_L2TriggerDisconnectEdge:(bool)arg1 forInterface:(NSString *)arg2;
- (void)wifiShim_RSSIChangedTo:(long long)arg1 forInterface:(NSString *)arg2;
- (void)wifiShim_WiFiManagerHasRestarted;

@end
