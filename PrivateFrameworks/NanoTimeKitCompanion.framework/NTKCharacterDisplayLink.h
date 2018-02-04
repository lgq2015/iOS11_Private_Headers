/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterDisplayLink : NSObject {
    CADisplayLink * _displayLink;
    NTKCharacterTimeView * _timeView;
}

- (void).cxx_destruct;
- (void)drawView:(id)arg1;
- (id)initWithTarget:(id)arg1 loader:(id)arg2;
- (void)invalidate;
- (void)setAnimationFrameInterval:(long long)arg1;
- (void)setPaused:(bool)arg1;

@end
