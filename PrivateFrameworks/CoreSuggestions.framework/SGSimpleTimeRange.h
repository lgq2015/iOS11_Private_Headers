/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding> {
    struct SGUnixTimestamp_ { 
        double secondsFromUnixEpoch; 
    }  _end;
    NSTimeZone * _endTimeZone;
    long long  _endUTCOffsetSeconds;
    bool  _floating;
    struct SGUnixTimestamp_ { 
        double secondsFromUnixEpoch; 
    }  _start;
    NSTimeZone * _startTimeZone;
    long long  _startUTCOffsetSeconds;
}

@property (nonatomic, readonly) struct SGUnixTimestamp_ { double x1; } end;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSTimeZone *endTimeZone;
@property (nonatomic, readonly) long long endUTCOffsetSeconds;
@property (getter=isFloating, nonatomic, readonly) bool floating;
@property (nonatomic, readonly) struct SGUnixTimestamp_ { double x1; } start;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSTimeZone *startTimeZone;
@property (nonatomic, readonly) long long startUTCOffsetSeconds;

+ (id)dateFromGregorianComponents:(id)arg1;
+ (id)floatingRangeWithLocalStart:(struct SGUnixTimestamp_ { double x1; })arg1 end:(struct SGUnixTimestamp_ { double x1; })arg2;
+ (id)floatingRangeWithLocalStartDate:(id)arg1 endDate:(id)arg2;
+ (id)floatingRangeWithUTCStart:(struct SGUnixTimestamp_ { double x1; })arg1 end:(struct SGUnixTimestamp_ { double x1; })arg2;
+ (id)floatingRangeWithUTCStartDate:(id)arg1 endDate:(id)arg2;
+ (struct SGUnixTimestamp_ { double x1; })fromFloatingTime:(struct SGUnixTimestamp_ { double x1; })arg1;
+ (bool)hasYearMonthDayComponents:(id)arg1;
+ (bool)isAllDayComponents:(id)arg1;
+ (id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2;
+ (id)rangeWithStart:(struct SGUnixTimestamp_ { double x1; })arg1 duration:(double)arg2 timeZone:(id)arg3;
+ (id)rangeWithStart:(struct SGUnixTimestamp_ { double x1; })arg1 end:(struct SGUnixTimestamp_ { double x1; })arg2 timeZone:(id)arg3;
+ (id)rangeWithStart:(struct SGUnixTimestamp_ { double x1; })arg1 startTimeZone:(id)arg2 end:(struct SGUnixTimestamp_ { double x1; })arg3 endTimeZone:(id)arg4;
+ (id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4;
+ (bool)supportsSecureCoding;
+ (struct SGUnixTimestamp_ { double x1; })toFloatingTime:(struct SGUnixTimestamp_ { double x1; })arg1;
+ (struct SGUnixTimestamp_ { double x1; })toFloatingTime:(struct SGUnixTimestamp_ { double x1; })arg1 withDSTAmbiguityPreferences:(id)arg2;
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_ { double x1; })arg1 duration:(double)arg2;
+ (id)utcRangeWithStart:(struct SGUnixTimestamp_ { double x1; })arg1 end:(struct SGUnixTimestamp_ { double x1; })arg2;

- (void).cxx_destruct;
- (id)_componentsForDate:(id)arg1 timeZone:(id)arg2;
- (id)absoluteRange;
- (void)applyToEKEvent:(id)arg1 isAllDay:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct SGUnixTimestamp_ { double x1; })end;
- (id)endDate;
- (id)endDateComponents;
- (id)endTimeZone;
- (long long)endUTCOffsetSeconds;
- (unsigned long long)hash;
- (id)initUTCFloatingWithStart:(struct SGUnixTimestamp_ { double x1; })arg1 end:(struct SGUnixTimestamp_ { double x1; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStart:(struct SGUnixTimestamp_ { double x1; })arg1 startUTCOffsetSeconds:(long long)arg2 end:(struct SGUnixTimestamp_ { double x1; })arg3 endUTCOffsetSeconds:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSimpleTimeRange:(id)arg1;
- (bool)isFloating;
- (bool)isValidAllDayRange;
- (id)stableStringRepresentation;
- (struct SGUnixTimestamp_ { double x1; })start;
- (id)startDate;
- (id)startDateComponents;
- (id)startTimeZone;
- (long long)startUTCOffsetSeconds;

@end
