/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKDateCalendarUnitKey : NSObject <NSCopying> {
    NSCalendar * _calendar;
    unsigned long long  _calendarUnit;
    NSDate * _date;
}

@property (nonatomic, readonly) NSCalendar *calendar;
@property (nonatomic, readonly) unsigned long long calendarUnit;
@property (nonatomic, readonly) NSDate *date;

- (void).cxx_destruct;
- (id)calendar;
- (unsigned long long)calendarUnit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)date;
- (unsigned long long)hash;
- (id)initWithDate:(id)arg1 calendar:(id)arg2 unit:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;

@end
