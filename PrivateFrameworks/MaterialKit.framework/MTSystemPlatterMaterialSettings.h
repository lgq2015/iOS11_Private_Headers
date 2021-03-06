/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTSystemPlatterMaterialSettings : MTSystemMaterialSettings <MTMaterialOverlaySettings> {
    double  _primaryOverlayTintAlpha;
    double  _secondaryOverlayTintAlpha;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double primaryOverlayTintAlpha;
@property (nonatomic, readonly, copy) UIColor *primaryOverlayTintColor;
@property (nonatomic) double secondaryOverlayTintAlpha;
@property (nonatomic, readonly, copy) UIColor *secondaryOverlayTintColor;
@property (readonly) Class superclass;

+ (id)sharedMaterialSettings;

- (double)primaryOverlayTintAlpha;
- (id)primaryOverlayTintColor;
- (double)secondaryOverlayTintAlpha;
- (id)secondaryOverlayTintColor;
- (void)setPrimaryOverlayTintAlpha:(double)arg1;
- (void)setSecondaryOverlayTintAlpha:(double)arg1;
- (Class)vibrantStylingProviderClass;

@end
