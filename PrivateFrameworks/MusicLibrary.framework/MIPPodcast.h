/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface MIPPodcast : PBCodable <NSCopying> {
    MIPArtist * _artist;
    NSString * _externalGuid;
    NSString * _feedUrl;
    MIPSeries * _series;
}

@property (nonatomic, retain) MIPArtist *artist;
@property (nonatomic, retain) NSString *externalGuid;
@property (nonatomic, retain) NSString *feedUrl;
@property (nonatomic, readonly) bool hasArtist;
@property (nonatomic, readonly) bool hasExternalGuid;
@property (nonatomic, readonly) bool hasFeedUrl;
@property (nonatomic, readonly) bool hasSeries;
@property (nonatomic, retain) MIPSeries *series;

- (void).cxx_destruct;
- (id)artist;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)externalGuid;
- (id)feedUrl;
- (bool)hasArtist;
- (bool)hasExternalGuid;
- (bool)hasFeedUrl;
- (bool)hasSeries;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)series;
- (void)setArtist:(id)arg1;
- (void)setExternalGuid:(id)arg1;
- (void)setFeedUrl:(id)arg1;
- (void)setSeries:(id)arg1;
- (void)writeTo:(id)arg1;

@end
