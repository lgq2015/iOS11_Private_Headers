/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPInterAssetAnalyzer : NSObject

+ (bool)canUseLastFrameOfAsset:(id)arg1 withResources:(id)arg2;
+ (struct CGSize { double x1; double x2; })thumbnailSizeForAsset:(id)arg1 withResources:(id)arg2;

- (int)distanceFromAsset:(id)arg1 toAsset:(id)arg2 distance:(float*)arg3;
- (int)distanceFromFeatureArray:(id)arg1 toFeatureArray:(id)arg2 distance:(float*)arg3;
- (int)generateFeatureForAsset:(id)arg1 withResources:(id)arg2 lastFrame:(bool)arg3 feature:(id*)arg4;
- (int)generateFeatureLastFrame:(id)arg1 feature:(id*)arg2;
- (struct __CVBuffer { }*)getThumbnailForAsset:(id)arg1 withResouces:(id)arg2;
- (id)init;

@end