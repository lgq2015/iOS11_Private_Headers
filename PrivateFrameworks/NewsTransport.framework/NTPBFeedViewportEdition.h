/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewportEdition : PBCodable <NSCopying> {
    NTPBDate * _feedDateRangeEnd;
    NTPBDate * _feedDateRangeStart;
    NTPBDate * _keyDate;
}

@property (nonatomic, retain) NTPBDate *feedDateRangeEnd;
@property (nonatomic, retain) NTPBDate *feedDateRangeStart;
@property (nonatomic, readonly) bool hasFeedDateRangeEnd;
@property (nonatomic, readonly) bool hasFeedDateRangeStart;
@property (nonatomic, readonly) bool hasKeyDate;
@property (nonatomic, retain) NTPBDate *keyDate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedDateRangeEnd;
- (id)feedDateRangeStart;
- (bool)hasFeedDateRangeEnd;
- (bool)hasFeedDateRangeStart;
- (bool)hasKeyDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)keyDate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedDateRangeEnd:(id)arg1;
- (void)setFeedDateRangeStart:(id)arg1;
- (void)setKeyDate:(id)arg1;
- (void)writeTo:(id)arg1;

@end
