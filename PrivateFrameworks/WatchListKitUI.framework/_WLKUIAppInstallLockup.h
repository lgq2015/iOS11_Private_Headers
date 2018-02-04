/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUIAppInstallLockup : UIView {
    NSString * _ageRating;
    _WLKUITextBadge * _ageRatingBadge;
    UILabel * _ageRatingLabel;
    bool  _canFocus;
    UIStackView * _containerStack;
    NSString * _iAP;
    UILabel * _iAPLabel;
    UIImage * _icon;
    _WLKUIAppInstallView * _iconView;
    _WLKUIAppInstallView * _installView;
    UIStackView * _metadataStackView;
    NSString * _name;
    UIStackView * _nameAndRatingStack;
    UILabel * _nameLabel;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
}

@property (nonatomic, copy) NSString *ageRating;
@property (nonatomic, retain) _WLKUITextBadge *ageRatingBadge;
@property (nonatomic, retain) UILabel *ageRatingLabel;
@property (nonatomic) bool canFocus;
@property (nonatomic, copy) NSString *iAP;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) _WLKUIAppInstallView *installView;
@property (nonatomic, retain) UIStackView *metadataStackView;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *subtitle;

- (void).cxx_destruct;
- (void)_configureAgeRatingBadge;
- (void)_configureLabels;
- (void)_layoutForIos;
- (void)_layoutForTvos;
- (id)ageRating;
- (id)ageRatingBadge;
- (id)ageRatingLabel;
- (bool)canBecomeFocused;
- (bool)canFocus;
- (id)iAP;
- (id)icon;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)installView;
- (id)metadataStackView;
- (id)name;
- (void)setAgeRating:(id)arg1;
- (void)setAgeRatingBadge:(id)arg1;
- (void)setAgeRatingLabel:(id)arg1;
- (void)setCanFocus:(bool)arg1;
- (void)setIAP:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setInstallView:(id)arg1;
- (void)setMetadataStackView:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (id)subtitle;

@end
