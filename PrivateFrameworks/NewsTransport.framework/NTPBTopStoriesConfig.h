/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBTopStoriesConfig : PBCodable <NSCopying> {
    long long  _badgesTimeout;
    NSString * _channelId;
    long long  _cutoffTime;
    struct { 
        unsigned int badgesTimeout : 1; 
        unsigned int cutoffTime : 1; 
        unsigned int maximumArticleCount : 1; 
        unsigned int pinningEnabled : 1; 
        unsigned int promotingEnabled : 1; 
    }  _has;
    long long  _maximumArticleCount;
    bool  _pinningEnabled;
    bool  _promotingEnabled;
    NSMutableArray * _styleConfigs;
}

@property (nonatomic) long long badgesTimeout;
@property (nonatomic, retain) NSString *channelId;
@property (nonatomic) long long cutoffTime;
@property (nonatomic) bool hasBadgesTimeout;
@property (nonatomic, readonly) bool hasChannelId;
@property (nonatomic) bool hasCutoffTime;
@property (nonatomic) bool hasMaximumArticleCount;
@property (nonatomic) bool hasPinningEnabled;
@property (nonatomic) bool hasPromotingEnabled;
@property (nonatomic) long long maximumArticleCount;
@property (nonatomic) bool pinningEnabled;
@property (nonatomic) bool promotingEnabled;
@property (nonatomic, retain) NSMutableArray *styleConfigs;

+ (Class)styleConfigsType;

- (void).cxx_destruct;
- (void)addStyleConfigs:(id)arg1;
- (long long)badgesTimeout;
- (id)channelId;
- (void)clearStyleConfigs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cutoffTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBadgesTimeout;
- (bool)hasChannelId;
- (bool)hasCutoffTime;
- (bool)hasMaximumArticleCount;
- (bool)hasPinningEnabled;
- (bool)hasPromotingEnabled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)maximumArticleCount;
- (void)mergeFrom:(id)arg1;
- (bool)pinningEnabled;
- (bool)promotingEnabled;
- (bool)readFrom:(id)arg1;
- (void)setBadgesTimeout:(long long)arg1;
- (void)setChannelId:(id)arg1;
- (void)setCutoffTime:(long long)arg1;
- (void)setHasBadgesTimeout:(bool)arg1;
- (void)setHasCutoffTime:(bool)arg1;
- (void)setHasMaximumArticleCount:(bool)arg1;
- (void)setHasPinningEnabled:(bool)arg1;
- (void)setHasPromotingEnabled:(bool)arg1;
- (void)setMaximumArticleCount:(long long)arg1;
- (void)setPinningEnabled:(bool)arg1;
- (void)setPromotingEnabled:(bool)arg1;
- (void)setStyleConfigs:(id)arg1;
- (id)styleConfigs;
- (id)styleConfigsAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleConfigsCount;
- (void)writeTo:(id)arg1;

@end
