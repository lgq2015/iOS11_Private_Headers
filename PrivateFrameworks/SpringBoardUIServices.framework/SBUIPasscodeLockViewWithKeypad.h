/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIPasscodeLockViewWithKeypad : SBUIPasscodeLockViewBase <SBUIPasscodeEntryFieldDelegate, SBUIPasscodeLockNumberPadDelegate> {
    bool  _hasPerformedLayoutOnce;
    NSString * _lastCharacterBeforeBackspace;
    SBUIPasscodeLockNumberPad * _numberPad;
    UILabel * _statusSubtitleView;
    UILabel * _statusTitleView;
    bool  _undoInputOnTouchCancellation;
    bool  _useLightStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastCharacterBeforeBackspace;
@property (nonatomic, retain) UILabel *statusSubtitleView;
@property (nonatomic, retain) UILabel *statusTitleView;
@property (readonly) Class superclass;
@property (getter=_undoInputOnTouchCancellation, setter=_setUndoInputOnTouchCancellation:, nonatomic) bool undoInputOnTouchCancellation;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_defaultEntryFieldPosition;
- (double)_entryFieldBottomYDistanceFromNumberPadTopButton;
- (bool)_includesStatusView;
- (void)_layoutEntryField;
- (void)_layoutStatusView;
- (id)_newEntryField;
- (id)_newStatusSubtitleView;
- (id)_newStatusTitleView;
- (void)_noteBackspaceHit;
- (void)_noteKeyUp:(id)arg1;
- (void)_noteStringEntered:(id)arg1 eligibleForPlayingSounds:(bool)arg2;
- (void)_notifyDelegatePasscodeCancelled;
- (void)_notifyDelegatePasscodeEntered;
- (id)_numberPad;
- (double)_numberPadOffsetFromTopOfScreen;
- (id)_numericEntryFieldIfExists;
- (double)_offsetForCenteringTitleAndEntryFieldFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withTopYvalue:(double)arg2 bottomYvalue:(double)arg3;
- (void)_setHasInput:(bool)arg1;
- (void)_setUndoInputOnTouchCancellation:(bool)arg1;
- (id)_statusSubtitleView;
- (id)_statusSubtitleViewTitleFont;
- (id)_statusTitleView;
- (id)_statusTitleViewTitleFont;
- (double)_statusTitleWidth;
- (void)_toggleForStatusField;
- (bool)_undoInputOnTouchCancellation;
- (void)_updateFonts;
- (bool)_usesLightStyle;
- (void)dealloc;
- (id)init;
- (id)initWithLightStyle:(bool)arg1;
- (id)lastCharacterBeforeBackspace;
- (void)layoutSubviews;
- (id)passcode;
- (bool)passcodeEntryField:(id)arg1 shouldInsertText:(id)arg2;
- (void)passcodeEntryFieldDidAcceptEntry:(id)arg1;
- (void)passcodeEntryFieldDidCancelEntry:(id)arg1;
- (void)passcodeEntryFieldTextDidChange:(id)arg1;
- (void)passcodeLockNumberPad:(id)arg1 keyCancelled:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyDown:(id)arg2;
- (void)passcodeLockNumberPad:(id)arg1 keyUp:(id)arg2;
- (void)passcodeLockNumberPadBackspaceButtonHit:(id)arg1;
- (void)passcodeLockNumberPadCancelButtonHit:(id)arg1;
- (void)passcodeLockNumberPadEmergencyCallButtonHit:(id)arg1;
- (void)reset;
- (void)resetForFailedPasscode;
- (void)setKeypadVisible:(bool)arg1 animated:(bool)arg2;
- (void)setLastCharacterBeforeBackspace:(id)arg1;
- (void)setShowsCancelButton:(bool)arg1;
- (void)setShowsEmergencyCallButton:(bool)arg1;
- (void)setShowsStatusField:(bool)arg1;
- (void)setStatusSubtitleView:(id)arg1;
- (void)setStatusTitleView:(id)arg1;
- (id)statusSubtitleView;
- (id)statusTitleView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateForTransitionToPasscodeView:(bool)arg1;
- (void)updateStatusText:(id)arg1 subtitle:(id)arg2 animated:(bool)arg3;
- (void)willTransitionToPasscodeView;

@end
