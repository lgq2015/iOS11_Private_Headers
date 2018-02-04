/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
 */

@interface PBBProtoOfflineTerms : PBCodable <NSCopying> {
    NSMutableArray * _appleLanguages;
    NSString * _countryCode;
    NSString * _languageCode;
    NSData * _license;
    NSData * _multiterms;
    NSData * _warranty;
}

@property (nonatomic, retain) NSMutableArray *appleLanguages;
@property (nonatomic, retain) NSString *countryCode;
@property (nonatomic, readonly) bool hasCountryCode;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, readonly) bool hasLicense;
@property (nonatomic, readonly) bool hasMultiterms;
@property (nonatomic, readonly) bool hasWarranty;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSData *license;
@property (nonatomic, retain) NSData *multiterms;
@property (nonatomic, retain) NSData *warranty;

+ (Class)appleLanguagesType;

- (void).cxx_destruct;
- (void)addAppleLanguages:(id)arg1;
- (id)appleLanguages;
- (id)appleLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)appleLanguagesCount;
- (void)clearAppleLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCountryCode;
- (bool)hasLanguageCode;
- (bool)hasLicense;
- (bool)hasMultiterms;
- (bool)hasWarranty;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (id)license;
- (void)mergeFrom:(id)arg1;
- (id)multiterms;
- (bool)readFrom:(id)arg1;
- (void)setAppleLanguages:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setLicense:(id)arg1;
- (void)setMultiterms:(id)arg1;
- (void)setWarranty:(id)arg1;
- (id)warranty;
- (void)writeTo:(id)arg1;

@end