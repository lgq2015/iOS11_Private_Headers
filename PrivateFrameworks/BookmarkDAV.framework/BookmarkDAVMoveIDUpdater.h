/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVMoveIDUpdater : NSObject {
    void * _database;
}

+ (void)rewriteOrderedPayloadsFromProvider:(id /* block */)arg1;

- (void)_recursivelyRewriteServerIDsForItemWithServerID:(id)arg1 newParentID:(id)arg2 mutableMap:(id)arg3;
- (void)_recursivelyRewriteServerIDsInMutableMap:(id)arg1 sortingHint:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithDatabase:(void*)arg1;
- (void)recursivelyRewriteServerIDsForItemWithServerID:(id)arg1 newParentID:(id)arg2;
- (void)recursivelyRewriteServerIDsInMap:(id)arg1;

@end
