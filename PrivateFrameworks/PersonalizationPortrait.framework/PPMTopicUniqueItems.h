/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPMTopicUniqueItems : NSObject {
    PETDistributionEventTracker * _tracker;
}

@property (nonatomic, readonly) PETDistributionEventTracker *tracker;

- (void).cxx_destruct;
- (id)init;
- (void)trackEventWithScalar:(double)arg1;
- (id)tracker;

@end
