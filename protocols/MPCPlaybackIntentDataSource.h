/* made by EzioChiu.
 */

@protocol MPCPlaybackIntentDataSource <NSObject>

@required

- (void)getPlaybackContextForIntent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: MPCPlaybackIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPPlaybackContext *, NSError *, void*
- (void)getRemotePlaybackQueueForIntent:(void *)arg1 playerPath:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 9: MPCPlaybackIntent *, MPCPlayerPath *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MPRemotePlaybackQueue *, NSError *, void*

@end
