/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKEditTableNoPassesView : UIView {
    UIButton * _buttonFindApps;
    UIButton * _buttonScanCode;
    <PKEditTableNoPassesViewDelegate> * _delegate;
    UILabel * _descriptionLabel;
    UILabel * _titleLabel;
}

@property (nonatomic) <PKEditTableNoPassesViewDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (void)findAppsForWalletTapped;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)scanCodeButtonTapped;
- (void)setDelegate:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
