/* made by EzioChiu.
 */

@protocol MPPlayableContentDelegate <NSObject>

@optional

- (void)playableContentManager:(MPPlayableContentManager *)arg1 didUpdateContext:(MPPlayableContentManagerContext *)arg2;
- (void)playableContentManager:(void *)arg1 initializePlaybackQueueWithCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: MPPlayableContentManager *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)playableContentManager:(void *)arg1 initializePlaybackQueueWithContentItems:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MPPlayableContentManager *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)playableContentManager:(void *)arg1 initiatePlaybackOfContentItemAtIndexPath:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MPPlayableContentManager *, NSIndexPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
