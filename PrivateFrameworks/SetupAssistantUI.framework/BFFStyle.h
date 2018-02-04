/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFStyle : NSObject

+ (id)sharedStyle;

- (struct CGSize { double x1; double x2; })_effectiveSizeForIcon:(id)arg1 inView:(id)arg2;
- (void)applyThemeToAllTableViews;
- (void)applyThemeToLabel:(id)arg1;
- (void)applyThemeToNavigationController:(id)arg1;
- (void)applyThemeToNavigationController:(id)arg1 allowUnderlap:(bool)arg2;
- (void)applyThemeToRemoteUIWebViewController:(id)arg1;
- (void)applyThemeToSectionHeaderLabel:(id)arg1;
- (void)applyThemeToTableCell:(id)arg1;
- (void)applyThemeToTextView:(id)arg1;
- (void)applyThemeToTitleLabel:(id)arg1;
- (id)backgroundColor;
- (double)baselineInsetForHeaderTitle;
- (id)continueButtonWithTitle:(id)arg1 inView:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForHeaderView:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsForTable:(id)arg1;
- (double)headerIconBaselineOffset;
- (double)headerIconBaselineOffsetForView:(id)arg1;
- (double)headerSubheaderBaselineSpacingForView:(id)arg1;
- (double)headerTitleBaselineOffsetForView:(id)arg1 hasIcon:(bool)arg2;
- (double)headerTitleBaselineOffsetForView:(id)arg1 icon:(id)arg2;
- (double)headerTitleBaselineOffsetHasIcon:(bool)arg1;
- (id)headerTitleFont;
- (double)headerYOffsetForIcon:(id)arg1 inView:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })horizontalInsetsForContainingInView:(id)arg1 width:(double)arg2;
- (double)horizontalMarginForView:(id)arg1;
- (double)nonTableHorizontalMargin;
- (double)screenHeaderFooterSideInsetForView:(id)arg1;
- (double)screenHeaderHeightForView:(id)arg1;
- (double)singleLineCellHeightForTable:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForContinueButtonInParent:(id)arg1;
- (id)tableCellFont;
- (double)tallRowHeight;

@end
