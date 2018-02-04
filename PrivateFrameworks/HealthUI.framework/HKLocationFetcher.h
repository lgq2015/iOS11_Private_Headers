/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKLocationFetcher : NSObject {
    HKHealthStore * _healthStore;
    HKAnchoredObjectQuery * _locationSeriesQuery;
    _HKLocationSeriesStore * _seriesSamplesStore;
    _HKLocationShifter * _shifter;
}

@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) _HKLocationSeriesStore *seriesSamplesStore;

- (void).cxx_destruct;
- (void)_handleAndShiftLocations:(id)arg1 forWorkout:(id)arg2 withSamplesHandler:(id /* block */)arg3;
- (id)_locationSeriesQueryForWorkout:(id)arg1 withUpdateHandler:(id /* block */)arg2;
- (bool)_seriesAreSmoothed:(id)arg1;
- (void)dealloc;
- (void)fetchLocationsFromWorkout:(id)arg1 applyThreshold:(bool)arg2 withSamplesHandler:(id /* block */)arg3;
- (void)fetchLocationsFromWorkout:(id)arg1 withSamplesHandler:(id /* block */)arg2;
- (void)fetchSeriesSamplesFromWorkout:(id)arg1 withUpdateHandler:(id /* block */)arg2;
- (id)healthStore;
- (id)initWithHealthStore:(id)arg1;
- (id)seriesSamplesStore;
- (void)setHealthStore:(id)arg1;
- (void)setSeriesSamplesStore:(id)arg1;

@end
