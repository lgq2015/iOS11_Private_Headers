/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileSet : PBCodable <NSCopying> {
    NSString * _baseURL;
    int  _checksumType;
    NSMutableArray * _countryRegionWhitelists;
    unsigned int  _dataSet;
    struct { 
        unsigned int checksumType : 1; 
        unsigned int dataSet : 1; 
        unsigned int requestStyle : 1; 
        unsigned int updateBehavior : 1; 
        unsigned int multiTileURLUsesStatusCodes : 1; 
    }  _has;
    NSString * _localizationURL;
    NSString * _multiTileURL;
    bool  _multiTileURLUsesStatusCodes;
    int  _requestStyle;
    int  _scale;
    int  _size;
    int  _style;
    NSMutableArray * _supportedLanguages;
    PBUnknownFields * _unknownFields;
    int  _updateBehavior;
    NSMutableArray * _validVersions;
}

@property (nonatomic, retain) NSString *baseURL;
@property (nonatomic) int checksumType;
@property (nonatomic, retain) NSMutableArray *countryRegionWhitelists;
@property (nonatomic) unsigned int dataSet;
@property (nonatomic, readonly) bool hasBaseURL;
@property (nonatomic) bool hasChecksumType;
@property (nonatomic) bool hasDataSet;
@property (nonatomic, readonly) bool hasLocalizationURL;
@property (nonatomic, readonly) bool hasMultiTileURL;
@property (nonatomic) bool hasMultiTileURLUsesStatusCodes;
@property (nonatomic) bool hasRequestStyle;
@property (nonatomic) bool hasUpdateBehavior;
@property (nonatomic, retain) NSString *localizationURL;
@property (nonatomic, retain) NSString *multiTileURL;
@property (nonatomic) bool multiTileURLUsesStatusCodes;
@property (nonatomic) int requestStyle;
@property (nonatomic) int scale;
@property (nonatomic) int size;
@property (nonatomic) int style;
@property (nonatomic, retain) NSMutableArray *supportedLanguages;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int updateBehavior;
@property (nonatomic, retain) NSMutableArray *validVersions;

+ (Class)countryRegionWhitelistType;
+ (Class)supportedLanguageType;
+ (Class)validVersionType;

- (void).cxx_destruct;
- (int)StringAsChecksumType:(id)arg1;
- (int)StringAsRequestStyle:(id)arg1;
- (int)StringAsScale:(id)arg1;
- (int)StringAsSize:(id)arg1;
- (int)StringAsStyle:(id)arg1;
- (int)StringAsUpdateBehavior:(id)arg1;
- (void)addCountryRegionWhitelist:(id)arg1;
- (void)addSupportedLanguage:(id)arg1;
- (void)addValidVersion:(id)arg1;
- (id)baseURL;
- (int)checksumType;
- (id)checksumTypeAsString:(int)arg1;
- (void)clearCountryRegionWhitelists;
- (void)clearSupportedLanguages;
- (void)clearValidVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)countryRegionWhitelistAtIndex:(unsigned long long)arg1;
- (id)countryRegionWhitelists;
- (unsigned long long)countryRegionWhitelistsCount;
- (unsigned int)dataSet;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBaseURL;
- (bool)hasChecksumType;
- (bool)hasDataSet;
- (bool)hasLocalizationURL;
- (bool)hasMultiTileURL;
- (bool)hasMultiTileURLUsesStatusCodes;
- (bool)hasRequestStyle;
- (bool)hasUpdateBehavior;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizationURL;
- (void)mergeFrom:(id)arg1;
- (id)multiTileURL;
- (bool)multiTileURLUsesStatusCodes;
- (bool)readFrom:(id)arg1;
- (int)requestStyle;
- (id)requestStyleAsString:(int)arg1;
- (int)scale;
- (id)scaleAsString:(int)arg1;
- (void)setBaseURL:(id)arg1;
- (void)setChecksumType:(int)arg1;
- (void)setCountryRegionWhitelists:(id)arg1;
- (void)setDataSet:(unsigned int)arg1;
- (void)setHasChecksumType:(bool)arg1;
- (void)setHasDataSet:(bool)arg1;
- (void)setHasMultiTileURLUsesStatusCodes:(bool)arg1;
- (void)setHasRequestStyle:(bool)arg1;
- (void)setHasUpdateBehavior:(bool)arg1;
- (void)setLocalizationURL:(id)arg1;
- (void)setMultiTileURL:(id)arg1;
- (void)setMultiTileURLUsesStatusCodes:(bool)arg1;
- (void)setRequestStyle:(int)arg1;
- (void)setScale:(int)arg1;
- (void)setSize:(int)arg1;
- (void)setStyle:(int)arg1;
- (void)setSupportedLanguages:(id)arg1;
- (void)setUpdateBehavior:(int)arg1;
- (void)setValidVersions:(id)arg1;
- (int)size;
- (id)sizeAsString:(int)arg1;
- (int)style;
- (id)styleAsString:(int)arg1;
- (id)supportedLanguageAtIndex:(unsigned long long)arg1;
- (id)supportedLanguages;
- (unsigned long long)supportedLanguagesCount;
- (id)unknownFields;
- (int)updateBehavior;
- (id)updateBehaviorAsString:(int)arg1;
- (id)validVersionAtIndex:(unsigned long long)arg1;
- (id)validVersions;
- (unsigned long long)validVersionsCount;
- (void)writeTo:(id)arg1;

@end
