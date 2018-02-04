/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface MMCSOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange> {
    double  _duration;
    unsigned long long  _operationState;
    NSDate * _startDate;
}

@property (readonly) double absoluteStart;
@property (readonly) double absoluteStop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double duration;
@property (readonly) double executing;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long operationState;
@property (readonly) double queueing;
@property (readonly) double relativeStart;
@property (nonatomic, retain) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)describedSortedRanges:(id)arg1;
+ (id)descriptionWithOperationState:(unsigned long long)arg1 absoluteStart:(double)arg2 duration:(double)arg3;
+ (id)stringForOperationState:(unsigned long long)arg1;

- (void).cxx_destruct;
- (double)absoluteStart;
- (double)absoluteStop;
- (long long)compareStartTime:(id)arg1;
- (long long)compareStopTime:(id)arg1;
- (id)description;
- (double)duration;
- (double)executing;
- (id)initWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
- (unsigned long long)operationState;
- (double)queueing;
- (double)relativeStart;
- (void)setStartDate:(id)arg1;
- (id)startDate;

@end
