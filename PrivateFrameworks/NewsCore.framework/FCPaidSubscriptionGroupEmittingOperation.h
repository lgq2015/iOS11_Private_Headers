/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPaidSubscriptionGroupEmittingOperation : FCFeedGroupEmittingOperation

@property (nonatomic, retain) FCPaidSubscriptionCursor *cursor;
@property (nonatomic, retain) FCPaidSubscriptionCursor *resultCursor;
@property (nonatomic, retain) FCPaidSubscriptionCursor *toCursor;

- (id)_additionalFeedItemsTransformationLimitedToNumberOfFeedItems:(unsigned long long)arg1;
- (void)_constructGroupForChannelWithIdentifier:(id)arg1 usingFeedItems:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)_feedItemsTransformation;
- (void)_fetchAdditionalFeedItemsForChannel:(id)arg1 feedRange:(id)arg2 block:(id /* block */)arg3;
- (void)_fetchHeadlinesForFeedItems:(id)arg1 feedContextByFeedID:(id)arg2 block:(id /* block */)arg3;
- (void)_fetchTagForSourceChannelIdentifier:(id)arg1 block:(id /* block */)arg2;
- (bool)alwaysShowExpiredGroups;
- (void)performOperation;
- (bool)unlimitedBackfill;

@end
