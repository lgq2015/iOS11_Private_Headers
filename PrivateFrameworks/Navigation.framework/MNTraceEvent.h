/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceEvent : NSObject {
    NSString * _cachedPrimaryDescription;
    NSString * _cachedSecondaryDescription;
    double  _distanceToStartOfManeuver;
    NSDictionary * _eventData;
    unsigned long long  _eventType;
    MNLocation * _location;
    unsigned long long  _stage;
    unsigned long long  _stepIndex;
    double  _timeSinceStartOfRoute;
}

@property (nonatomic, readonly) double distanceToStartOfManeuver;
@property (nonatomic, retain) NSDictionary *eventData;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, readonly) MNLocation *location;
@property (nonatomic, readonly) NSString *primaryDescription;
@property (nonatomic, readonly) NSString *secondaryDescription;
@property (nonatomic, readonly) unsigned long long stage;
@property (nonatomic, readonly) unsigned long long stepIndex;
@property (nonatomic, readonly) double timeSinceStartOfRoute;

- (void).cxx_destruct;
- (void)_calculateDescription;
- (id)description;
- (double)distanceToStartOfManeuver;
- (id)eventData;
- (unsigned long long)eventType;
- (id)initWithTime:(double)arg1 stepIndex:(unsigned long long)arg2 stage:(unsigned long long)arg3 distance:(double)arg4 location:(id)arg5 eventType:(unsigned long long)arg6 eventData:(id)arg7;
- (id)instructionsFromSignDescription:(id)arg1;
- (id)location;
- (id)primaryDescription;
- (id)secondaryDescription;
- (void)setEventData:(id)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (id)shieldToText:(id)arg1;
- (unsigned long long)stage;
- (unsigned long long)stepIndex;
- (id)stringByInstructions:(id)arg1;
- (double)timeSinceStartOfRoute;

@end
