/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISRateCurveRequest : NSObject {
    ISAVPlayer * _avPlayer;
    id  _boundaryObserver;
    bool  _cancelled;
    double  _duration;
    float  _initialRate;
    id /* block */  _progressHandler;
    double  _startTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _startVideoTime;
    long long  _stepIndex;
    double  _stepInterval;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetTime;
}

@property (nonatomic, readonly) ISAVPlayer *avPlayer;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) float initialRate;
@property (nonatomic, readonly, copy) id /* block */ progressHandler;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } targetTime;

- (void).cxx_destruct;
- (void)_didReachTargetTime;
- (void)_stepDownRate;
- (void)_stopObservingPlayer;
- (id)avPlayer;
- (void)cancel;
- (void)dealloc;
- (double)duration;
- (id)initWithTargetTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 duration:(double)arg2 initialRate:(float)arg3 avPlayer:(id)arg4 progressHandler:(id /* block */)arg5;
- (float)initialRate;
- (id /* block */)progressHandler;
- (void)start;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetTime;

@end
