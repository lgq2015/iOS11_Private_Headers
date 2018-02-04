/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTCatchUpOperationForYouRequest : NSObject <NSCopying> {
    long long  _cutoffTime;
    long long  _fetchingBin;
    unsigned long long  _headlinesPerFeedFetchCount;
    NSSet * _hiddenFeedIDs;
    NSSet * _mutedTagIDs;
    NSSet * _purchasedTagIDs;
    NSSet * _subscribedTagIDs;
    NSString * _topStoriesChannelID;
}

@property (nonatomic, readonly) long long cutoffTime;
@property (nonatomic, readonly) long long fetchingBin;
@property (nonatomic, readonly) unsigned long long headlinesPerFeedFetchCount;
@property (nonatomic, readonly, copy) NSSet *hiddenFeedIDs;
@property (nonatomic, readonly, copy) NSSet *mutedTagIDs;
@property (nonatomic, readonly, copy) NSSet *purchasedTagIDs;
@property (nonatomic, readonly, copy) NSSet *subscribedTagIDs;
@property (nonatomic, readonly, copy) NSString *topStoriesChannelID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)cutoffTime;
- (long long)fetchingBin;
- (unsigned long long)headlinesPerFeedFetchCount;
- (id)hiddenFeedIDs;
- (id)init;
- (id)initWithForYouTodaySectionSpecificConfig:(id)arg1 topStoriesChannelID:(id)arg2 hiddenFeedIDs:(id)arg3 mutedTagIDs:(id)arg4 purchasedTagIDs:(id)arg5 subscribedTagIDs:(id)arg6;
- (id)mutedTagIDs;
- (id)purchasedTagIDs;
- (id)subscribedTagIDs;
- (id)topStoriesChannelID;

@end
