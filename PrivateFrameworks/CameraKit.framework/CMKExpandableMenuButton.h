/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKExpandableMenuButton : UIControl {
    UIView * __headerView;
    NSIndexSet * __hiddenIndexesWhileCollapsed;
    NSMutableIndexSet * __highlightedIndexesWhileCollapsed;
    NSMutableArray * __menuItems;
    <CMKExpandableMenuButtonDelegate> * _expandableMenuDelegate;
    bool  _expanded;
    long long  _expansionOrientation;
    long long  _orientation;
    long long  _selectedIndex;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _tappableEdgeInsets;
}

@property (nonatomic, readonly) UIView *_headerView;
@property (nonatomic, readonly, copy) NSIndexSet *_hiddenIndexesWhileCollapsed;
@property (nonatomic, readonly, copy) NSMutableIndexSet *_highlightedIndexesWhileCollapsed;
@property (nonatomic, readonly) NSMutableArray *_menuItems;
@property (nonatomic) <CMKExpandableMenuButtonDelegate> *expandableMenuDelegate;
@property (getter=isExpanded, nonatomic, readonly) bool expanded;
@property (nonatomic) long long expansionOrientation;
@property (nonatomic) long long orientation;
@property (nonatomic) long long selectedIndex;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } tappableEdgeInsets;

+ (double)expansionDuration;

- (void).cxx_destruct;
- (void)_applyHeaderViewForCurrentExpansionState;
- (void)_applyMenuItemAlphaForCurrentExpansionState;
- (void)_applyMenuItemColorsForCurrentState;
- (void)_applyMenuItemTextAlignmentAndShadowForCurrentOrientation;
- (void)_convertAllSubviewsToProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (id)_headerView;
- (id)_hiddenIndexesWhileCollapsed;
- (id)_highlightedIndexesWhileCollapsed;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalCollapsedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalCollapsedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalExpandedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalExpandedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForHorizontalExpansionOrientation:(bool)arg1 expanded:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutForVerticalCollapsedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForVerticalCollapsedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForVerticalExpandedLandscapeButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForVerticalExpandedPortraitButton:(bool)arg1;
- (struct CGSize { double x1; double x2; })_layoutForVerticalExpandedPortraitButtonApplyToHeaderView:(bool)arg1 applyToSelectedItem:(bool)arg2 applyToOtherViews:(bool)arg3;
- (struct CGSize { double x1; double x2; })_layoutForVerticalExpansionOrientation:(bool)arg1 expanded:(bool)arg2;
- (struct CGSize { double x1; double x2; })_layoutMenuButton:(bool)arg1 expanded:(bool)arg2;
- (id)_menuItems;
- (id)_selectedLabel;
- (void)_updateFromExpansionChangeAnimated:(bool)arg1;
- (void)_updateFromOrientationChangeAnimated:(bool)arg1;
- (void)_updateFromSelectedIndexChange;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRectForFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 expanded:(bool)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (void)collapseMenuAnimated:(bool)arg1;
- (void)completeExpansionToProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)expandMenuAnimated:(bool)arg1;
- (id)expandableMenuDelegate;
- (long long)expansionOrientation;
- (void)finishCollapsingAnimated:(bool)arg1;
- (void)finishExpansionAnimated:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 expanded:(bool)arg2;
- (id)headerView;
- (id)hiddenIndexesWhileCollapsed;
- (id)init;
- (id)initWithExpansionOrientation:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (struct CGSize { double x1; double x2; })intrinsicContentSizeForExpansion:(bool)arg1;
- (bool)isExpanded;
- (void)layoutSubviews;
- (long long)numberOfMenuItems;
- (long long)orientation;
- (void)prepareHeaderViewForExpanding:(bool)arg1;
- (void)reloadData;
- (long long)selectedIndex;
- (void)setExpandableMenuDelegate:(id)arg1;
- (void)setExpansionOrientation:(long long)arg1;
- (void)setHighlighted:(bool)arg1 forIndex:(long long)arg2;
- (void)setOrientation:(long long)arg1;
- (void)setOrientation:(long long)arg1 animated:(bool)arg2;
- (void)setSelectedIndex:(long long)arg1;
- (void)setTappableEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)shouldIgnoreMenuInteraction;
- (void)startCollapsingWithProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)startExpansionWithProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })tappableEdgeInsets;
- (id)titleForMenuItemAtIndex:(long long)arg1;
- (void)updateToContentSize:(id)arg1;
- (bool)wantsSelectedItemToBeVisible;

@end
