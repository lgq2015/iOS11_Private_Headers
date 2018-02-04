/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentVerificationView : PKPassFooterContentView <PKPaymentVerificationControllerDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    UIButton * _alternateButton;
    UILabel * _bodyLabel;
    UIView * _bottomRule;
    PKContinuousButton * _button;
    PKPaymentVerificationController * _controller;
    UILabel * _titleLabel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activityIndicator;
- (id)_alternateButton;
- (id)_bodyLabel;
- (id)_bottomRule;
- (id)_button;
- (id)_titleLabel;
- (void)_updateButton;
- (void)dealloc;
- (void)didChangeVerificationPresentation;
- (id)initWithPass:(id)arg1 passView:(id)arg2;
- (void)layoutSubviews;
- (void)presentVerificationViewController:(id)arg1 animated:(bool)arg2;

@end
