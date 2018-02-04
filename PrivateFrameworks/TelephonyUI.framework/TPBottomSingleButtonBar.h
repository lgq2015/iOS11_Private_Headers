/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPBottomSingleButtonBar : TPBottomBar {
    TPButton * _button;
    id  _delegate;
}

+ (id)_backgroundImage;

- (void).cxx_destruct;
- (id)button;
- (double)buttonWidth;
- (void)setButton:(id)arg1 andStyle:(bool)arg2;

@end
