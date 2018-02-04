/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
 */

@interface ACUIAppInstallCell : PSTableCell {
    UIImageView * _iconView;
    SKUIItemOfferButton * _installButton;
    int  _installState;
    UILabel * _nameLabel;
    UILabel * _publisherLabel;
}

@property (nonatomic) int installState;

+ (id)specifierForAppWithDescription:(id)arg1 target:(id)arg2 action:(SEL)arg3;

- (void).cxx_destruct;
- (id)_createInstallButton;
- (id)_createLabelForAppName:(id)arg1;
- (id)_createLabelForPublisher:(id)arg1;
- (void)_updateInstallButtonWithState:(int)arg1;
- (void)_updateSubviewsWithInstallState:(int)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (int)installState;
- (void)layoutSubviews;
- (void)setInstallState:(int)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
