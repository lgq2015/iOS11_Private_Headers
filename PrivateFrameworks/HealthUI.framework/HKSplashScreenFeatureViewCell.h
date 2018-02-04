/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSplashScreenFeatureViewCell : UITableViewCell {
    double  _cellPadding;
    NSString * _featureDescription;
    UILabel * _fullDescriptionLabel;
    UIImage * _icon;
    NSLayoutConstraint * _iconTopConstraint;
    UIImageView * _itemIconView;
    HKSplashScreenItem * _splashScreenItem;
    NSString * _title;
}

@property (readonly) double cellPadding;
@property (nonatomic, retain) NSString *featureDescription;
@property (nonatomic, retain) UILabel *fullDescriptionLabel;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic, retain) NSLayoutConstraint *iconTopConstraint;
@property (nonatomic, retain) UIImageView *itemIconView;
@property (nonatomic, retain) HKSplashScreenItem *splashScreenItem;
@property (nonatomic, retain) NSString *title;

+ (id)_descriptionFont;
+ (id)_titleFont;
+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (double)cellPadding;
- (void)createSubviews;
- (id)featureDescription;
- (id)firstBaselineAnchor;
- (id)fullDescriptionLabel;
- (id)icon;
- (id)iconTopConstraint;
- (id)itemIconView;
- (id)lastBaselineAnchor;
- (void)setFeatureDescription:(id)arg1;
- (void)setFullDescriptionLabel:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 title:(id)arg2 description:(id)arg3;
- (void)setIconTopConstraint:(id)arg1;
- (void)setItemIconView:(id)arg1;
- (void)setSplashScreenItem:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)splashScreenItem;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForFontOrTextChange;

@end
