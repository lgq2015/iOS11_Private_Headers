/* made by EzioChiu.
 */

@protocol MPQueueFeederDelegate <NSObject>

@required

- (void)queueFeeder:(MPQueueFeeder *)arg1 didChangeContentsWithPreferredStartIndex:(unsigned long long)arg2 error:(NSError *)arg3;
- (void)queueFeeder:(MPQueueFeeder *)arg1 didChangeContentsWithReplacementPlaybackContext:(MPPlaybackContext *)arg2;
- (void)queueFeederDidInvalidateAssets:(MPQueueFeeder *)arg1;
- (void)queueFeederDidInvalidateRealRepeatType:(MPQueueFeeder *)arg1;
- (void)queueFeederDidInvalidateRealShuffleType:(MPQueueFeeder *)arg1;
- (void)queueFeederDidReplaceItem:(MPQueueFeeder *)arg1;

@end
