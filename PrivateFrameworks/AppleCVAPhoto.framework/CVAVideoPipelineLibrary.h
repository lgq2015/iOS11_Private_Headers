/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAVideoPipelineLibrary : NSObject

+ (id)colorCubePortraitRequestForPortraitVideoPipeline:(id)arg1 withWithSourceColorPixelBuffer:(struct __CVBuffer { }*)arg2 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg3 cubeData:(id)arg4;
+ (id)disparityPostprocessingVideoPipelineWithProperties:(id)arg1;
+ (id)mattingVideoPipelineWithProperties:(id)arg1;
+ (id)portraitVideoPipelineWithProperties:(id)arg1;
+ (int)prewarm;
+ (id)stageLightPortraitRequestWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 proxyCubeData:(id)arg3 cubeData:(id)arg4;
+ (id)stageLightPortraitRequestWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 proxyCubeData:(id)arg3 cubeData:(id)arg4 vignetteIntensity:(float)arg5 stageLightIntensity:(float)arg6;
+ (id)syntheticDepthOfFieldPortraitRequestWithMattingRequest:(id)arg1 destinationColorPixelBuffer:(struct __CVBuffer { }*)arg2 backgroundColorCube:(id)arg3 foregroundColorCube:(id)arg4 colorCubeIntensity:(float)arg5 simulatedFocalRatio:(float)arg6 sourceColorGain:(float)arg7 sourceColorLux:(float)arg8;
+ (id)videoPipelinePropertiesForDevice:(unsigned long long)arg1;

@end
