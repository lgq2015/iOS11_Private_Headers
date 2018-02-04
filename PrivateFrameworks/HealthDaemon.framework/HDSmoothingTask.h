/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSmoothingTask : NSObject {
    id /* block */  _completionHandler;
    HKWorkoutRoute * _sample;
    long long  _smoothingAttempts;
    NSArray * _unsmoothedLocations;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) HKWorkoutRoute *sample;
@property long long smoothingAttempts;
@property (nonatomic, retain) NSArray *unsmoothedLocations;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (id)description;
- (id)initWithRoute:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)sample;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setSample:(id)arg1;
- (void)setSmoothingAttempts:(long long)arg1;
- (void)setUnsmoothedLocations:(id)arg1;
- (long long)smoothingAttempts;
- (id)unsmoothedLocations;

@end
