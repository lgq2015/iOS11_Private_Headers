/* made by EzioChiu.
 */

@protocol _HKWorkoutSessionDelegate <NSObject>

@required

- (void)workoutSession:(_HKWorkoutSession *)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(NSDate *)arg4;
- (void)workoutSession:(_HKWorkoutSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)workoutSession:(_HKWorkoutSession *)arg1 didGenerateEvent:(_HKWorkoutEvent *)arg2;
- (void)workoutSession:(_HKWorkoutSession *)arg1 didUpdateMetrics:(NSDictionary *)arg2;

@end
