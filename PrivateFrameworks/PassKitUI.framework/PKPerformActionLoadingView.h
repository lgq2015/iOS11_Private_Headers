/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPerformActionLoadingView : UIView {
    UILabel * _loadingLabel;
    UIActivityIndicatorView * _spinner;
}

@property (nonatomic, readonly) UILabel *loadingLabel;
@property (nonatomic, readonly) UIActivityIndicatorView *spinner;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)loadingLabel;
- (id)spinner;

@end
