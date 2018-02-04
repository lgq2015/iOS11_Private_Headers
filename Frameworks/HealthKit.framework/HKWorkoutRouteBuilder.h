/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutRouteBuilder : HKSeriesBuilder {
    HKWorkoutRoute * _route;
}

- (void).cxx_destruct;
- (void)_associateRoute:(id)arg1 toWorkout:(id)arg2 completion:(id /* block */)arg3;
- (void)_resourceQueue_discardWithHandler:(id /* block */)arg1;
- (void)_resourceQueue_finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (void)_resourceQueue_insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (bool)_validateRouteData:(id)arg1 error:(out id*)arg2;
- (void)dealloc;
- (void)finishRouteWithWorkout:(id)arg1 metadata:(id)arg2 completion:(id /* block */)arg3;
- (id)init;
- (id)initWithHealthStore:(id)arg1 device:(id)arg2;
- (void)insertRouteData:(id)arg1 completion:(id /* block */)arg2;
- (id)route;
- (void)setRoute:(id)arg1;

@end
