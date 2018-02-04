/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TILanguageSelectionController : NSObject {
    NSArray * _activeInputModes;
    TILanguageModelAdaptationContext * _adaptationContext;
    NSMutableArray * _bufferedTokenStrings;
    <TILanguageSelectionControllerDelegate> * _delegate;
    TIInputMode * _inferredSecondaryInputMode;
    NSMutableDictionary * _inputModeProbabilities;
    <TILanguageLikelihoodModeling> * _languageLikelihoodModel;
    <TIMultilingualPreferenceProviding> * _preferenceProvider;
    TIInputMode * _preferredSecondaryInputMode;
    TIInputMode * _primaryInputMode;
    NSDictionary * _referenceInputModeProbabilities;
    NSArray * _userEnabledInputModes;
    struct vector<TITokenID, std::__1::allocator<TITokenID> > { 
        struct TITokenID {} *__begin_; 
        struct TITokenID {} *__end_; 
        struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { 
            struct TITokenID {} *__first_; 
        } __end_cap_; 
    }  m_buffered_tokens;
}

@property (nonatomic, retain) NSArray *activeInputModes;
@property (nonatomic, retain) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic, readonly) NSMutableArray *bufferedTokenStrings;
@property (nonatomic) <TILanguageSelectionControllerDelegate> *delegate;
@property (nonatomic, retain) TIInputMode *inferredSecondaryInputMode;
@property (nonatomic, readonly) NSMutableDictionary *inputModeProbabilities;
@property (nonatomic, readonly) <TILanguageLikelihoodModeling> *languageLikelihoodModel;
@property (nonatomic, readonly) <TIMultilingualPreferenceProviding> *preferenceProvider;
@property (nonatomic, retain) TIInputMode *preferredSecondaryInputMode;
@property (nonatomic, retain) TIInputMode *primaryInputMode;
@property (nonatomic, copy) NSDictionary *referenceInputModeProbabilities;
@property (nonatomic, retain) NSArray *userEnabledInputModes;

+ (id)inferInputModeForLanguage:(id)arg1 enabled:(id)arg2;
+ (id)inferSecondaryInputModeForPrimary:(id)arg1 enabled:(id)arg2;
+ (id)multilingualInputModesForInputModes:(id)arg1;
+ (void)reportTypedTokens:(const struct vector<TITokenID, std::__1::allocator<TITokenID> > { struct TITokenID {} *x1; struct TITokenID {} *x2; struct __compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > { struct TITokenID {} *x_3_1_1; } x3; }*)arg1 activeInputModes:(id)arg2;
+ (id)sharedLanguageLikelihoodModel;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)activeInputModes;
- (id)adaptationContext;
- (void)addTokenString:(id)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4;
- (void)appleKeyboardsInternalSettingsChanged:(id)arg1;
- (void)appleKeyboardsPreferencesChanged:(id)arg1;
- (bool)bufferIsCompatibleWithContext:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg1 contextLength:(unsigned long long)arg2;
- (id)bufferedTokenStrings;
- (void)dealloc;
- (id)delegate;
- (bool)didProbabilityChangeSignificantly;
- (void)feedBufferedTokenStringsToModel;
- (id)fetchPreferredSecondaryInputMode;
- (id)fetchUserEnabledInputModes;
- (void)flushBuffer;
- (id)inferredSecondaryInputMode;
- (id)init;
- (id)initWithLanguageLikelihoodModel:(id)arg1 preferenceProvider:(id)arg2;
- (id)inputModeProbabilities;
- (id)languageLikelihoodModel;
- (double)lastOfflineAdaptationTimeForApp:(id)arg1;
- (id)preferenceProvider;
- (id)preferredSecondaryInputMode;
- (id)primaryInputMode;
- (float)priorProbabilityForInputMode:(id)arg1;
- (id)referenceInputModeProbabilities;
- (void)removeTokenString:(id)arg1 tokenID:(struct TITokenID { unsigned int x1; unsigned int x2; })arg2 context:(const struct TITokenID { unsigned int x1; unsigned int x2; }*)arg3 contextLength:(unsigned long long)arg4;
- (void)setActiveInputModes:(id)arg1;
- (void)setAdaptationContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInferredSecondaryInputMode:(id)arg1;
- (void)setPreferredSecondaryInputMode:(id)arg1;
- (void)setPrimaryInputMode:(id)arg1;
- (void)setReferenceInputModeProbabilities:(id)arg1;
- (void)setUserEnabledInputModes:(id)arg1;
- (void)updateActiveInputModesSuppressingNotification:(bool)arg1;
- (bool)updateInputModeProbabilities;
- (id)userEnabledInputModes;

@end
