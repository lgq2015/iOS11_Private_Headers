/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STWorkoutSetStateRequest : AFSiriRequest {
    long long  _workoutState;
}

+ (bool)supportsSecureCoding;

- (id)_initWithState:(long long)arg1;
- (id)createResponse;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)workoutState;

@end
