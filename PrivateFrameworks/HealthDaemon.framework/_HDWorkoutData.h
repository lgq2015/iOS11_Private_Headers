/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDWorkoutData : NSObject {
    HDBackgroundWorkoutRunner * _backgroundRunner;
    HDXPCClient * _client;
    CMWorkout * _cmWorkout;
    NSMutableArray * _events;
    bool  _isFirstParty;
    HDHealthStoreServer * _server;
    _HKWorkoutSession * _workoutSession;
}

@property (nonatomic, retain) HDBackgroundWorkoutRunner *backgroundRunner;
@property (nonatomic, readonly) HDXPCClient *client;
@property (nonatomic, retain) CMWorkout *cmWorkout;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSArray *events;
@property (nonatomic, readonly) bool isFirstParty;
@property (nonatomic) HDHealthStoreServer *server;
@property (nonatomic, readonly) _HKWorkoutSession *workoutSession;

- (void).cxx_destruct;
- (id)backgroundRunner;
- (id)client;
- (id)cmWorkout;
- (void)deliverChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3;
- (void)deliverError:(id)arg1;
- (void)deliverEvent:(id)arg1;
- (void)deliverMetrics:(id)arg1;
- (double)duration;
- (id)events;
- (id)getSnapshot;
- (id)initWithWorkoutSession:(id)arg1 client:(id)arg2 server:(id)arg3 isFirstParty:(bool)arg4;
- (bool)isFirstParty;
- (id)server;
- (void)setBackgroundRunner:(id)arg1;
- (void)setCmWorkout:(id)arg1;
- (void)setServer:(id)arg1;
- (id)workoutSession;

@end
