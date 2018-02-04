/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlButtonRowView : UIView <HUQuickControlAuxiliaryView> {
    NSArray * _buttonConstraints;
    bool  _isUsingStackedLayout;
    NSMutableArray * _mutableButtonViews;
    long long  _preferredContentAlignment;
}

@property (nonatomic, retain) NSArray *buttonConstraints;
@property (nonatomic, readonly, copy) NSArray *buttonViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasCenteredContent;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isUsingStackedLayout;
@property (nonatomic, retain) NSMutableArray *mutableButtonViews;
@property (nonatomic) long long preferredContentAlignment;
@property (readonly) Class superclass;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_clearButtonConstraints;
- (void)_contentSizeCategoryDidChange;
- (bool)_shouldUseStackedLayout;
- (void)_updateLayoutIfNecessary;
- (void)addButtonView:(id)arg1;
- (id)buttonConstraints;
- (id)buttonViews;
- (void)contentDidChange;
- (bool)hasCenteredContent;
- (id)initWithButtonViews:(id)arg1;
- (void)insertButtonView:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isUsingStackedLayout;
- (id)mutableButtonViews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (long long)preferredContentAlignment;
- (void)removeButtonView:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setButtonConstraints:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsUsingStackedLayout:(bool)arg1;
- (void)setMutableButtonViews:(id)arg1;
- (void)setPreferredContentAlignment:(long long)arg1;
- (void)updateConstraints;

@end
