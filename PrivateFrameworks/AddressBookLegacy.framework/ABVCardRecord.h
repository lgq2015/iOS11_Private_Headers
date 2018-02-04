/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AddressBookLegacy.framework/AddressBookLegacy
 */

@interface ABVCardRecord : NSObject {
    struct __CFArray { } * _properties;
    void * _record;
}

+ (void)clearPrivateFields;
+ (bool)includeABClipRectInVCardPhotos;
+ (bool)includeImageURIInVCards;
+ (bool)includeNotesInVCards;
+ (bool)includePhotosInVCards;
+ (bool)includeREVInVCards;
+ (bool)privateVCardEnabled;
+ (void)setIncludeNotesInVCards:(bool)arg1;
+ (void)setIncludePhotosInVCards:(bool)arg1;
+ (void)setIncludeREVInVCards:(bool)arg1;
+ (void)setPrivateVCardEnabled:(bool)arg1;
+ (void)setVCardField:(id)arg1 isPrivate:(bool)arg2;
+ (struct __CFArray { }*)supportedProperties;
+ (bool)vcardFieldisPrivate:(id)arg1;

- (id)ISO8061StringFromDate:(id)arg1;
- (id)ISO8061StringFromDateTime:(id)arg1;
- (id)_21vCardRepresentationAsData;
- (void)_addPersonSounds:(void*)arg1 identifier:(int)arg2 toActivityAlerts:(id*)arg3 activity:(id)arg4 alert:(id)arg5;
- (void)_appendPropValue:(id)arg1 forPropKey:(id)arg2 toOutString:(id)arg3 usingDelimiter:(id)arg4 inGroup:(id)arg5;
- (id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(bool)arg1;
- (id)_copyVCardRepresentationAsStringIncludeExternalProperties:(bool)arg1 withPhoto:(id)arg2 extraPhotoParameters:(id)arg3 includePrivateData:(bool)arg4;
- (id)_dictionaryForActivityAlerts;
- (id)_fullName;
- (id)_fullNameIncludingAuxiliaryElements:(bool)arg1;
- (bool)_isCompany;
- (id)_prodID;
- (id)_realCompositeName;
- (bool)_showField:(unsigned int)arg1;
- (bool)_showField:(unsigned int)arg1 identifier:(int)arg2;
- (id)_typeParameterForToneType:(id)arg1;
- (bool)_usesArrayForExternalPropKey:(id)arg1;
- (id)_vCardKeyForAddressLabel:(id)arg1 vCard3:(bool)arg2;
- (struct __CFString { }*)_vCardKeyForEmailLabel:(id)arg1;
- (struct __CFString { }*)_vCardKeyForGenericLabel:(id)arg1;
- (id)_vCardKeysForPhoneLabel:(id)arg1;
- (id)_valueForPersonSounds:(void*)arg1 identifier:(int)arg2;
- (id)alternateName;
- (void)appendLabel:(id)arg1 toVCardRep:(id)arg2 inGroup:(id)arg3;
- (void*)copyValueForProperty:(unsigned int)arg1;
- (id)dataForInstantMessageProperties;
- (id)dataForSocialProfileProperty:(void*)arg1 groupCount:(long long*)arg2 includePrivateData:(bool)arg3;
- (id)dataForSoundProperty:(void*)arg1;
- (void)dealloc;
- (id)encodedDataForValue:(id)arg1 charsetName:(id*)arg2;
- (id)encodedLineForValue:(id)arg1;
- (id)imageData;
- (id)init;
- (id)initWithRecord:(void*)arg1;
- (id)initWithVCardRepresentation:(id)arg1;
- (id)newISO8061StringFromDate:(id)arg1;
- (id)propertyLineForGenericABProperty21:(unsigned int)arg1 vCardProperty:(id)arg2;
- (id)propertyLineForGenericABProperty:(unsigned int)arg1 vCardProperty:(id)arg2 is21:(bool)arg3 groupCount:(long long*)arg4;
- (id)propertyLineForIMHandles:(id)arg1 labels:(id)arg2 vCardProperty:(id)arg3;
- (id)propertyLineForIMPPProperty:(bool)arg1 groupCount:(long long*)arg2 includePrivateData:(bool)arg3;
- (id)propertyLineForInstantMessageHandles:(bool)arg1 groupCount:(long long*)arg2 includePrivateData:(bool)arg3;
- (void*)record;
- (bool)setValue:(void*)arg1 forProperty:(unsigned int)arg2;
- (id)stringForAlternateBirthdayComponent:(id)arg1 key:(id)arg2 format:(id)arg3;
- (id)stringFromAlternateBirthday:(id)arg1;
- (bool)useThumbnailImageFormatIfAvailable;
- (id)vCardRepresentationForMode:(int)arg1;
- (void*)valueForProperty:(unsigned int)arg1;

@end
