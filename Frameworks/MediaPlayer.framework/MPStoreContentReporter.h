/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreContentReporter : NSObject {
    NSOperationQueue * _operationQueue;
    NSDictionary * _reportConcernBagDictionary;
}

+ (id)sharedReporter;

- (void).cxx_destruct;
- (id)_deleteCommentURLComponentsFromBag:(id)arg1;
- (id)_deletePostURLComponentsFromBag:(id)arg1;
- (id)_dictionariesForType:(long long)arg1;
- (void)_performWithBag:(id /* block */)arg1;
- (id)_reportConcernBagDictionary;
- (id)baseURLStringForReport;
- (void)deleteComment:(id)arg1 activityID:(id)arg2 completion:(id /* block */)arg3;
- (void)deletePost:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)reportsForType:(long long)arg1 contentID:(id)arg2 aucType:(id)arg3 commentText:(id)arg4;
- (void)submitReport:(id)arg1 completion:(id /* block */)arg2;

@end
