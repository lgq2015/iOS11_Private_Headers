/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDDisplayLink : NSObject {
    id /* block */  _completionBlock;
    CADisplayLink * _displayLink;
    double  _lastTime;
    double  _startTime;
    id /* block */  _tickBlock;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) double lastTime;
@property (nonatomic) double startTime;
@property (nonatomic, copy) id /* block */ tickBlock;

- (id /* block */)completionBlock;
- (void)dealloc;
- (double)lastTime;
- (void)p_handleDisplayLink:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setLastTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setTickBlock:(id /* block */)arg1;
- (void)start;
- (double)startTime;
- (void)teardown;
- (id /* block */)tickBlock;

@end
