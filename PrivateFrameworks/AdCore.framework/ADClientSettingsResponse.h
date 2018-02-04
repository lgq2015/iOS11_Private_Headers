/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADClientSettingsResponse : PBCodable <NSCopying> {
    double  _expirationDate;
    struct { 
        unsigned int expirationDate : 1; 
    }  _has;
    NSMutableArray * _searchAdsSettingsParams;
}

@property (nonatomic) double expirationDate;
@property (nonatomic) bool hasExpirationDate;
@property (nonatomic, retain) NSMutableArray *searchAdsSettingsParams;

+ (Class)searchAdsSettingsParamsType;

- (void).cxx_destruct;
- (void)addSearchAdsSettingsParams:(id)arg1;
- (void)clearSearchAdsSettingsParams;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)expirationDate;
- (bool)hasExpirationDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)searchAdsSettingsParams;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)searchAdsSettingsParamsCount;
- (void)setExpirationDate:(double)arg1;
- (void)setHasExpirationDate:(bool)arg1;
- (void)setSearchAdsSettingsParams:(id)arg1;
- (void)writeTo:(id)arg1;

@end
