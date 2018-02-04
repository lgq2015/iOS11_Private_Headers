/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTLightsAndSirensReplyInfoCache : NSObject {
    NSMutableDictionary * _localReplyInfo;
    NSObject<OS_dispatch_queue> * _queue;
    NSDate * _timeToCheck;
}

@property (nonatomic, retain) NSMutableDictionary *localReplyInfo;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSDate *timeToCheck;

+ (id)sharedReplyCache;

- (void).cxx_destruct;
- (void)_addReplyInfo:(id)arg1 forReplyToken:(id)arg2;
- (void)_checkCache;
- (id)_firstReplyInfoWithNoDidPlayStateWithReplyToken:(id)arg1;
- (id)_firstReplyInfoWithNoReplyWithReplyToken:(id)arg1;
- (bool)_isTimeToCheck;
- (void)_setNextTimeToCheck;
- (id)cacheDidPlayLightsAndSirens:(unsigned long long)arg1 withReplyToken:(id)arg2;
- (void)cacheReply:(id /* block */)arg1 withSectionID:(id)arg2 bulletinID:(id)arg3 publicationDate:(id)arg4 replyToken:(id)arg5;
- (id)init;
- (id)localReplyInfo;
- (void)purgeReplyInfo:(id)arg1 withReplyToken:(id)arg2;
- (id)queue;
- (void)setLocalReplyInfo:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setTimeToCheck:(id)arg1;
- (id)timeToCheck;

@end
