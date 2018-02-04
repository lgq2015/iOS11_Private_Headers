/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNDisplayLink : NSObject {
    id /* block */  _adaptativeFrameDuration;
    id /* block */  _block;
    CADisplayLink * _caDisplayLink;
    bool  _invalidated;
    double  _lastFrameTime;
    bool  _paused;
    float  _preferredFrameRate;
    NSObject<OS_dispatch_queue> * _queue;
    int  _queuedFrameCount;
    bool  _supportTargetTimestamp;
}

@property (nonatomic, copy) id /* block */ adaptativeFrameRate;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) float preferredFrameRate;

- (void)_caDisplayLinkCallback;
- (void)_callbackWithTime:(double)arg1;
- (void)_cleanup;
- (bool)_isInvalidated;
- (id /* block */)adaptativeFrameRate;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1 block:(id /* block */)arg2;
- (void)invalidate;
- (bool)isPaused;
- (float)preferredFrameRate;
- (int)queuedFrameCount;
- (void)setAdaptativeFrameRate:(id /* block */)arg1;
- (void)setNeedsDisplay;
- (void)setPaused:(bool)arg1;
- (bool)setPaused:(bool)arg1 nextFrameTimeHint:(double)arg2 lastUpdate:(double)arg3;
- (void)setPreferredFrameRate:(float)arg1;

@end
