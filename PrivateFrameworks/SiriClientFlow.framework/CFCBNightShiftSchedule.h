/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCBNightShiftSchedule : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CFCBNightShiftTransitionTime *fromTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) CFCBNightShiftTransitionTime *toTime;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftSchedule;
+ (id)nightShiftScheduleWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fromTime;
- (id)groupIdentifier;
- (void)setFromTime:(id)arg1;
- (void)setToTime:(id)arg1;
- (id)toTime;

@end
