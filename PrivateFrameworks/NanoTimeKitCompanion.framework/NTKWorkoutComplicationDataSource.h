/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKWorkoutComplicationDataSource : NTKComplicationDataSource {
    _HKFirstPartyWorkoutSnapshot * _activeWorkoutSnapshot;
    NSArray * _animationImages;
    bool  _deviceIsLocked;
    bool  _frozen;
    bool  _hasKnownLastWorkoutState;
    NSObject<OS_dispatch_queue> * _healthQueue;
    HKHealthStore * _healthStore;
    HKWorkout * _lastWorkout;
    HKSampleQuery * _lastWorkoutQuery;
    bool  _loadingLastWorkout;
    int  _lockStateNotifyToken;
    HKObserverQuery * _workoutObservationQuery;
    int  _workoutStateNotifyToken;
}

@property (nonatomic, retain) _HKFirstPartyWorkoutSnapshot *activeWorkoutSnapshot;
@property (nonatomic) bool hasKnownLastWorkoutState;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKWorkout *lastWorkout;
@property (nonatomic, retain) HKSampleQuery *lastWorkoutQuery;
@property (getter=isLoadingLastWorkout, nonatomic) bool loadingLastWorkout;
@property (nonatomic, retain) HKObserverQuery *workoutObservationQuery;

+ (id)_templateForWorkout:(id)arg1 family:(long long)arg2;
+ (id)_unknownTemplateForFamily:(long long)arg1;
+ (id)_workoutTintColor;
+ (bool)acceptsComplicationFamily:(long long)arg1;
+ (bool)acceptsComplicationType:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_animationImages;
- (void)_handleDeviceLockChange;
- (bool)_hasActiveWorkout;
- (bool)_hasPausedActiveWorkout;
- (void)_invalidate;
- (id)_makeAnimatedImageProvider;
- (id)_makeLastWorkoutQuery;
- (id)_makeObservationQuery;
- (id)_noWorkoutsTemplate;
- (void)_startLastWorkoutQueryIfPossible;
- (void)_startObserving;
- (void)_stopLastWorkoutQuerySynchronously:(bool)arg1;
- (void)_stopObservingSynchronously:(bool)arg1;
- (id)_templateForActiveWorkout;
- (void)_updateActiveWorkoutState;
- (id)activeWorkoutSnapshot;
- (id)complicationApplicationIdentifier;
- (id)currentSwitcherTemplate;
- (void)dealloc;
- (void)getCurrentTimelineEntryWithHandler:(id /* block */)arg1;
- (void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(id /* block */)arg3;
- (void)getSupportedTimeTravelDirectionsWithHandler:(id /* block */)arg1;
- (bool)hasKnownLastWorkoutState;
- (id)healthStore;
- (id)initWithComplication:(id)arg1 family:(long long)arg2;
- (bool)isLoadingLastWorkout;
- (id)lastWorkout;
- (id)lastWorkoutQuery;
- (id)lockedTemplate;
- (void)pause;
- (void)resume;
- (void)setActiveWorkoutSnapshot:(id)arg1;
- (void)setHasKnownLastWorkoutState:(bool)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setLastWorkout:(id)arg1;
- (void)setLastWorkoutQuery:(id)arg1;
- (void)setLoadingLastWorkout:(bool)arg1;
- (void)setWorkoutObservationQuery:(id)arg1;
- (id)workoutObservationQuery;

@end
