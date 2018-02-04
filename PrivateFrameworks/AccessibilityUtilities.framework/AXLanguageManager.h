/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXLanguageManager : NSObject {
    NSCharacterSet * _commonCharacters;
    AXDialectMap * _dialectForCurrentLocale;
    AXDialectMap * _dialectForSystemLanguage;
    NSArray * _langMaps;
    NSLocale * _userLocale;
}

@property (nonatomic, retain) NSCharacterSet *commonCharacters;
@property (nonatomic) AXDialectMap *dialectForCurrentLocale;
@property (nonatomic) AXDialectMap *dialectForSystemLanguage;
@property (nonatomic, readonly) AXDialectMap *dialectForUserLocale;
@property (nonatomic, retain) NSArray *langMaps;
@property (nonatomic, readonly) NSString *systemLanguageID;
@property (nonatomic, copy) NSLocale *userLocale;

+ (id)commonPunctuationCharacters;
+ (id)dialectForAlternativeVoiceIdentifier:(id)arg1;
+ (id)doNotTranslateWords;
+ (id)nameForAlternativeVoiceIdentifier:(id)arg1;
+ (id)nonlocalizedNameForLanguage:(id)arg1;
+ (id)sharedInstance;
+ (id)stringByReplacingEmojiCharactersWithEmojiDescriptions:(id)arg1;
+ (id)stringByReplacingFatWidthCharactersWithBasicCharacters:(id)arg1;

- (void).cxx_destruct;
- (void)_handleUserLocaleDidChange:(id)arg1;
- (id)_loadLangMaps;
- (id)_preferredLanguageIDsFromUserSelectedKeyboards;
- (id)ambiguousDialectsFromUserKeyboardPreferences;
- (id)basicDescription;
- (id)characterSetForRanges:(id)arg1;
- (id)commonCharacters;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2;
- (id)dialectForCurrentLocale;
- (id)dialectForLanguageID:(id)arg1;
- (id)dialectForSystemLanguage;
- (id)dialectForUserLocale;
- (id)dialectThatCanSpeakCharacter:(unsigned short)arg1;
- (id)dialectsThatCanSpeakCharacter:(unsigned short)arg1;
- (id)init;
- (bool)isCharacterCommon:(unsigned short)arg1;
- (bool)isStringComposedByCommonCharacters:(id)arg1;
- (id)langMaps;
- (void)setCommonCharacters:(id)arg1;
- (void)setDialectForCurrentLocale:(id)arg1;
- (void)setDialectForSystemLanguage:(id)arg1;
- (void)setLangMaps:(id)arg1;
- (void)setUserLocale:(id)arg1;
- (id)systemLanguageID;
- (void)updateCachedDialects;
- (id)userLocale;

@end
