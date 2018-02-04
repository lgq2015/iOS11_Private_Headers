/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMFeatureTrackingFeedbackGenerator : AXMFeedbackGenerator <AXMFeatureTrackingObserver> {
    AXMVisionEngine * _engine;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _queue_lastAnnouncedNumberOfFaces;
    NSString * _queue_lastSpokenModelClassifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) AXMVisionEngine *engine;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_generateFeedbackForCurrentModelClassifier;
- (void)_queue_generateFeedbackForCurrentNumberOfFaces;
- (void)didDisableFeedback;
- (void)didEnableFeedback;
- (id)engine;
- (id)initWithEngine:(id)arg1 outputManager:(id)arg2;
- (void)setEngine:(id)arg1;
- (void)visionEngine:(id)arg1 didBeginTrackingFeature:(id)arg2 appliedOrientation:(id)arg3;
- (void)visionEngine:(id)arg1 didFinishTrackingFeature:(id)arg2 appliedOrientation:(id)arg3;
- (void)visionEngine:(id)arg1 trackingFeatureLocationDidChange:(id)arg2 appliedOrientation:(id)arg3;

@end
