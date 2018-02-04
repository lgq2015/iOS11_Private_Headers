/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDateTimeValue : ICSDateValue <NSCoding> {
    long long  _hour;
    long long  _minute;
    long long  _second;
}

@property (readonly) long long hour;
@property (readonly) long long minute;
@property (readonly) long long second;

- (void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2;
- (id)components;
- (int)dateType;
- (void)encodeWithCoder:(id)arg1;
- (long long)hour;
- (id)initWithCoder:(id)arg1;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3;
- (id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 hour:(long long)arg4 minute:(long long)arg5 second:(long long)arg6;
- (long long)minute;
- (long long)second;

@end
