/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKAvailabilitySpan : NSObject {
    NSDate * _endDate;
    NSDate * _startDate;
    long long  _type;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)description;
- (id)endDate;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3;
- (id)startDate;
- (long long)type;

@end
