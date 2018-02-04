/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKBacklightController : NSObject {
    BrightnessSystemClient * _brightnessClient;
}

- (void).cxx_destruct;
- (void)_updateBacklightNits:(float)arg1 period:(double)arg2;
- (id)init;
- (void)setBacklightMinimumEnabled:(bool)arg1 animated:(bool)arg2;

@end
