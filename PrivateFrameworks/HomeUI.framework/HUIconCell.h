/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUIconCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {
    UIView * _containerView;
    bool  _disabled;
    NSArray * _dynamicConstraints;
    bool  _hideIcon;
    double  _iconAlpha;
    unsigned long long  _iconDisplayStyle;
    UIColor * _iconForegroundColor;
    bool  _iconForegroundColorFollowsTintColor;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    NSArray * _iconSpacingConstraints;
    UILayoutGuide * _iconSpacingLayoutGuide;
    bool  _iconTintColorFollowsDisabledState;
    HUIconView * _iconView;
    HFItem * _item;
    NSArray * _staticConstraints;
}

@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UILabel *detailTextLabel;
@property (nonatomic) bool disableContinuousIconAnimation;
@property (getter=isDisabled, nonatomic) bool disabled;
@property (nonatomic, retain) NSArray *dynamicConstraints;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideIcon;
@property (nonatomic) double iconAlpha;
@property (nonatomic) unsigned long long iconDisplayStyle;
@property (nonatomic, retain) UIColor *iconForegroundColor;
@property (nonatomic) bool iconForegroundColorFollowsTintColor;
@property (nonatomic) struct CGSize { double x1; double x2; } iconSize;
@property (nonatomic, retain) NSArray *iconSpacingConstraints;
@property (nonatomic, retain) UILayoutGuide *iconSpacingLayoutGuide;
@property (nonatomic) bool iconTintColorFollowsDisabledState;
@property (nonatomic, retain) HUIconView *iconView;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) NSArray *staticConstraints;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *textLabel;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_createIconView;
- (void)_invalidateDynamicConstraints;
- (void)_updateIcon;
- (id)_verticalConstraintsForContentSubview:(id)arg1;
- (id)containerView;
- (bool)disableContinuousIconAnimation;
- (id)dynamicConstraints;
- (bool)hideIcon;
- (double)iconAlpha;
- (unsigned long long)iconDisplayStyle;
- (id)iconForegroundColor;
- (bool)iconForegroundColorFollowsTintColor;
- (struct CGSize { double x1; double x2; })iconSize;
- (id)iconSpacingConstraints;
- (id)iconSpacingLayoutGuide;
- (bool)iconTintColorFollowsDisabledState;
- (id)iconView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isDisabled;
- (id)item;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setContainerView:(id)arg1;
- (void)setDisableContinuousIconAnimation:(bool)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setDynamicConstraints:(id)arg1;
- (void)setHideIcon:(bool)arg1;
- (void)setIconAlpha:(double)arg1;
- (void)setIconDisplayStyle:(unsigned long long)arg1;
- (void)setIconForegroundColor:(id)arg1;
- (void)setIconForegroundColorFollowsTintColor:(bool)arg1;
- (void)setIconSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setIconSpacingConstraints:(id)arg1;
- (void)setIconSpacingLayoutGuide:(id)arg1;
- (void)setIconTintColorFollowsDisabledState:(bool)arg1;
- (void)setIconView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setStaticConstraints:(id)arg1;
- (id)staticConstraints;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;

@end
