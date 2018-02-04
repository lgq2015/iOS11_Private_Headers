/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKContinuityPaymentCardSummaryView : UIView {
    UIImageView * _alertView;
    bool  _showsAlert;
    NSLayoutConstraint * _textToAlertConstraint;
    NSLayoutConstraint * _textToTrailingConstraint;
    UIImageView * _thumbnailView;
    UILabel * _valueView;
}

@property (nonatomic) bool showsAlert;
@property (nonatomic, readonly) UIImageView *thumbnailView;
@property (nonatomic, readonly) UILabel *valueView;

- (void).cxx_destruct;
- (void)_createSubviews;
- (void)_prepareImageAndValueConstraints;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setShowsAlert:(bool)arg1;
- (bool)showsAlert;
- (id)thumbnailView;
- (void)updateConstraints;
- (id)valueView;

@end
