/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLAWDLinearRegTrackerMock : PMLProtoBufTracker {
    PMLTrackerMockAdapter * _adapter;
}

@property (readonly) NSArray *trackedFeatureMatrices;
@property (readonly) NSArray *trackedObjectiveFeatures;

+ (id)mockTrackerForPlanId:(struct NSString { Class x1; }*)arg1;

- (void).cxx_destruct;
- (void)clearTrackedMessages;
- (id)initWithAdapter:(id)arg1 modelInfo:(id)arg2;
- (id)initWithModel:(id)arg1;
- (id)trackedFeatureMatrices;
- (id)trackedObjectiveFeatures;

@end
