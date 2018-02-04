/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXFirstResponderValueChangeManager : NSObject

+ (id)sharedInstance;

- (id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 isFirstResponderValid:(bool)arg3 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 oldSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 shouldEchoDeletion:(bool)arg6 optionalValueChangeType:(unsigned long long)arg7 derivedValueChangeType:(unsigned long long*)arg8 didHitBorder:(bool*)arg9 isBreakSpaceCharacter:(bool*)arg10 isSingleInsert:(bool)arg11 selectionDeleted:(bool)arg12 feedbackType:(unsigned long long)arg13 textOperationOccurred:(bool*)arg14 lastKeyboardKeyPress:(double)arg15 isSingleCharacterInsertOrDelete:(bool*)arg16 singleInsertDeleteAttString:(id*)arg17 singleInsertDeleteString:(id*)arg18 isSingleCharacterUpdate:(bool*)arg19 wordRangeToFindMisspelled:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg20 pasteOperationSucceeded:(bool*)arg21;
- (id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 oldSelectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 shouldEchoDeletion:(bool)arg5 isSingleInsert:(bool)arg6 feedbackType:(unsigned long long)arg7 lastKeyboardKeyPress:(double)arg8;
- (id)outputValueChangeForNewValue:(id)arg1 oldValue:(id)arg2 selectedTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 shouldEchoDeletion:(bool)arg4 isSingleInsert:(bool)arg5 feedbackType:(unsigned long long)arg6 lastKeyboardKeyPress:(double)arg7;

@end
