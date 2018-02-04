/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTickNodeFactory : NSObject

+ (id)_shaderCache;
+ (id)_shaderWithTickWidth:(double)arg1 filterWidth:(double)arg2;
+ (id)_tickTexture;
+ (void)colorizeTicks:(id)arg1 baseColor:(id)arg2 accentColor:(id)arg3 baseAlpha:(double)arg4 accentAlpha:(double)arg5 accentModulo:(long long)arg6;
+ (id)imagesDictionary;
+ (void)layoutNodes:(id)arg1 offset:(unsigned long long)arg2 center:(struct CGPoint { double x1; double x2; })arg3 radius:(double)arg4 angleMultiplier:(double)arg5 scale:(double)arg6 rotate:(bool)arg7 round:(bool)arg8;
+ (void)setBackgroundColor:(id)arg1 onTicks:(id)arg2;
+ (id)textureAtlas;
+ (id)ticks:(unsigned int)arg1 center:(struct CGPoint { double x1; double x2; })arg2 radius:(double)arg3 color1:(id)arg4 color2:(id)arg5 smallSize:(struct CGSize { double x1; double x2; })arg6 largeSize:(struct CGSize { double x1; double x2; })arg7 smallFilterWidth:(double)arg8 largeFilterWidth:(double)arg9 l1mod:(unsigned int)arg10 l2mod:(unsigned int)arg11;

@end
