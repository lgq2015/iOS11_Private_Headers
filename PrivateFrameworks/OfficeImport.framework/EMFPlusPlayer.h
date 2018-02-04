/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMFPlusPlayer : NSObject {
    MFPEffect * mEffect;
    MFPGraphics * mGraphics;
    NSMutableData * mLargeData;
    unsigned short  mLargeFlags;
    unsigned int  mLargeSize;
    int  mLargeType;
    EMFPlayer * mOwner;
}

+ (float)firstTabPosPastPos:(float)arg1 stringFormat:(id)arg2 isExplicit:(bool*)arg3;
+ (int)serializableObjectTypeForGUID:(id)arg1;

- (id)canvasInWorldCoordinates;
- (void)dealloc;
- (id)effect;
- (id)initWithOwner:(id)arg1 canvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (int)play:(const char *)arg1 in_size:(unsigned int)arg2;
- (int)playBeginContainer:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playBeginContainerNoParams:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playBlurEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playBrightnessContrastEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playBrush:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playClear:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playColorBalanceEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playColorCurveEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playColorLUTEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playColorMatrixEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playCustomLineCap:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playDrawArc:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawBeziers:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawClosedCurve:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawCurve:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawDriverString:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawEllipse:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawImage:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawImagePoints:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawLines:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawPath:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawPie:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawRects:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playDrawString:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playEndContainer:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playFillClosedCurve:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playFillEllipse:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playFillPath:(id)arg1 in_pData:(const char *)arg2 in_size:(unsigned int)arg3 in_flags:(unsigned short)arg4;
- (int)playFillPath:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playFillPie:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playFillPolygon:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playFillRects:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playFont:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playGetDC:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playGraphics:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playHeader:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playHueSaturationLightnessEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playImage:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playImageAttributes:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playLevelsEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playMultiplyWorldTransform:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playObject:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playOffsetClip:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playPath:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playPen:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playRecord:(int)arg1 pData:(const char *)arg2 dataSize:(unsigned int)arg3 flags:(unsigned short)arg4;
- (int)playRedEyeCorrectionEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playRegion:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playResetClip:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playResetWorldTransform:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playRestore:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playRotateWorldTransform:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSave:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playScaleWorldTransform:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSerializableObject:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetAntiAliasMode:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetClipPath:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetClipRect:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetClipRegion:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetCompositingMode:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetCompositingQuality:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetInterpolationMode:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetPageTransform:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetPixelOffsetMode:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetRenderingOrigin:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetTextContrast:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetTextRenderingHint:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSetWorldTransform:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playSharpenEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playStringFormat:(const char *)arg1 in_size:(unsigned int)arg2 objectIndex:(unsigned char)arg3;
- (int)playStrokePath:(id)arg1 in_pData:(const char *)arg2 in_size:(unsigned int)arg3 in_flags:(unsigned short)arg4;
- (int)playTintEffectWithData:(const char *)arg1 size:(unsigned int)arg2;
- (int)playTranslateWorldTransform:(const char *)arg1 in_size:(unsigned int)arg2 in_flags:(unsigned short)arg3;
- (int)playUnknown:(const char *)arg1 in_size:(unsigned int)arg2 in_type:(int)arg3 in_flags:(unsigned short)arg4;
- (int)readBrush:(const char *)arg1 in_size:(unsigned int)arg2 returnBrush:(id*)arg3;
- (int)readGradientBrush:(id)arg1 from:(const char **)arg2 brushFlags:(unsigned int)arg3;
- (int)readImage:(const char *)arg1 in_size:(unsigned int)arg2 pImage:(id*)arg3;
- (int)readPath:(const char *)arg1 in_size:(unsigned int)arg2 returnPath:(id*)arg3;
- (void)resetLargeRecord;
- (int)setClipPath:(id)arg1 flags:(unsigned short)arg2;
- (void)setEffect:(id)arg1;

@end
