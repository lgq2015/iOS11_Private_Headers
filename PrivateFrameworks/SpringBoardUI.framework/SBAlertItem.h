/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBAlertItem : NSObject <BSDescriptionProviding> {
    _SBAlertController * _alertController;
    bool  _allowInCar;
    bool  _allowInSetup;
    bool  _allowMessageInCar;
    NSArray * _allowedBundleIDs;
    NSString * _attachmentImagePath;
    bool  _didEverActivate;
    bool  _didEverDeactivate;
    bool  _didPlayPresentationSound;
    NSString * _iconImagePath;
    bool  _ignoreIfAlreadyDisplaying;
    bool  _pendInSetupIfNotAllowed;
    bool  _pendWhileKeyBagLocked;
    bool  _presented;
}

@property (nonatomic) bool allowInCar;
@property (nonatomic) bool allowInSetup;
@property (nonatomic) bool allowMessageInCar;
@property (nonatomic, retain) NSArray *allowedBundleIDs;
@property (getter=_attachmentImagePath, nonatomic, retain) NSString *attachmentImagePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_iconImagePath, nonatomic, retain) NSString *iconImagePath;
@property (nonatomic) bool ignoreIfAlreadyDisplaying;
@property (nonatomic) bool pendInSetupIfNotAllowed;
@property (nonatomic) bool pendWhileKeyBagLocked;
@property (getter=_isPresented, setter=_setPresented:, nonatomic) bool presented;
@property (readonly) Class superclass;

+ (id)_alertItemsController;
+ (void)activateAlertItem:(id)arg1;

- (void).cxx_destruct;
- (id)_alertController;
- (id)_attachmentImage;
- (id)_attachmentImagePath;
- (void)_clearAlertController;
- (void)_deactivationCompleted;
- (bool)_didEverActivate;
- (bool)_displayActionButtonOnLockScreen;
- (bool)_hasActiveKeyboardOnScreen;
- (id)_iconImage;
- (id)_iconImagePath;
- (bool)_isPresented;
- (void)_noteVolumeOrLockPressed;
- (id)_prepareNewAlertControllerWithLockedState:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)_publicDescription;
- (void)_setPresented:(bool)arg1;
- (id)alertController;
- (void)alertItemDidAppear;
- (void)alertItemDidDisappear;
- (int)alertPriority;
- (bool)allowInCar;
- (bool)allowInLoginWindow;
- (bool)allowInSetup;
- (bool)allowLockScreenDismissal;
- (bool)allowMenuButtonDismissal;
- (bool)allowMessageInCar;
- (id)allowedBundleIDs;
- (bool)behavesSuperModally;
- (void)buttonDismissed;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (void)deactivate;
- (void)deactivateForButton;
- (void)deactivateForReason:(int)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)didActivate;
- (void)didDeactivateForReason:(int)arg1;
- (void)didFailToActivate;
- (bool)didPlayPresentationSound;
- (void)dismiss;
- (void)dismiss:(int)arg1;
- (bool)dismissOnLock;
- (bool)dismissesOverlaysOnLockScreen;
- (void)doCleanupAfterDeactivationAnimation;
- (bool)forcesModalAlertAppearance;
- (bool)ignoreIfAlreadyDisplaying;
- (id)init;
- (id)lockLabel;
- (bool)pendInSetupIfNotAllowed;
- (bool)pendWhileKeyBagLocked;
- (void)performUnlockAction;
- (void)playPresentationSound;
- (bool)reappearsAfterLock;
- (bool)reappearsAfterUnlock;
- (void)setAllowInCar:(bool)arg1;
- (void)setAllowInSetup:(bool)arg1;
- (void)setAllowMessageInCar:(bool)arg1;
- (void)setAllowedBundleIDs:(id)arg1;
- (void)setAttachmentImagePath:(id)arg1;
- (void)setIconImagePath:(id)arg1;
- (void)setIgnoreIfAlreadyDisplaying:(bool)arg1;
- (void)setPendInSetupIfNotAllowed:(bool)arg1;
- (void)setPendWhileKeyBagLocked:(bool)arg1;
- (id)shortLockLabel;
- (bool)shouldShowInEmergencyCall;
- (bool)shouldShowInLockScreen;
- (id)sound;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)undimsScreen;
- (bool)unlocksScreen;
- (void)willActivate;
- (void)willDeactivateForReason:(int)arg1;
- (void)willRelockForButtonPress:(bool)arg1;

@end
