/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentPassTableCell : PSTableCell {
    UIControl * _actionButton;
    UIView * _cardSnapshotView;
    <PKPaymentPassTableCellDelegate> * _delegate;
    UILabel * _mainLabel;
    PKPaymentPass * _pass;
    PKPaymentApplication * _paymentApplication;
    long long  _settingsContext;
    bool  _showAddButton;
    bool  _showState;
    bool  _showSubTitle;
    UIActivityIndicatorView * _spinner;
    UILabel * _subTextLabel;
}

@property (nonatomic, readonly) UIControl *actionButton;
@property (nonatomic) <PKPaymentPassTableCellDelegate> *delegate;
@property (nonatomic, readonly) UILabel *mainLabel;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic) bool showAddButton;
@property (nonatomic) bool showSubTitle;
@property (nonatomic, readonly) UILabel *subTextLabel;

+ (double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(bool)arg2;
+ (id)subTitleFont;
+ (id)titleFont;

- (void).cxx_destruct;
- (void)_addButtonPressed:(id)arg1;
- (id)_stringForPassState:(unsigned long long)arg1;
- (void)_verifyButtonPressed:(id)arg1;
- (id)actionButton;
- (void)dealloc;
- (id)delegate;
- (void)disableAddButton;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)pass;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)setDelegate:(id)arg1;
- (void)setFelicaProperties:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setShowAddButton:(bool)arg1;
- (void)setShowSubTitle:(bool)arg1;
- (void)showActivitySpinner:(bool)arg1;
- (bool)showAddButton;
- (bool)showSubTitle;
- (id)subTextLabel;
- (void)tintColorDidChange;

@end
