/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIUtilities : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })absoluteFrameForView:(id)arg1;
+ (id)addAspectRatioConstraintForImageView:(id)arg1;
+ (bool)backgroundColorPrefersWhiteForegroundText:(id)arg1;
+ (id)boldBodyFont;
+ (id)buttonColorForStyle:(unsigned long long)arg1;
+ (id)captionFont;
+ (bool)deviceIsAuthenticated;
+ (bool)deviceSupportsRotation;
+ (void)dispatchAsyncIfNecessary:(id /* block */)arg1;
+ (void)dispatchMainIfNecessary:(id /* block */)arg1;
+ (id)footnoteFont;
+ (id)hyphenatableStringForString:(id)arg1;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 cornersToRound:(unsigned long long)arg3 cornerRadius:(double)arg4;
+ (void)initialize;
+ (bool)isLargeIpad;
+ (bool)isPortrait;
+ (bool)isWideScreen;
+ (id)localizedStringForKey:(id)arg1;
+ (struct CGSize { double x1; double x2; })maxThumbnailSize;
+ (double)onePixelForCurrentScreenResolution;
+ (id)openOptions;
+ (void)openPunchout:(id)arg1;
+ (void)openPunchout:(id)arg1 fromCardSection:(id)arg2 toListener:(id)arg3 triggerEvent:(unsigned long long)arg4;
+ (void)openUserActivity:(id)arg1 applicationBundleIdentifier:(id)arg2;
+ (void)performAnimatableChanges:(id /* block */)arg1;
+ (void)performAnimatableChanges:(id /* block */)arg1 animated:(bool)arg2;
+ (void)performAnimatableChanges:(id /* block */)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
+ (void)performOpenTask:(id /* block */)arg1;
+ (void)requestDeviceUnlockWithSuccessHandler:(id /* block */)arg1;
+ (id)sendFeedbackForPunchout:(id)arg1 toListener:(id)arg2 fromCardSection:(id)arg3 triggerEvent:(unsigned long long)arg4;
+ (double)separatorHeight;
+ (id)shortBodyFont;
+ (id)shortFontForFontStyle:(id)arg1;
+ (id)shortFootnoteFont;
+ (id)shortSubheadBoldFont;
+ (id)shortSubheadFont;
+ (id)shortTitle1Font;
+ (bool)shouldHandleCardSectionEngagement:(id)arg1 feedbackListener:(id)arg2;
+ (double)standardTableCellContentInset;
+ (id)stringForSFRichText:(id)arg1;
+ (id)stringForSFRichTextArray:(id)arg1;
+ (id)textColorForSearchUIStyle:(unsigned long long)arg1;
+ (id)uiColorForSFColor:(id)arg1;
+ (id)vibrantButtonColorForStyle:(unsigned long long)arg1;

@end
