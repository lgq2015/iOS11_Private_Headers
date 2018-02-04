/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMFeatureTrackingManager : NSObject {
    <AXMFeatureTrackingManagerDelegate> * _delegate;
    double  _maximumDistanceThreshold;
    double  _maximumSizeThreshold;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_trackedFeatureContainers;
}

@property (nonatomic) <AXMFeatureTrackingManagerDelegate> *delegate;
@property (nonatomic) double maximumDistanceThreshold;
@property (nonatomic) double maximumSizeThreshold;

- (void).cxx_destruct;
- (id)_queue_trackerContainerForFeature:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 targetQueue:(id)arg2;
- (double)maximumDistanceThreshold;
- (double)maximumSizeThreshold;
- (void)processResult:(id)arg1;
- (void)queue_processResult:(id)arg1;
- (id)queue_trackedFaces;
- (id)queue_trackedFeatures;
- (id)queue_trackedModelClassifiers;
- (id)queue_trackedRectangles;
- (id)queue_trackedText;
- (void)setDelegate:(id)arg1;
- (void)setMaximumDistanceThreshold:(double)arg1;
- (void)setMaximumSizeThreshold:(double)arg1;
- (id)trackedFaces;
- (id)trackedFeatures;
- (id)trackedModelClassifiers;
- (id)trackedRectangles;
- (id)trackedText;

@end
