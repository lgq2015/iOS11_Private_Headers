/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKCodeEntryView : UIView <UIKeyInput> {
    NSArray * _activeConstraints;
    NSArray * _generatorFields;
    bool  _passcodeFieldDisabled;
    NSMutableString * _stringValue;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic) long long autocapitalizationType;
@property (nonatomic) long long autocorrectionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enablesReturnKeyAutomatically;
@property (nonatomic, readonly) UILabel *firstGeneratorField;
@property (nonatomic, retain) NSArray *generatorFields;
@property (nonatomic, readonly) bool hasText;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long keyboardAppearance;
@property (nonatomic) long long keyboardType;
@property (nonatomic) long long returnKeyType;
@property (getter=isSecureTextEntry, nonatomic) bool secureTextEntry;
@property (nonatomic) long long smartDashesType;
@property (nonatomic) long long smartInsertDeleteType;
@property (nonatomic) long long smartQuotesType;
@property (nonatomic) long long spellCheckingType;
@property (nonatomic, copy) NSString *stringValue;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *textContentType;

+ (id)generatorFieldFont;

- (void).cxx_destruct;
- (void)_syncStringValueToLabels;
- (void)_updateFonts:(id)arg1;
- (id)activeConstraints;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (void)deleteBackward;
- (void)emitCodeEnteredNotification;
- (id)firstGeneratorField;
- (id)generatorFields;
- (bool)hasText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertText:(id)arg1;
- (bool)isSecureTextEntry;
- (long long)keyboardAppearance;
- (long long)keyboardType;
- (void)passcodeFieldTapped:(id)arg1;
- (void)setActiveConstraints:(id)arg1;
- (void)setGeneratorFields:(id)arg1;
- (void)setPasscodeFieldDisabled:(bool)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;
- (void)updateConstraints;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end
