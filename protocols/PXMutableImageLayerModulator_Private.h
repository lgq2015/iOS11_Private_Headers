/* made by EzioChiu.
 */

@protocol PXMutableImageLayerModulator_Private <PXMutableImageLayerModulator>

@required

- (double)intensity;
- (bool)isDisplayingVideoComplement;
- (bool)isEnabled;
- (void)prepareForReuse;
- (void)setDisplayingVideoComplement:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIntensity:(double)arg1;

@end
