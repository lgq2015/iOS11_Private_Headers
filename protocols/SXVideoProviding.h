/* made by EzioChiu.
 */

@protocol SXVideoProviding <NSObject>

@required

- (id /* block */)loadWithCompletionBlock:(void *)arg1; // needs 1 arg types, found 10: id /* block */, void*, id, SEL, id /* block */, void*, <SXVideoMetadataProviding> *, id /* block */, NSURL *, void*

@optional

- (void)muteStateChanged:(bool)arg1;
- (void)playbackFailedWithError:(NSError *)arg1;
- (void)playbackFinished;
- (void)playbackInitiated;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)timeElapsed:(double)arg1 duration:(double)arg2;

@end
