/* made by EzioChiu.
 */

@protocol TUVideoDeviceControllerProvider <NSObject>

@required

- (void)beginPIPToPreviewAnimation;
- (void)beginPreviewToPIPAnimation;
- (<TUVideoDeviceControllerProviderDelegate> *)delegate;
- (void)endPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (NSArray *)inputDevices;
- (bool)isPreviewRunning;
- (NSString *)localCameraUID;
- (VideoAttributes *)localScreenAttributesForVideoAttributes:(VideoAttributes *)arg1;
- (VideoAttributes *)localVideoAttributes;
- (CALayer *)localVideoLayer:(bool)arg1;
- (void)pausePreview;
- (void)setDelegate:(id <TUVideoDeviceControllerProviderDelegate>)arg1;
- (void)setLocalCameraWithUID:(NSString *)arg1;
- (void)setLocalScreenAttributes:(VideoAttributes *)arg1;
- (void)setLocalVideoAttributes:(VideoAttributes *)arg1;
- (void)setLocalVideoLayer:(CALayer *)arg1 front:(bool)arg2;
- (void)startPreview;
- (void)stopPreview;

@end
