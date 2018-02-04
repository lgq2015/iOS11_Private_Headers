/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFDashBoardViewMetrics : NSObject

+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cachedGlyphInsetsForString:(id)arg1 withFont:(id)arg2;
+ (double)_dateTimeMinXForReducedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPage:(unsigned long long)arg2;
+ (bool)_isPortrait;
+ (double)_padSpecificInsets:(struct SBFDashBoardPadPageInsets { struct SBFDashBoardOrientationLeadingInsets { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct SBFDashBoardOrientationLeadingInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct SBFDashBoardOrientationLeadingInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; })arg1 leading:(bool)arg2;
+ (double)_padSpecificValueForDevice:(struct SBFDashBoardOrientationLeadingInsets { double x1; double x2; double x3; double x4; })arg1 leading:(bool)arg2;
+ (double)_padSpecificValueJ99:(double)arg1 otherPad:(double)arg2;
+ (double)_phoneSpecificValueN56:(double)arg1 n61:(double)arg2 n69:(double)arg3;
+ (double)_phoneSpecificValueN56:(double)arg1 n61:(double)arg2 n69:(double)arg3 d22:(double)arg4;
+ (bool)_presentsListBelowDateTime;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_reducedPageBoundsFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forPage:(unsigned long long)arg2;
+ (double)dateBaselineToListY;
+ (id)dateFont;
+ (double)dateOnlyLabelToLunarDateLabelBaselineDifferenceY;
+ (id)dateOnlyLunarDateFont;
+ (unsigned long long)dateTimeLayoutForPage:(unsigned long long)arg1;
+ (bool)layoutCentersContent:(unsigned long long)arg1;
+ (bool)layoutUsesMargin:(unsigned long long)arg1;
+ (double)listInsetXForPage:(unsigned long long)arg1;
+ (double)listInsetXForPage:(unsigned long long)arg1 leading:(bool)arg2;
+ (unsigned long long)listLayoutForPage:(unsigned long long)arg1;
+ (double)listMinYForPage:(unsigned long long)arg1;
+ (bool)listScrollsDateTime;
+ (double)listWidthForPage:(unsigned long long)arg1;
+ (double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2;
+ (double)searchBarWidth;
+ (double)searchClippingLineMaxY;
+ (double)singleLineDateViewBaselineDifferenceY;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })suggestedContentInsetsForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })suggestedContentInsetsForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 scrollsDateTime:(bool)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForCallToActionLabel:(id)arg1 yOffset:(double)arg2 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForDateTimeViewInScreenCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 centeredX:(bool)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForListForPage:(unsigned long long)arg1 pageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3 scrollsDateTime:(bool)arg4;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForMediaArtworkForControlsFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 bottomInset:(double)arg2 inPageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForMediaControlsForPageBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })suggestedFrameForStatusView:(id)arg1 inView:(id)arg2 withInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
+ (double)timeLabelBaselineY;
+ (double)timeLabelScrollPercentForPage:(unsigned long long)arg1;
+ (double)timeLabelToLunarDateLabelDifferenceY;
+ (double)timeLabelToSubtitleLabelDifferenceY;
+ (double)timeSubtitleBaselineY;
+ (double)timeToListInsetXforPage:(unsigned long long)arg1;
+ (double)timeToSubtitleLabelBaselineDifferenceY;

@end
