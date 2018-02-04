/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTimeZoneBlock : ICSComponent

@property (nonatomic, retain) ICSDate *dtstart;
@property (nonatomic, retain) NSArray *rdate;
@property (nonatomic, retain) NSArray *rrule;
@property (nonatomic) NSArray *tzname;
@property (nonatomic) long long tzoffsetfrom;
@property (nonatomic) long long tzoffsetto;

- (void)addRecurrenceDate:(id)arg1;
- (long long)compare:(id)arg1;
- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (id)dtstart;
- (id)rdate;
- (id)rrule;
- (void)setDtstart:(id)arg1;
- (void)setRdate:(id)arg1;
- (void)setRrule:(id)arg1;
- (void)setTzname:(id)arg1;
- (void)setTzoffsetfrom:(long long)arg1;
- (void)setTzoffsetto:(long long)arg1;
- (id)tzname;
- (long long)tzoffsetfrom;
- (long long)tzoffsetto;
- (bool)validate:(id*)arg1;

@end
