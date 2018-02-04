/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCFeedItemFeature : NSObject <NSCopying> {
    NSString * _key;
    bool  _queryable;
    long long  _type;
}

@property (nonatomic, readonly) NSString *key;
@property (nonatomic) bool queryable;
@property (nonatomic, readonly) NSString *topicID;
@property (nonatomic, readonly) long long type;

+ (id)featureForAllArticles;
+ (id)featureForCoverArt;
+ (id)featureForPaidCoverArt;
+ (id)featureForTopicID:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithType:(long long)arg1 key:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (bool)queryable;
- (void)setQueryable:(bool)arg1;
- (id)topicID;
- (long long)type;

@end
