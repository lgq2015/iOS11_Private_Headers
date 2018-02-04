/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MaterialKit.framework/MaterialKit
 */

@interface MTCompoundVibrantStyling : MTVibrantStyling

@property (getter=_burnColor, nonatomic, readonly, copy) UIColor *burnColor;
@property (getter=_darkenColor, nonatomic, readonly, copy) UIColor *darkenColor;
@property (getter=_inputReversed, nonatomic, readonly) bool inputReversed;

- (id)_burnColor;
- (id)_darkenColor;
- (bool)_inputReversed;
- (id)_layerConfig;
- (id)blendMode;
- (id)composedFilter;

@end
