/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLRetouchSaturationLayer : BLRetouchEffectLayer {
    float  _saturation;
}

@property (nonatomic) float saturation;

+ (id)layerWithSaturation:(float)arg1;

- (struct CGContext { }*)newContextWithEffect:(struct CGContext { }*)arg1;
- (float)saturation;
- (void)setSaturation:(float)arg1;

@end
