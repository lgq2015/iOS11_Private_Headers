/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIKeyboardInputManager_mul : TIKeyboardInputManager {
    bool  _isSuspended;
}

- (void)dealloc;
- (void)didUpdateInputModeProbabilities:(id)arg1;
- (void)didUpdateInputModes:(id)arg1;
- (void)enumerateInputModesWithBlock:(id /* block */)arg1;
- (id)keyboardConfiguration;
- (struct LanguageModelContainer { int (**x1)(); struct vector<std::__1::shared_ptr<KB::LanguageModel>, std::__1::allocator<std::__1::shared_ptr<KB::LanguageModel> > > { struct shared_ptr<KB::LanguageModel> {} *x_2_1_1; struct shared_ptr<KB::LanguageModel> {} *x_2_1_2; struct __compressed_pair<std::__1::shared_ptr<KB::LanguageModel> *, std::__1::allocator<std::__1::shared_ptr<KB::LanguageModel> > > { struct shared_ptr<KB::LanguageModel> {} *x_3_2_1; } x_2_1_3; } x2; struct vector<float, std::__1::allocator<float> > { float *x_3_1_1; float *x_3_1_2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_2_1; } x_3_1_3; } x3; }*)languageModelContainer;
- (unsigned int)lexiconIDForInputMode:(id)arg1;
- (struct { struct String { unsigned short x_1_1_1; unsigned short x_1_1_2; unsigned short x_1_1_3; unsigned char x_1_1_4; char *x_1_1_5; BOOL x_1_1_6[16]; } x1; struct String { unsigned short x_2_1_1; unsigned short x_2_1_2; unsigned short x_2_1_3; unsigned char x_2_1_4; char *x_2_1_5; BOOL x_2_1_6[16]; } x2; struct String { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned short x_3_1_3; unsigned char x_3_1_4; char *x_3_1_5; BOOL x_3_1_6[16]; } x3; struct String { unsigned short x_4_1_1; unsigned short x_4_1_2; unsigned short x_4_1_3; unsigned char x_4_1_4; char *x_4_1_5; BOOL x_4_1_6[16]; } x4; struct String { unsigned short x_5_1_1; unsigned short x_5_1_2; unsigned short x_5_1_3; unsigned char x_5_1_4; char *x_5_1_5; BOOL x_5_1_6[16]; } x5; unsigned int x6; float x7; })lexiconInfoForInputMode:(id)arg1;
- (struct vector<KB::LexiconInfo, std::__1::allocator<KB::LexiconInfo> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<KB::LexiconInfo *, std::__1::allocator<KB::LexiconInfo> > { struct { /* ? */ } *x_3_1_1; } x3; })lexiconInformationVector;
- (void)loadDictionaries;
- (id)resourceInputModes;
- (void)resume;
- (bool)shouldUpdateDictionary;
- (void)suspend;
- (bool)updateLanguageModelForKeyboardState;
- (void)updateLanguagePriors;
- (float)weightForInputMode:(id)arg1;

@end
