/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardFeatureSpecialization : NSObject {
    long long  _currentUserInterfaceIdiom;
    TIInputMode * _inputMode;
    struct USet { } * m_acceptableCharacterSet;
    struct USet { } * m_precomposedCharacterSet;
}

@property (nonatomic) long long currentUserInterfaceIdiom;
@property (nonatomic, readonly) TIInputMode *inputMode;

+ (struct USet { }*)createAcceptableCharacterSetForKeyboardLocale:(id)arg1;
+ (id)createSpecializationForInputMode:(id)arg1;

- (id)accentKeyStringForKeyboardState:(id)arg1;
- (bool)acceptsCharacter:(unsigned int)arg1;
- (bool)allowsAutocorrectionOfValidWords;
- (bool)canHandleKeyHitTest;
- (struct USet { }*)createAcceptableCharacterSet;
- (struct TIInputManager { int (**x1)(); struct vector<KB::Input, std::__1::allocator<KB::Input> > { struct Input {} *x_2_1_1; struct Input {} *x_2_1_2; struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input> > { struct Input {} *x_3_2_1; } x_2_1_3; } x2; struct String { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; char *x_3_1_5; BOOL x_3_1_6[16]; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned char x_4_1_4; char *x_4_1_5; BOOL x_4_1_6[16]; } x4; unsigned int x5; struct String { unsigned short x_6_1_1; unsigned short x_6_1_2; unsigned short x_6_1_3; unsigned char x_6_1_4; char *x_6_1_5; BOOL x_6_1_6[16]; } x6; struct retain_ptr<const __CFLocale *> { struct __CFLocale {} *x_7_1_1; } x7; struct LockedInput { unsigned int x_8_1_1; unsigned int x_8_1_2; } x8; struct StrokeBuildManager {} *x9; struct String { unsigned short x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; unsigned char x_10_1_4; char *x_10_1_5; BOOL x_10_1_6[16]; } x10; }*)createInputManager;
- (long long)currentUserInterfaceIdiom;
- (void)dealloc;
- (id)dictionaryInputMode;
- (bool)dictionaryUsesExternalEncoding;
- (bool)doesComposeText;
- (id)externalStringToInternal:(id)arg1;
- (id)initWithInputMode:(id)arg1;
- (id)inputMode;
- (id)internalStringToExternal:(id)arg1;
- (id)keyboardBehaviors;
- (unsigned long long)maxPriorWordTokensAfterTrimming;
- (id)nonstopPunctuationCharacters;
- (const struct USet { }*)precomposedCharacterSet;
- (void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1;
- (id)replacementForDoubleSpace;
- (id)sentenceDelimitingCharacters;
- (id)sentencePrefixingCharacters;
- (id)sentenceTrailingCharacters;
- (void)setCurrentUserInterfaceIdiom:(long long)arg1;
- (bool)shouldAddModifierSymbolsToWordCharacters;
- (bool)shouldConvertAutocorrectionCandidatesToFullWidth;
- (bool)shouldConvertCandidateToExternal;
- (bool)shouldExtendPriorWord;
- (bool)shouldLearnLowercaseAtBeginningOfSentence;
- (void)specializeInputManager:(struct TIInputManager { int (**x1)(); struct vector<KB::Input, std::__1::allocator<KB::Input> > { struct Input {} *x_2_1_1; struct Input {} *x_2_1_2; struct __compressed_pair<KB::Input *, std::__1::allocator<KB::Input> > { struct Input {} *x_3_2_1; } x_2_1_3; } x2; struct String { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; char *x_3_1_5; BOOL x_3_1_6[16]; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned char x_4_1_4; char *x_4_1_5; BOOL x_4_1_6[16]; } x4; unsigned int x5; struct String { unsigned short x_6_1_1; unsigned short x_6_1_2; unsigned short x_6_1_3; unsigned char x_6_1_4; char *x_6_1_5; BOOL x_6_1_6[16]; } x6; struct retain_ptr<const __CFLocale *> { struct __CFLocale {} *x_7_1_1; } x7; struct LockedInput { unsigned int x_8_1_1; unsigned int x_8_1_2; } x8; struct StrokeBuildManager {} *x9; struct String { unsigned short x_10_1_1; unsigned short x_10_1_2; unsigned short x_10_1_3; unsigned char x_10_1_4; char *x_10_1_5; BOOL x_10_1_6[16]; } x10; }*)arg1 forLayoutState:(id)arg2;
- (bool)supportsLearning;
- (id)terminatorsDeletingAutospace;
- (id)wordCharacters;
- (id)wordSeparator;

@end
