/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSByDayValue : NSObject <NSCoding> {
    NSNumber * _number;
    int  _weekday;
}

@property (nonatomic, retain) NSNumber *number;
@property int weekday;

+ (id)byDayValueFromICSString:(id)arg1;
+ (int)weekdayFromICSString:(id)arg1;

- (void).cxx_destruct;
- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (long long)compare:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWeekday:(int)arg1;
- (id)initWithWeekday:(int)arg1 number:(id)arg2;
- (id)number;
- (void)setNumber:(id)arg1;
- (void)setWeekday:(int)arg1;
- (int)weekday;

@end
