/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassBoardingPassFrontFaceView : PKPassFrontFaceView {
    UIImageView * _footerImageView;
    UIImageView * _transitImageView;
}

- (void).cxx_destruct;
- (id)_transitGlyphForTransitType:(long long)arg1;
- (void)createBodyContentViews;
- (void)layoutSubviews;
- (void)setShowsBarcodeView:(bool)arg1 animated:(bool)arg2;
- (id)shortFaceTemplate;
- (id)shortScrunchedFaceTemplate;
- (id)tallFaceTemplate;

@end
