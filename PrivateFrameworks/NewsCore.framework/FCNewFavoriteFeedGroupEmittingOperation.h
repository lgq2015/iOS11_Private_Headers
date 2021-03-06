/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNewFavoriteFeedGroupEmittingOperation : FCFeedGroupEmittingOperation

- (void)_buildGroupWithCandidateTags:(id)arg1 exhaustedTagIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_buildGroupWithTag:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)_ignoredTagIDs;
- (void)performOperation;

@end
