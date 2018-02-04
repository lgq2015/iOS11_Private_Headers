/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationListSectionHeaderView : UICollectionReusableView <NCNotificationListClearButtonDelegate> {
    NSString * _backgroundGroupName;
    NCNotificationListClearButton * _clearButton;
    <NCNotificationListSectionHeaderViewDelegate> * _delegate;
    double  _overrideAlpha;
    struct CGPoint { 
        double x; 
        double y; 
    }  _overrideCenter;
    NSString * _sectionIdentifier;
    bool  _shouldOverrideForReveal;
    SBUILegibilityLabel * _titleLabel;
}

@property (nonatomic, copy) NSString *backgroundGroupName;
@property (nonatomic, retain) NCNotificationListClearButton *clearButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <NCNotificationListSectionHeaderViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double overrideAlpha;
@property (nonatomic) struct CGPoint { double x1; double x2; } overrideCenter;
@property (nonatomic, copy) NSString *sectionIdentifier;
@property (nonatomic) bool shouldOverrideForReveal;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBUILegibilityLabel *titleLabel;

+ (id)_labelFont;
+ (struct CGSize { double x1; double x2; })_labelSizeWithWidth:(double)arg1 title:(id)arg2;
+ (double)headerHeightWithWidth:(double)arg1 title:(id)arg2;

- (void).cxx_destruct;
- (void)_clearButtonAction:(id)arg1;
- (long long)_graphicsQuality;
- (void)_layoutClearButtonWithScale:(double)arg1;
- (void)_layoutTitleLabelWithScale:(double)arg1;
- (void)_observeContentSizeChange;
- (void)_resetClearButtonStateAnimated:(bool)arg1;
- (void)_resetRevealOverrides;
- (double)_titleLabelBaselineOffset;
- (void)applyLayoutAttributes:(id)arg1;
- (id)backgroundGroupName;
- (id)clearButton;
- (void)clearButtonViewDidDismissForceTouchView:(id)arg1;
- (void)clearButtonViewDidPresentForceTouchView:(id)arg1;
- (void)configureClearButton;
- (void)contentSizeDidChange;
- (void)dealloc;
- (id)delegate;
- (bool)dismissModalFullScreenIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)overrideAlpha;
- (struct CGPoint { double x1; double x2; })overrideCenter;
- (void)prepareForReuse;
- (void)resetAnimated:(bool)arg1;
- (id)sectionIdentifier;
- (void)setBackgroundGroupName:(id)arg1;
- (void)setClearButton:(id)arg1;
- (void)setClearButtonVisible:(bool)arg1 animated:(bool)arg2;
- (void)setDelegate:(id)arg1;
- (void)setOverrideAlpha:(double)arg1;
- (void)setOverrideCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setShouldOverrideForReveal:(bool)arg1;
- (void)setTitle:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)setTitleLabel:(id)arg1;
- (bool)shouldOverrideForReveal;
- (id)titleLabel;
- (void)updateForLegibilitySettings:(id)arg1;

@end
