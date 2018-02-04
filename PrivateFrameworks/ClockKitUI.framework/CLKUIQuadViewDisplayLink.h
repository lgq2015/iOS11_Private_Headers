/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

@interface CLKUIQuadViewDisplayLink : NSObject {
    CADisplayLink * _displayLink;
    CLKUIQuadView * _quadView;
}

- (void).cxx_destruct;
- (void)_displayLinkFired:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (void)invalidate;
- (bool)isPaused;
- (unsigned long long)preferredFramesPerSecond;
- (void)setPaused:(bool)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;

@end