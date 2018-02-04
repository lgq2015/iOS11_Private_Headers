/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFCalendarEventBuilder : HFEventBuilder <HFTimeEventBuilder> {
    NSDate * _fireDate;
    NSDateComponents * _fireTimeComponents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *effectiveFireDate;
@property (nonatomic, copy) NSDate *fireDate;
@property (nonatomic, copy) NSDateComponents *fireTimeComponents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_fireDateForTimeComponents:(id)arg1;
- (id)buildNewEventFromCurrentState;
- (id)description;
- (id)effectiveFireDate;
- (id)effectiveFireTimeComponents;
- (id)fireDate;
- (id)fireTimeComponents;
- (id)initWithEvent:(id)arg1;
- (id)naturalLanguageNameOfType:(unsigned long long)arg1 withHome:(id)arg2 recurrences:(id)arg3;
- (id)performValidation;
- (void)setFireDate:(id)arg1;
- (void)setFireTimeComponents:(id)arg1;
- (void)updateBaseFireDateForTrigger;

@end
