/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFExponentialBackoffTimer : HMFTimer {
    long long  _exponentialFactor;
    bool  _increasing;
    double  _maximumTimeInterval;
    double  _minimumTimeInterval;
    NSObject<OS_dispatch_queue> * _propertyQueue;
}

@property (nonatomic, readonly) long long exponentialFactor;
@property (getter=isIncreasing, nonatomic, readonly) bool increasing;
@property (nonatomic, readonly) double maximumTimeInterval;
@property (nonatomic, readonly) double minimumTimeInterval;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic) double timeInterval;

- (void).cxx_destruct;
- (void)_fire;
- (long long)exponentialFactor;
- (id)initWithMinimumTimeInterval:(double)arg1 maximumTimeInterval:(double)arg2 exponentialFactor:(long long)arg3 options:(unsigned long long)arg4;
- (id)initWithTimeInterval:(double)arg1 options:(unsigned long long)arg2;
- (bool)isIncreasing;
- (double)maximumTimeInterval;
- (double)minimumTimeInterval;
- (id)propertyQueue;
- (void)reset;
- (void)setTimeInterval:(double)arg1;
- (double)timeInterval;

@end
