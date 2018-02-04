/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCGreatStoriesYouMissedGroupEmitterOperation : FCFeedGroupEmittingOperation {
    unsigned long long  _limit;
    unsigned long long  _restrictToBestSourceFeeds;
}

@property (nonatomic) unsigned long long limit;
@property (nonatomic) unsigned long long restrictToBestSourceFeeds;

- (id)_feedTransformation;
- (id)initWithContext:(id)arg1 cursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4;
- (id)initWithContext:(id)arg1 cursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 limit:(unsigned long long)arg5 restrictToBestSourceFeeds:(bool)arg6;
- (unsigned long long)limit;
- (void)performOperation;
- (unsigned long long)restrictToBestSourceFeeds;
- (void)setLimit:(unsigned long long)arg1;
- (void)setRestrictToBestSourceFeeds:(unsigned long long)arg1;

@end
