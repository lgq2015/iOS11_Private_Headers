/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCSingleTagFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)_fetchOrdinaryHeadlinesWithCompletionHandler:(id /* block */)arg1;
- (void)_fetchPinnedHeadlinesWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)feedItemsToFetchForDesiredHeadlineCount:(unsigned long long)arg1;
- (id)feedTransformations;
- (void)performOperation;
- (void)supplementFeedItems:(id)arg1 fromCursor:(id)arg2 completionHandler:(id /* block */)arg3;

@end
