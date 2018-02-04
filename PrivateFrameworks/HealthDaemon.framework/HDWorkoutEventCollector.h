/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDWorkoutEventCollector : NSObject {
    <HDWorkoutEventCollectorDelegate> * _delegate;
    HDProfile * _profile;
    NSUUID * _sessionId;
}

@property (readonly) <HDWorkoutEventCollectorDelegate> *delegate;
@property (readonly) HDProfile *profile;
@property (readonly) NSUUID *sessionId;

+ (bool)isAvailableInCurrentHardware;

- (void).cxx_destruct;
- (id)delegate;
- (void)immediateUpdateWithCompletion:(id /* block */)arg1;
- (id)initWithProfile:(id)arg1 delegate:(id)arg2;
- (id)profile;
- (id)sessionId;
- (void)startWithSessionId:(id)arg1;
- (void)stop;
- (bool)supportsWorkoutActivityType:(unsigned long long)arg1;

@end
