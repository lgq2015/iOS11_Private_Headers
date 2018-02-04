/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKAnalogUtilities : NSObject

+ (id)artShader;
+ (id)circularMaskShader;
+ (void)colorizeLabels:(id)arg1 color:(id)arg2;
+ (void)fadeNodes:(id)arg1 alpha:(double)arg2 except:(id)arg3;
+ (id)labelsForFaceStyle:(long long)arg1 count:(unsigned int)arg2 start:(unsigned int)arg3 multiple:(unsigned int)arg4 repeat:(unsigned int)arg5 fontSize:(double)arg6 radius:(double)arg7 paddedWithZeroes:(bool)arg8;
+ (id)labelsWithCount:(unsigned int)arg1 start:(unsigned int)arg2 multiple:(unsigned int)arg3 repeat:(unsigned int)arg4 font:(long long)arg5 fontSize:(double)arg6 center:(struct CGPoint { double x1; double x2; })arg7 radius:(double)arg8 paddedWithZeros:(bool)arg9 filter:(bool)arg10;
+ (void)preloadTextures;
+ (void)scaleNodes:(id)arg1 scale:(double)arg2 andResetNodesAtIndices:(id)arg3;
+ (struct CGSize { double x1; double x2; })sceneSize;
+ (bool)shouldPreloadTextures;
+ (void)updateNodes:(id)arg1 offset:(unsigned long long)arg2 center:(struct CGPoint { double x1; double x2; })arg3 radius:(double)arg4 angleMultiplier:(double)arg5 scale:(double)arg6 rotate:(bool)arg7 round:(bool)arg8;

@end
