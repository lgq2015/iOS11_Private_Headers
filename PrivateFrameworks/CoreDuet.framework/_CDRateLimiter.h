/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDRateLimiter : NSObject <_CDRateLimiting> {
    long long  _balance;
    long long  _count;
    NSDate * _lastRecorded;
    double  _period;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) double period;
@property (readonly) Class superclass;

+ (id)sharedRateLimiter;

- (void).cxx_destruct;
- (long long)count;
- (bool)credit;
- (bool)debited;
- (id)description;
- (id)init;
- (id)initWithCount:(long long)arg1 perPeriod:(double)arg2;
- (double)period;
- (void)recordTimeAndRefillIfNeeded;
- (void)resetRateLimitWithTimeStamp:(id)arg1;

@end
