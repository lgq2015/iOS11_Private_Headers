/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUISimpleFixedDigitPasscodeEntryField : SBUINumericPasscodeEntryFieldBase {
    NSMutableArray * _characterIndicators;
    UIView * _characterIndicatorsContainerView;
    UIView * _springView;
    UIView * _springViewParent;
}

- (void).cxx_destruct;
- (void)_appendString:(id)arg1;
- (void)_autofillForBiometricAuthenticationWithCompletion:(id /* block */)arg1;
- (void)_deleteLastCharacter;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_entryFieldBoundsWithXOffset:(double)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_entryFieldPaddingOutsideRing;
- (bool)_hasAnyCharacters;
- (void)_resetForFailedPasscode:(bool)arg1;
- (struct CGSize { double x1; double x2; })_viewSize;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1;
- (id)initWithDefaultSizeAndLightStyle:(bool)arg1 numberOfDigits:(unsigned long long)arg2;
- (void)reset;

@end
