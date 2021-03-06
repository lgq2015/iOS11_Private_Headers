/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface RestrictionsPINController : DevicePINController

+ (void)initialize;

- (struct __CFString { }*)blockTimeIntervalKey;
- (struct __CFString { }*)blockedStateKey;
- (struct __CFString { }*)defaultsID;
- (void)delegateUpdateToggleState;
- (struct __CFString { }*)failedAttemptsKey;
- (bool)isNumericPIN;
- (void)performActionAfterPINRemove;
- (void)performActionAfterPINSet;
- (id)pinInstructionsPromptFont;
- (bool)pinIsAcceptable:(id)arg1 outError:(id*)arg2;
- (int)pinLength;
- (void)setPIN:(id)arg1;
- (bool)simplePIN;
- (id)stringsTable;
- (bool)validatePIN:(id)arg1;

@end
