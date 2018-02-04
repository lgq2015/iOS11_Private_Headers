/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBHeadlineAnalyticsElement : PBCodable <NSCopying> {
    NSString * _articleID;
    long long  _articleVersion;
    NSString * _channelID;
    struct { 
        unsigned int articleVersion : 1; 
        unsigned int needsSeenStateTracking : 1; 
    }  _has;
    bool  _needsSeenStateTracking;
    NSString * _preseenCountTrackingIdentifier;
}

@property (nonatomic, retain) NSString *articleID;
@property (nonatomic) long long articleVersion;
@property (nonatomic, retain) NSString *channelID;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic) bool hasArticleVersion;
@property (nonatomic, readonly) bool hasChannelID;
@property (nonatomic) bool hasNeedsSeenStateTracking;
@property (nonatomic, readonly) bool hasPreseenCountTrackingIdentifier;
@property (nonatomic) bool needsSeenStateTracking;
@property (nonatomic, retain) NSString *preseenCountTrackingIdentifier;

- (void).cxx_destruct;
- (id)articleID;
- (long long)articleVersion;
- (id)channelID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleID;
- (bool)hasArticleVersion;
- (bool)hasChannelID;
- (bool)hasNeedsSeenStateTracking;
- (bool)hasPreseenCountTrackingIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)needsSeenStateTracking;
- (id)preseenCountTrackingIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setArticleVersion:(long long)arg1;
- (void)setChannelID:(id)arg1;
- (void)setHasArticleVersion:(bool)arg1;
- (void)setHasNeedsSeenStateTracking:(bool)arg1;
- (void)setNeedsSeenStateTracking:(bool)arg1;
- (void)setPreseenCountTrackingIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
