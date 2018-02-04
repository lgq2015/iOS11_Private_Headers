/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AERoundedCornerButton : UIControl {
    long long  __buttonType;
    UIImageView * __imageView;
    UILabel * __label;
    long long  __layoutStyle;
}

@property (nonatomic, readonly) long long _buttonType;
@property (setter=_setImageView:, nonatomic, retain) UIImageView *_imageView;
@property (setter=_setLabel:, nonatomic, retain) UILabel *_label;
@property (setter=_setLayoutStyle:, nonatomic) long long _layoutStyle;

+ (id)roundedCornerButtonWithStyle:(long long)arg1 buttonType:(long long)arg2;

- (void).cxx_destruct;
- (long long)_buttonType;
- (void)_commonAERoundedCornerButtonInitializationWithStyle:(long long)arg1 buttonType:(long long)arg2;
- (id)_imageView;
- (double)_interpolatedGlyphHorizontalInset;
- (double)_interpolatedGlyphTopInset;
- (id)_label;
- (long long)_layoutStyle;
- (void)_setImageView:(id)arg1;
- (void)_setLabel:(id)arg1;
- (void)_setLayoutStyle:(long long)arg1;
- (void)layoutSubviews;

@end
