/* made by EzioChiu.
 */

@protocol SUKeybagInterfaceObserver <NSObject>

@optional

- (void)keybagInterface:(SUKeybagInterface *)arg1 hasPasscodeSetDidChange:(bool)arg2;
- (void)keybagInterface:(SUKeybagInterface *)arg1 passcodeLockedStateDidChange:(bool)arg2;

@end
