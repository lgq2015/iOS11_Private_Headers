/* made by EzioChiu.
 */

@protocol NACIDSClientDelegate <NSObject>

@required

- (void)client:(NACIDSClient *)arg1 EULimit:(float)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 audioRoutes:(NSArray *)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 hapticIntensityDidChange:(float)arg2;
- (void)client:(NACIDSClient *)arg1 mutedState:(bool)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 prominentHapticStateDidChange:(bool)arg2;
- (void)client:(NACIDSClient *)arg1 routeObservationCancelledForCategory:(NSString *)arg2;
- (void)client:(NACIDSClient *)arg1 systemMutedStateDidChange:(bool)arg2;
- (void)client:(NACIDSClient *)arg1 volumeControlAvailable:(bool)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 volumeValue:(float)arg2 didChangeForCategory:(NSString *)arg3;
- (void)client:(NACIDSClient *)arg1 volumeWarningEnabled:(bool)arg2 didChangeForCategory:(NSString *)arg3;
- (void)clientVolumeObservationCancelled:(NACIDSClient *)arg1;

@end
