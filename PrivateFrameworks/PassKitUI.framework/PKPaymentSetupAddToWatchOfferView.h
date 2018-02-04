/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupAddToWatchOfferView : UIView {
    long long  _context;
    UILabel * _instructionLabel;
    UIButton * _openAppButton;
    UIActivityIndicatorView * _openAppSpinner;
    PKPaymentPass * _pass;
    UIImageView * _passImageView;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIImageView * _watchImageView;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly, retain) UILabel *instructionLabel;
@property (nonatomic, readonly, retain) UIButton *openAppButton;
@property (nonatomic, readonly, retain) UIActivityIndicatorView *openAppSpinner;
@property (nonatomic, readonly, retain) PKPaymentPass *pass;
@property (nonatomic, readonly, retain) UIImageView *passImageView;
@property (nonatomic, readonly, retain) UILabel *subtitleLabel;
@property (nonatomic, readonly, retain) UILabel *titleLabel;
@property (nonatomic, readonly, retain) UIImageView *watchImageView;

- (void).cxx_destruct;
- (double)_instructionFontSize;
- (double)_instructionYCoordinate;
- (struct CGSize { double x1; double x2; })_passImageSize;
- (double)_passImageYCoordinate;
- (id)_watchImage;
- (id)_watchImageName;
- (long long)context;
- (void)dealloc;
- (id)initWithPaymentPass:(id)arg1 context:(long long)arg2;
- (id)instructionLabel;
- (void)layoutSubviews;
- (id)openAppButton;
- (id)openAppSpinner;
- (id)pass;
- (id)passImageView;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)watchImageView;

@end
