/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBSearchBegin : PBCodable <NSCopying> {
    NSString * _campaignId;
    NSString * _campaignType;
    NSString * _creativeId;
    struct { 
        unsigned int searchLocation : 1; 
    }  _has;
    int  _searchLocation;
}

@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic, readonly) bool hasCampaignId;
@property (nonatomic, readonly) bool hasCampaignType;
@property (nonatomic, readonly) bool hasCreativeId;
@property (nonatomic) bool hasSearchLocation;
@property (nonatomic) int searchLocation;

- (void).cxx_destruct;
- (int)StringAsSearchLocation:(id)arg1;
- (id)campaignId;
- (id)campaignType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCampaignId;
- (bool)hasCampaignType;
- (bool)hasCreativeId;
- (bool)hasSearchLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)searchLocation;
- (id)searchLocationAsString:(int)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setHasSearchLocation:(bool)arg1;
- (void)setSearchLocation:(int)arg1;
- (void)writeTo:(id)arg1;

@end
