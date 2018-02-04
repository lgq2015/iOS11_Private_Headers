/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUIMISDenylistSettingsDetailController : PSListController {
    bool  _reenabled;
}

@property bool reenabled;

- (void)_askForReenableConfirmation;
- (id)_reenableButtonSpecifier;
- (void)_reloadAsync;
- (void)dealloc;
- (id)init;
- (bool)overridden;
- (bool)reenabled;
- (void)setOverride:(id)arg1;
- (void)setReenabled:(bool)arg1;
- (id)specifiers;

@end
