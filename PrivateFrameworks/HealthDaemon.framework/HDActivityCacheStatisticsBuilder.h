/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDActivityCacheStatisticsBuilder : NSObject {
    struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { 
        struct HDActivityCacheActiveSource {} *__begin_; 
        struct HDActivityCacheActiveSource {} *__end_; 
        struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { 
            struct HDActivityCacheActiveSource {} *__first_; 
        } __end_cap_; 
    }  _activationLogSamples;
    struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { 
        struct HDActivityCacheActiveSource {} *__begin_; 
        struct HDActivityCacheActiveSource {} *__end_; 
        struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { 
            struct HDActivityCacheActiveSource {} *__first_; 
        } __end_cap_; 
    }  _activeSourcesList;
    double  _builderEndTime;
    double  _builderStartTime;
    double  _deepBreathingDurationValue;
    double  _intervalDuration;
    HKQuantity * _lastActiveEnergyValue;
    HKQuantity * _lastDistanceWalkingValue;
    NSNumber * _lastExerciseMinuteValue;
    NSNumber * _lastFlightsClimbedValue;
    NSNumber * _lastPushCountValue;
    NSNumber * _lastStandHourValue;
    NSNumber * _lastStepCountValue;
    NSString * _loggingName;
    <HDActivityCacheStatisticsBuilderSourceOrderDelegate> * _sourceOrderDelegate;
    struct map<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > >, std::__1::less<_HKDataTypeCode>, std::__1::allocator<std::__1::pair<const _HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > > > > { 
        struct __tree<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::less<_HKDataTypeCode>, true>, std::__1::allocator<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > > > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<_HKDataTypeCode, std::__1::__value_type<_HKDataTypeCode, std::__1::map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > >, std::__1::less<_HKDataTypeCode>, true> > { 
                unsigned long long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _sourceTotalsByIntervalIndexByTypeCode;
    struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > { 
        struct HDActivityCacheStatisticsBuilderStandHourSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderStandHourSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > { 
            struct HDActivityCacheStatisticsBuilderStandHourSample {} *__first_; 
        } __end_cap_; 
    }  _standHourSamples;
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__begin_; 
        struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__end_; 
        struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { 
            struct HDActivityCacheStatisticsBuilderWorkoutSample {} *__first_; 
        } __end_cap_; 
    }  _workouts;
}

@property (nonatomic) double intervalDuration;
@property (nonatomic) <HDActivityCacheStatisticsBuilderSourceOrderDelegate> *sourceOrderDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource {} *x1; struct HDActivityCacheActiveSource {} *x2; struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource {} *x_3_1_1; } x3; })_activeSourceVectorFromActivationLogSamples:(const struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample {} *x1; struct HDActivityCacheStatisticsBuilderSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample {} *x_3_1_1; } x3; }*)arg1;
- (void)_addSample:(struct HDActivityCacheStatisticsBuilderSample { double x1; double x2; double x3; long long x4; })arg1 toSourceTotals:(struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > { struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2 fromWorkout:(bool)arg3;
- (void)_addSamples:(const struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample {} *x1; struct HDActivityCacheStatisticsBuilderSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample {} *x_3_1_1; } x3; }*)arg1 toSourceTotals:(struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > { struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg2 fromWorkout:(bool)arg3;
- (void)_clearActiveSources;
- (void)_clearCachedValueForTypeCode:(long long)arg1;
- (id)_createStatisticsForType:(id)arg1 withIntervalComponents:(id)arg2 calendar:(id)arg3;
- (void)_loadActiveSourceList;
- (void)_logActiveSourcesList:(struct vector<HDActivityCacheActiveSource, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource {} *x1; struct HDActivityCacheActiveSource {} *x2; struct __compressed_pair<HDActivityCacheActiveSource *, std::__1::allocator<HDActivityCacheActiveSource> > { struct HDActivityCacheActiveSource {} *x_3_1_1; } x3; }*)arg1;
- (id)_loggingPrefix;
- (double)_maxTimestampInSourceTotals:(const struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > { struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (double)_minTimestampInSourceTotals:(const struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > { struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (void)_resetAllCachedValues;
- (bool)_sourceMapIsEmpty:(const struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > { struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1;
- (struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; })_sourceOrderForTypeCode:(long long)arg1;
- (double)_sumSourceTotals:(struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > { struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 orderedSources:(struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; })arg2;
- (double)_sumSourceTotals:(struct map<long long, _HDActivityCacheSourceTotal, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDActivityCacheSourceTotal> > > { struct __tree<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, _HDActivityCacheSourceTotal> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, _HDActivityCacheSourceTotal>, std::__1::less<long long>, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 orderedSources:(struct vector<long long, std::__1::allocator<long long> > { long long *x1; long long *x2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_1_1; } x3; })arg2 strictStartTime:(double)arg3 strictEndTime:(double)arg4;
- (id)_workoutIdentifiersStringForActiveSource:(struct HDActivityCacheActiveSource { double x1; long long x2; struct vector<long long, std::__1::allocator<long long> > { long long *x_3_1_1; long long *x_3_1_2; struct __compressed_pair<long long *, std::__1::allocator<long long> > { long long *x_3_2_1; } x_3_1_3; } x3; }*)arg1;
- (id)activeEnergyValue;
- (void)addActivationLogSamples:(const struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample {} *x1; struct HDActivityCacheStatisticsBuilderSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample {} *x_3_1_1; } x3; }*)arg1;
- (void)addDeepBreathingSessionDuration:(double)arg1;
- (void)addDeviceSample:(struct HDActivityCacheStatisticsBuilderSample { double x1; double x2; double x3; long long x4; })arg1 typeCode:(long long)arg2;
- (void)addDeviceSamples:(const struct vector<HDActivityCacheStatisticsBuilderSample, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample {} *x1; struct HDActivityCacheStatisticsBuilderSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderSample> > { struct HDActivityCacheStatisticsBuilderSample {} *x_3_1_1; } x3; }*)arg1 typeCode:(long long)arg2;
- (void)addStandHourSamples:(const struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > { struct HDActivityCacheStatisticsBuilderStandHourSample {} *x1; struct HDActivityCacheStatisticsBuilderStandHourSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderStandHourSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderStandHourSample> > { struct HDActivityCacheStatisticsBuilderStandHourSample {} *x_3_1_1; } x3; }*)arg1;
- (void)addWorkoutSample:(struct HDActivityCacheStatisticsBuilderSample { double x1; double x2; double x3; long long x4; })arg1 typeCode:(long long)arg2;
- (void)addWorkouts:(const struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x1; struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x2; struct __compressed_pair<HDActivityCacheStatisticsBuilderWorkoutSample *, std::__1::allocator<HDActivityCacheStatisticsBuilderWorkoutSample> > { struct HDActivityCacheStatisticsBuilderWorkoutSample {} *x_3_1_1; } x3; }*)arg1;
- (id)createExerciseStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2;
- (id)createMoveStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2;
- (id)createStandStatisticsWithCalendar:(id)arg1;
- (id)createStatisticsCollectionWithType:(id)arg1 intervalComponents:(id)arg2 calendar:(id)arg3;
- (double)deepBreathingDurationValue;
- (id)distanceWalkingValue;
- (long long)exerciseMinuteValue;
- (long long)flightsClimbedValue;
- (id)init;
- (id)initWithDateInterval:(id)arg1 loggingName:(id)arg2;
- (double)intervalDuration;
- (long long)pushCountValue;
- (void)setIntervalDuration:(double)arg1;
- (void)setSourceOrderDelegate:(id)arg1;
- (id)sourceOrderDelegate;
- (long long)standHourValue;
- (long long)stepCountValue;
- (id)workoutSamplesWithSourceManager:(id)arg1;

@end
