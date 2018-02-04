/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicQuickPlayQueueFeeder : MPQueueFeeder {
    MPPlaceholderAVItem * _placeholderItem;
    NSOperationQueue * _requestQueue;
}

- (void).cxx_destruct;
- (void)_beginQuickPlayWithURL:(id)arg1;
- (void)_failQueueLoadWithError:(id)arg1 orReason:(id)arg2;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)itemCount;
- (id)itemForIdentifier:(id)arg1;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end
