/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVViewFactory : NSObject

+ (id)_organizerViewWithElement:(id)arg1 elements:(id)arg2 existingView:(id)arg3;
+ (id)imageStackViewWithElement:(id)arg1 existingView:(id)arg2;
+ (id)imageViewWithElement:(id)arg1 existingView:(id)arg2;
+ (id)organizerViewWithElements:(id)arg1 existingView:(id)arg2;

- (id)_activityIndicatorViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_buttonForElement:(id)arg1 existingView:(id)arg2;
- (id)_buttonLockupForElement:(id)arg1 existingView:(id)arg2;
- (id)_cardViewFromElement:(id)arg1 existingView:(id)arg2;
- (id)_headerColumnViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_imageViewForBadgeElement:(id)arg1 existingView:(id)arg2;
- (id)_imageViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_labelViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_listItemLockupWithElement:(id)arg1 existingView:(id)arg2;
- (id)_loadingImageViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_monogramViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_organizerViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_popoverViewWithElement:(id)arg1 existingView:(id)arg2;
- (id)_progressBarFromElement:(id)arg1 existingView:(id)arg2;
- (id)_ratingBadgeFromElement:(id)arg1 existingView:(id)arg2;
- (void)_registerViewCreators;
- (id)_rowViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_seasonsBadgeWithElement:(id)arg1 existingView:(id)arg2;
- (id)_segmentedControlForElement:(id)arg1 existingView:(id)arg2;
- (id)_separatorViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_textBoxViewForElement:(id)arg1 existingView:(id)arg2;
- (id)_textViewWithElement:(id)arg1 existingView:(id)arg2;
- (id)_zoomableTextViewFromElement:(id)arg1 alwaysFocusable:(bool)arg2 existingView:(id)arg3;
- (id)init;

@end
