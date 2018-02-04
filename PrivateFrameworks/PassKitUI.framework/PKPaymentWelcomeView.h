/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentWelcomeView : PKWelcomeView

+ (double)bottomMargin;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })headerImageMargins;
+ (struct CGSize { double x1; double x2; })headerImageSize;
+ (bool)isAvailable;

- (void)_addCardPressed;
- (id)init;

@end
