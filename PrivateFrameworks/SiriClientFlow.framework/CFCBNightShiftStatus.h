/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
 */

@interface CFCBNightShiftStatus : SADomainCommand <SAAceSerializable>

@property (nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *nightShiftMode;
@property (nonatomic, retain) CFCBNightShiftSchedule *nightShiftSchedule;
@property (nonatomic) bool sunSchedulePermitted;
@property (readonly) Class superclass;
@property (nonatomic) bool supported;

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)nightShiftStatus;
+ (id)nightShiftStatusWithDictionary:(id)arg1 context:(id)arg2;

- (bool)active;
- (bool)enabled;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)nightShiftMode;
- (id)nightShiftSchedule;
- (bool)requiresResponse;
- (void)setActive:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setNightShiftMode:(id)arg1;
- (void)setNightShiftSchedule:(id)arg1;
- (void)setSunSchedulePermitted:(bool)arg1;
- (void)setSupported:(bool)arg1;
- (bool)sunSchedulePermitted;
- (bool)supported;

@end
