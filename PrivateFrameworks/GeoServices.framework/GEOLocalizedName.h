/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocalizedName : PBCodable <NSCopying> {
    struct { 
        unsigned int nameRank : 1; 
        unsigned int isDefault : 1; 
    }  _has;
    bool  _isDefault;
    NSString * _languageCode;
    NSString * _name;
    unsigned int  _nameRank;
    NSString * _nameType;
    NSString * _phoneticName;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasIsDefault;
@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasNameRank;
@property (nonatomic, readonly) bool hasNameType;
@property (nonatomic, readonly) bool hasPhoneticName;
@property (nonatomic) bool isDefault;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned int nameRank;
@property (nonatomic, retain) NSString *nameType;
@property (nonatomic, retain) NSString *phoneticName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsDefault;
- (bool)hasLanguageCode;
- (bool)hasName;
- (bool)hasNameRank;
- (bool)hasNameType;
- (bool)hasPhoneticName;
- (unsigned long long)hash;
- (id)initWithPlaceDataLocalizedString:(id)arg1;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (unsigned int)nameRank;
- (id)nameType;
- (id)phoneticName;
- (bool)readFrom:(id)arg1;
- (void)setHasIsDefault:(bool)arg1;
- (void)setHasNameRank:(bool)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setLanguageCode:(id)arg1;
- (void)setName:(id)arg1;
- (void)setNameRank:(unsigned int)arg1;
- (void)setNameType:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
