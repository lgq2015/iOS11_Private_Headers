/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CN : NSObject

// Image: /System/Library/Frameworks/Contacts.framework/Contacts

+ (id)_unifyContacts:(id)arg1 includingMainStoreContacts:(bool)arg2;
+ (void)addLinkedIdentifier:(id)arg1 toLabeledValue:(id)arg2;
+ (id)allContactProperties;
+ (id)allContactPropertyKeys;
+ (id)allContainerProperties;
+ (id)allImageDataProperties;
+ (id)allImageDataPropertyKeys;
+ (id)allNameComponentRelatedProperties;
+ (id)allPhoneticNameComponentProperties;
+ (id)alwaysFetchedProperties;
+ (bool)areValidDayComponents:(id)arg1 error:(id*)arg2;
+ (bool)areValidGregorianDayComponents:(id)arg1 error:(id*)arg2;
+ (bool)areValidKeyPaths:(id)arg1 forObject:(id)arg2 expectedClasses:(id)arg3 allowNil:(id)arg4 error:(id*)arg5;
+ (bool)areValidNonGregorianDayComponents:(id)arg1 error:(id*)arg2;
+ (id)birthdayDescription;
+ (id)calendarURIsDescription;
+ (id)callAlertDescription;
+ (id)contactPropertiesByKey;
+ (id)contactRelationsDescription;
+ (id)contactTypeDescription;
+ (id)contactUnifyingContacts:(id)arg1 includingMainStoreContacts:(bool)arg2;
+ (id)containerEnabledDescription;
+ (id)containerIdentifierDescription;
+ (id)containerNameDescription;
+ (id)containerTypeDescription;
+ (id)containeriOSLegacyIdentifierDescription;
+ (id)creationDateDescription;
+ (id)cropRectDescription;
+ (id /* block */)dateComponentsFromDictionaryTransform;
+ (id /* block */)dateComponentsToDictionaryTransform;
+ (id)datesDescription;
+ (Class)defaultDataMapperClass;
+ (id)departmentDescription;
+ (id)emailAddressesDescription;
+ (id)familyNameDescription;
+ (id)fullscreenImageDataDescription;
+ (id)givenNameDescription;
+ (id)groupIdentifiersByLabeledValue:(id)arg1 forProperty:(id)arg2;
+ (bool)hasContactChineseJapaneseKoreanName:(id)arg1;
+ (bool)hasContactChineseJapaneseKoreanPhoneticName:(id)arg1;
+ (id)iOSLegacyIdentifierDescription;
+ (id)identifierDescription;
+ (id)identifierMapForUnifiedContact:(id)arg1 backingContacts:(id)arg2;
+ (id)identifierMapForUnifiedMultiValue:(id)arg1 backingMultiValues:(id)arg2 forProperty:(id)arg3;
+ (id)imageDataAvailableDescription;
+ (id)imageDataDescription;
+ (unsigned long long)indexOfPreferredContactsForUnifying:(id)arg1 includingMainStoreContacts:(bool)arg2;
+ (unsigned long long)indexOfUnifiedIdentifier:(id)arg1 onNonUnifiedMultiValue:(id)arg2 withIdentifierMap:(id)arg3;
+ (id)instantMessagAddressesDescription;
+ (id /* block */)instantMessageAddressFromDictionaryTransform;
+ (id /* block */)instantMessageAddressToDictionaryTransform;
+ (bool)isEmptyNameContact:(id)arg1 phonetic:(bool)arg2 includingPrefixAndSuffix:(bool)arg3;
+ (id)jobTitleDescription;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2;
+ (id)joinNonEmptyContactProperties:(id)arg1 onContact:(id)arg2 withDelimiter:(id)arg3;
+ (id)keyVectorForAllUsedKeysForInternationalSupport;
+ (id)linkIdentifierDescription;
+ (id)localizedNameDelimiterForContact:(id)arg1;
+ (id)localizedPhoneticNameDelimiterForContact:(id)arg1;
+ (id)mapsDataDescription;
+ (id)middleNameDescription;
+ (id)modificationDateDescription;
+ (id)multiValueContactProperties;
+ (id)mutableContactUnifyingContacts:(id)arg1 includingMainStoreContacts:(bool)arg2;
+ (id)namePrefixDescription;
+ (id)nameSuffixDescription;
+ (id)nicknameDescription;
+ (id)nonGregorianBirthdayDescription;
+ (id)noteDescription;
+ (id /* block */)nullTransform;
+ (id)orderForContactName:(id)arg1;
+ (id)orderForContactName:(id)arg1 phonetic:(bool)arg2;
+ (id)orderForContactPhoneticName:(id)arg1;
+ (id)organizationNameDescription;
+ (id /* block */)phoneNumberFromStringTransform;
+ (id /* block */)phoneNumberToStringTransform;
+ (id)phoneNumbersDescription;
+ (id)phonemeDataDescription;
+ (id)phoneticFamilyNameDescription;
+ (id)phoneticGivenNameDescription;
+ (id)phoneticMiddleNameDescription;
+ (id)phoneticOrganizationNameDescription;
+ (id /* block */)postalAddressFromDictionaryTransform;
+ (id /* block */)postalAddressToDictionaryTransform;
+ (id)postalAddressesDescription;
+ (id)preferredApplePersonaIdentifierDescription;
+ (id)preferredForImageDescription;
+ (id)preferredForNameDescription;
+ (id)preferredLikenessSourceDescription;
+ (id)previousFamilyNameDescription;
+ (id)pronunciationFamilyNameDescription;
+ (id)pronunciationGivenNameDescription;
+ (id /* block */)relatedContactFromStringTransform;
+ (id /* block */)relatedContactToStringTransform;
+ (id)requiredPropertiesForNameScriptDetection;
+ (id)requiredPropertiesForPhoneticNameScriptDetection;
+ (id)sectionForSortingByFamilyNameDescription;
+ (id)sectionForSortingByGivenNameDescription;
+ (id)singleValueContactProperties;
+ (id /* block */)socialProfileFromDictionaryTransform;
+ (id /* block */)socialProfileToDictionaryTransform;
+ (id /* block */)socialProfileToFoundationProfileTransform;
+ (id)socialProfilesDescription;
+ (id)sourceContactForValue:(id)arg1 labeledValueIdentifier:(id)arg2 propertyKey:(id)arg3 inUnifiedContact:(id)arg4;
+ (id)textAlertDescription;
+ (id)thumbnailImageDataDescription;
+ (id)unifyContactMatchInfos:(id)arg1 linkedContacts:(id)arg2;
+ (id)unifyMultivalues:(id)arg1 forProperty:(id)arg2;
+ (id)urlAddressesDescription;
+ (id)writableAlwaysFetchedProperties;
+ (id)writableContactProperties;
+ (id)writableContainerProperties;
+ (id)writableMultiValueContactProperties;
+ (id)writableSingleValueContactProperties;

// Image: /System/Library/Frameworks/AddressBook.framework/AddressBook

+ (id)contactPropertiesByABSPropertyID;

@end
