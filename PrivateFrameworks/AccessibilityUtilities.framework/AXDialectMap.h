/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXDialectMap : NSObject {
    AXLangMap * _langMap;
    NSLocale * _locale;
    NSCharacterSet * _secondaryLanguageRange;
    NSCharacterSet * _speakableCharacters;
    NSString * _specificLanguageID;
    NSString * _voiceName;
}

@property (nonatomic, readonly) AXLanguageManager *langManager;
@property (nonatomic) AXLangMap *langMap;
@property (nonatomic, readonly) NSString *languageNameAndLocaleInCurrentLocale;
@property (nonatomic, readonly) NSString *languageNameAndLocaleInNativeLocale;
@property (nonatomic, readonly) NSString *languageNameInCurrentLocale;
@property (nonatomic, readonly) NSString *languageNameInNativeLocale;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, readonly) NSString *localeNameInCurrentLocale;
@property (nonatomic, readonly) NSString *regionID;
@property (nonatomic, retain) NSCharacterSet *secondaryLanguageRange;
@property (nonatomic, retain) NSCharacterSet *speakableCharacters;
@property (nonatomic, copy) NSString *specificLanguageID;
@property (nonatomic, copy) NSString *voiceName;

- (void).cxx_destruct;
- (id)basicDescription;
- (bool)canSpeakCharacter:(unsigned short)arg1;
- (bool)canSpeakLongCharacter:(unsigned int)arg1;
- (bool)canSpeakString:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)initWithLocale:(id)arg1 voiceName:(id)arg2 specificLanguageID:(id)arg3 speakableCharacters:(id)arg4 secondaryLanguageRange:(id)arg5;
- (bool)isDialectSecondaryForCharacter:(unsigned short)arg1;
- (id)langManager;
- (id)langMap;
- (id)languageNameAndLocaleInCurrentLocale;
- (id)languageNameAndLocaleInNativeLocale;
- (id)languageNameInCurrentLocale;
- (id)languageNameInNativeLocale;
- (id)locale;
- (id)localeNameInCurrentLocale;
- (id)regionID;
- (id)secondaryLanguageRange;
- (void)setLangMap:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSecondaryLanguageRange:(id)arg1;
- (void)setSpeakableCharacters:(id)arg1;
- (void)setSpecificLanguageID:(id)arg1;
- (void)setVoiceName:(id)arg1;
- (id)speakableCharacters;
- (id)specificLanguageID;
- (id)voiceName;

@end
