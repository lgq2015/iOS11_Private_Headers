/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPersonNameComponentsFormatter : NSFormatter <NSCopying, NSObservable, NSObserver, NSSecureCoding> {
    id  _private;
}

@property bool _forceFamilyNameFirst;
@property bool _forceGivenNameFirst;
@property bool _ignoresFallbacks;
@property NSLocale *_locale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPhonetic) bool phonetic;
@property long long style;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (long long)__abbreviatedNameFormatForPersonNameComponents:(id)arg1;
+ (long long)__abbreviatedNameFormatForString:(id)arg1;
+ (id)__characterSetWithPattern:(id)arg1;
+ (bool)__contents:(id)arg1 exclusivelyInCharacterSet:(struct USet { }*)arg2;
+ (id)__currentLocale;
+ (id)__familyNameFirstOrdering;
+ (struct USet { }*)__getCharacterSetWithPattern:(id)arg1;
+ (id)__givenNameFirstOrdering;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1;
+ (unsigned long long)__inferredScriptIndexForComponents:(id)arg1 ignoreUndeterminedComponents:(bool)arg2;
+ (unsigned long long)__inferredScriptIndexFromString:(id)arg1;
+ (SEL)__initialsCreatorForScript:(unsigned long long)arg1;
+ (id)__initialsForString:(id)arg1;
+ (id)__localizedNameDefaults;
+ (id)__longestComponentFromComponents:(id)arg1;
+ (id)__naiveDelimiterForCombinedNameString:(id)arg1;
+ (long long)__nameOrderForLocale:(id)arg1 usingNativeOrdering:(bool)arg2;
+ (id)__preferredLanguages;
+ (void)__registerDefaults;
+ (id)__scriptIdentifierFromIndex:(unsigned long long)arg1;
+ (long long)__shortNameFormatForLocale:(id)arg1;
+ (bool)__shortStyle:(long long)arg1 isRestrictedForLocale:(id)arg2;
+ (bool)__shortStyle:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;
+ (bool)__shortStyleRestrictionExistsForComponents:(id)arg1 shortStyle:(long long)arg2;
+ (bool)__shouldCacheFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (bool)__shouldFallbackToGivenNameInitialForAbbreviatedNameFormatFamilyNameOnly;
+ (bool)__shouldReturnEmptyString;
+ (id)__stringByStrippingNonInitialPunctuationFromString:(id)arg1;
+ (id)__stringValueForShortStyle:(long long)arg1;
+ (id)__stringValueForStyle:(long long)arg1;
+ (bool)__style:(long long)arg1 isRestrictedForLocale:(id)arg2;
+ (bool)__style:(long long)arg1 isRestrictedForScript:(unsigned long long)arg2;
+ (id)__supportedNameDefaultsFromLocale:(id)arg1;
+ (id)__supportedScriptDefaultsFromScriptName:(id)arg1;
+ (id)__thaiConsonantSet;
+ (id)_cjkLanguagesSet;
+ (id)_cjkLocaleIdentifiers;
+ (bool)_currentLocaleIsCJK;
+ (long long)_defaultDisplayNameOrder;
+ (long long)_defaultShortNameFormat;
+ (id)_fallbackDescriptorForStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (id)_formatterWithStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (bool)_isCJKScript:(id)arg1;
+ (bool)_isMixedScript:(id)arg1;
+ (id)_localizedDelimiterForComponents:(id)arg1 options:(unsigned long long)arg2;
+ (id)_localizedShortNameForComponents:(id)arg1 withStyle:(long long)arg2 options:(unsigned long long)arg3;
+ (long long)_nameOrderWithOverridesForComponents:(id)arg1 options:(unsigned long long)arg2;
+ (id)_relevantKeyPathsForStyle:(long long)arg1 options:(unsigned long long)arg2;
+ (bool)_shortNameIsEnabled;
+ (bool)_shouldPreferNicknames;
+ (id)_styleFormatterForStyle:(long long)arg1 masterFormatter:(id)arg2;
+ (id /* block */)arabicInitialsCreator;
+ (void)forEachExistingComponentWithComponents:(id)arg1 performBlock:(id /* block */)arg2;
+ (bool)isKatakana:(id)arg1;
+ (id)localizedStringFromPersonNameComponents:(id)arg1 style:(long long)arg2 options:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;
+ (id /* block */)thaiInitialsCreator;
+ (id /* block */)tibetanInitialsCreator;
+ (id /* block */)westernInitialsCreator;

- (long long)__computedNameOrderForComponents:(id)arg1;
- (long long)__computedShortNameFormat;
- (long long)__localizedNameOrderUsingNativeOrdering:(bool)arg1;
- (bool)__localizedRestrictionExistsForComponents:(id)arg1 ignoreUndeterminedComponents:(bool)arg2;
- (bool)__localizedRestrictionExistsForShortStyle:(long long)arg1;
- (bool)__localizedRestrictionExistsForStyle:(long long)arg1;
- (long long)__localizedShortNameFormat;
- (bool)_forceFamilyNameFirst;
- (bool)_forceGivenNameFirst;
- (bool)_ignoresFallbacks;
- (id)_locale;
- (long long)_nameOrderWithOverridesForComponents:(id)arg1;
- (id)annotatedStringFromPersonNameComponents:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFormatter:(id)arg1;
- (bool)isPhonetic;
- (id)personNameComponentsFromString:(id)arg1;
- (void)receiveObservedValue:(id)arg1;
- (void)setPhonetic:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)set_forceFamilyNameFirst:(bool)arg1;
- (void)set_forceGivenNameFirst:(bool)arg1;
- (void)set_ignoresFallbacks:(bool)arg1;
- (void)set_locale:(id)arg1;
- (id)stringForObjectValue:(id)arg1;
- (id)stringFromPersonNameComponents:(id)arg1;
- (long long)style;

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (long long)contactsNameOrderFromFoundationNameOrder:(long long)arg1;
+ (id)formatterWithCNContactStyle:(long long)arg1;
+ (id)localizedStringFromContact:(id)arg1 contactStyle:(long long)arg2 options:(unsigned long long)arg3;

- (id)stringFromContact:(id)arg1;

@end
