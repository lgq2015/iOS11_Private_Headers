/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPPortraitConfiguration : NSObject {
    NSMutableDictionary * _parameters;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)getTopicsMultiplierForSource:(id)arg1 andAlgorithm:(id)arg2;
- (double)halfValuePosition;
- (id)init;
- (int)maxNumberOfTopicRecords;
- (int)minNumberOfTopicRecords;
- (double)nonReaderTextWeight;
- (double)portraitAnalyticsSamplingRate;
- (id)portraitVariantName;
- (double)remoteTopicsMultiplier;
- (id)resourceForMappingId:(id)arg1;
- (double)scalingFactorForMappingId:(id)arg1;
- (double)topicsScalingFactor;
- (double)topicsSigmoidPeakValue;
- (double)topicsSigmoidWidth;

@end
