/* made by EzioChiu.
 */

@protocol AXMFeatureTrackingObserver <NSObject>

@required

- (void)visionEngine:(AXMVisionEngine *)arg1 didBeginTrackingFeature:(AXMFeatureTracker *)arg2 appliedOrientation:(NSNumber *)arg3;
- (void)visionEngine:(AXMVisionEngine *)arg1 didFinishTrackingFeature:(AXMFeatureTracker *)arg2 appliedOrientation:(NSNumber *)arg3;
- (void)visionEngine:(AXMVisionEngine *)arg1 trackingFeatureLocationDidChange:(AXMFeatureTracker *)arg2 appliedOrientation:(NSNumber *)arg3;

@end
