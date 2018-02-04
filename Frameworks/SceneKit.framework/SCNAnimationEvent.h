/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAnimationEvent : NSObject {
    id /* block */  _eventBlock;
    double  _eventTime;
}

+ (id)animationEventWithKeyTime:(double)arg1 block:(id /* block */)arg2;

- (void)dealloc;
- (id /* block */)eventBlock;
- (id)init;
- (void)setEventBlock:(id /* block */)arg1;
- (void)setTime:(double)arg1;
- (double)time;

@end
