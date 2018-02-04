/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBCoverArticlesConfig : PBCodable <NSCopying> {
    NSString * _feedId;
}

@property (nonatomic, retain) NSString *feedId;
@property (nonatomic, readonly) bool hasFeedId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (bool)hasFeedId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
