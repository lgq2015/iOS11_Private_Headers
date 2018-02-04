/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKSimpleTimer : NSObject {
    id  _delegate;
    double  _interval;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    double  _startTime;
    NSObject<OS_dispatch_source> * _timerSource;
    bool  _timerSourceSet;
}

@property (nonatomic) <GKSimpleTimerDelegate> *delegate;
@property (nonatomic, readonly) double interval;

- (void)dealloc;
- (id)delegate;
- (void)fireIn:(double)arg1 fromNow:(double)arg2;
- (id)init;
- (double)interval;
- (void)invalidate;
- (void)setDelegate:(id)arg1;
- (void)setTimer:(double)arg1;

@end
