/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMediaLibraryAdamIDCache : NSObject {
    NSMutableSet * _adamIDs;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _isPopulated;
}

+ (id)sharedCache;

- (void)_libraryChangedNotification:(id)arg1;
- (void)_populateCache;
- (void)dealloc;
- (void)getContainsAdamID:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getIntersectionWithSet:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getProperties:(id)arg1 ofAdamIDs:(id)arg2 withCompletionBlock:(id /* block */)arg3;
- (id)init;
- (void)populateCache;

@end
