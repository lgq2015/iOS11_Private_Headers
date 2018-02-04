/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVLoadingView : UIView {
    _TVImageView * _backgroundImageView;
    UIView * _labelContainer;
    UIView * _loadingTitleLabel;
    bool  _shouldShowSpinner;
    UIView * _spinnerContainer;
    UIActivityIndicatorView * _spinnerView;
}

@property (nonatomic, readonly) _TVImageView *backgroundImageView;
@property (nonatomic, readonly) UIView *labelContainer;
@property (nonatomic) UIView *loadingTitleLabel;
@property (nonatomic) bool shouldShowSpinner;
@property (nonatomic, readonly) UIView *spinnerContainer;
@property (nonatomic, readonly) UIActivityIndicatorView *spinnerView;

- (void).cxx_destruct;
- (void)_showSpinner;
- (id)backgroundImageView;
- (bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelContainer;
- (void)layoutSubviews;
- (id)loadingTitleLabel;
- (void)setLoadingTitleLabel:(id)arg1;
- (void)setShouldShowSpinner:(bool)arg1;
- (bool)shouldShowSpinner;
- (id)spinnerContainer;
- (id)spinnerView;

@end
