/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface EKStatsOperation : NSObject {
    double  _doubleValue;
    long long  _intValue;
    int  _type;
}

@property double doubleValue;
@property long long intValue;
@property int type;

- (double)doubleValue;
- (id)initWithType:(int)arg1 doubleValue:(double)arg2;
- (id)initWithType:(int)arg1 intValue:(long long)arg2;
- (long long)intValue;
- (void)setDoubleValue:(double)arg1;
- (void)setIntValue:(long long)arg1;
- (void)setType:(int)arg1;
- (int)type;

@end
