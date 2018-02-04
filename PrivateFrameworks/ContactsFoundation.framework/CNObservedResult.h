/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNObservedResult : NSObject {
    unsigned long long  _logTime;
    unsigned long long  _time;
    unsigned long long  _tolerance;
    id  _value;
}

@property (readonly) bool isResultEvent;
@property (readonly) unsigned long long logTime;
@property (readonly) id logValue;
@property (readonly) unsigned long long time;
@property (readonly) unsigned long long tolerance;
@property (readonly) id value;

+ (id)completionResultWithTime:(unsigned long long)arg1;
+ (id)completionResultWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (id)completionResultWithTimeInterval:(double)arg1 tolerance:(double)arg2;
+ (id)failureWithError:(id)arg1 time:(unsigned long long)arg2;
+ (id)failureWithError:(id)arg1 time:(unsigned long long)arg2 tolerance:(unsigned long long)arg3;
+ (id)failureWithError:(id)arg1 timeInterval:(double)arg2 tolerance:(double)arg3;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })overflowSafeRangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeWithExactTime:(unsigned long long)arg1;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (bool)rangeWouldOverflowWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (bool)rangeWouldUnderflowWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;
+ (id)resultWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2 value:(id)arg3;
+ (id)resultWithTime:(unsigned long long)arg1 value:(id)arg2;
+ (id)resultWithTimeInterval:(double)arg1 tolerance:(double)arg2 value:(id)arg3;
+ (struct _NSRange { unsigned long long x1; unsigned long long x2; })underflowSafeRangeWithTime:(unsigned long long)arg1 tolerance:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)formattedTimeString;
- (unsigned long long)hash;
- (id)initWithValue:(id)arg1 time:(unsigned long long)arg2 tolerance:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isResultEvent;
- (unsigned long long)logTime;
- (id)logValue;
- (unsigned long long)time;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })timeRange;
- (unsigned long long)tolerance;
- (id)value;

@end
