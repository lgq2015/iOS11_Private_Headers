/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDAddress : PBCodable <NSCopying> {
    struct { 
        unsigned int knownAccuracy : 1; 
    }  _has;
    int  _knownAccuracy;
    NSMutableArray * _localizedAddress;
    NSMutableArray * _spokenNavigationAddress;
    NSMutableArray * _spokenStructuredAddress;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasKnownAccuracy;
@property (nonatomic) int knownAccuracy;
@property (nonatomic, retain) NSMutableArray *localizedAddress;
@property (nonatomic, retain) NSMutableArray *spokenNavigationAddress;
@property (nonatomic, retain) NSMutableArray *spokenStructuredAddress;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)localizedAddressType;
+ (Class)spokenNavigationAddressType;
+ (Class)spokenStructuredAddressType;

- (void).cxx_destruct;
- (int)StringAsKnownAccuracy:(id)arg1;
- (void)addLocalizedAddress:(id)arg1;
- (void)addSpokenNavigationAddress:(id)arg1;
- (void)addSpokenStructuredAddress:(id)arg1;
- (void)clearLocalizedAddress;
- (void)clearSpokenNavigationAddress;
- (void)clearSpokenStructuredAddress;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKnownAccuracy;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)knownAccuracy;
- (id)knownAccuracyAsString:(int)arg1;
- (id)localizedAddress;
- (id)localizedAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)localizedAddressCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasKnownAccuracy:(bool)arg1;
- (void)setKnownAccuracy:(int)arg1;
- (void)setLocalizedAddress:(id)arg1;
- (void)setSpokenNavigationAddress:(id)arg1;
- (void)setSpokenStructuredAddress:(id)arg1;
- (id)spokenNavigationAddress;
- (id)spokenNavigationAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenNavigationAddressCount;
- (id)spokenStructuredAddress;
- (id)spokenStructuredAddressAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenStructuredAddressCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
