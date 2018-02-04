/* made by EzioChiu.
 */

@protocol TUMomentsControllerXPCClient <NSObject>

@required

- (oneway void)didReceiveLocallyRequestedMomentDescriptor:(TUMomentDescriptor *)arg1;
- (oneway void)didUpdateCapabilities:(TUMomentsCapabilities *)arg1 forVideoStreamToken:(long long)arg2;
- (oneway void)willCaptureRemoteRequest;

@end
