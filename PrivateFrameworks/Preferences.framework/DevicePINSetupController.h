/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface DevicePINSetupController : PSSetupController {
    bool  _allowOptionsButton;
    bool  _success;
}

@property (nonatomic) bool allowOptionsButton;

- (bool)allowOptionsButton;
- (bool)canBeShownFromSuspendedState;
- (id)init;
- (bool)popupStyleIsModal;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setAllowOptionsButton:(bool)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (bool)success;
- (bool)usePopupStyle;

@end
