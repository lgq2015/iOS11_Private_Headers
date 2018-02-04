/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoGlobalAnalyzer : NSObject

- (float)analyzeOverallQuality:(id)arg1 withFpsRate:(float)arg2;
- (float)assetActionScoreFromAnalysis:(id)arg1;
- (float)assetCameraMotionScoreFromAnalysis:(id)arg1;
- (float)assetExpressionScoreFromAnalysis:(id)arg1;
- (float)assetJunkScoreFromAnalysis:(id)arg1;
- (float)assetQualityScoreFromAnalysis:(id)arg1 withFpsRate:(float)arg2;
- (float)assetVoiceScoreFromAnalysis:(id)arg1;
- (float)cameraActivityfromQuality:(float)arg1;
- (int)generateLivePhotoRecommendationForResults:(id)arg1 andPrivateResults:(id)arg2;
- (bool)hasMeaningfulSceneSegment:(id)arg1 withFpsRate:(float)arg2;
- (bool)isJunkTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 basedOnResults:(id)arg2;
- (float)scaleForTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 basedOnFace:(id)arg2;
- (int)setActivityLevel:(id)arg1;
- (float)subjectActivityInTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 fromResults:(id)arg2;

@end
