/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVProductInfoView : _TVFocusRedirectView <TVAppTemplateImpressionable> {
    UIView * _defaultFocusView;
    NSArray * _infoSectionViews;
    NSArray * _viewsAboveInfoSection;
    NSArray * _viewsBelowInfoSection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIView *defaultFocusView;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *infoSectionViews;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSArray *viewsAboveInfoSection;
@property (nonatomic, retain) NSArray *viewsBelowInfoSection;

+ (id)productInfoViewWithElement:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (bool)canBecomeFocused;
- (id)defaultFocusView;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)infoSectionViews;
- (void)layoutSubviews;
- (id)preferredFocusEnvironments;
- (void)setDefaultFocusView:(id)arg1;
- (void)setInfoSectionViews:(id)arg1;
- (void)setViewsAboveInfoSection:(id)arg1;
- (void)setViewsBelowInfoSection:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)viewsAboveInfoSection;
- (id)viewsBelowInfoSection;

@end
