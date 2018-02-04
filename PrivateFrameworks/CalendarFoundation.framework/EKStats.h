/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface EKStats : NSObject {
    NSMutableDictionary * _distributionOperations;
    int  _domain;
    NSMutableDictionary * _scalarOperations;
    unsigned int  _significantDigits;
}

+ (void)addToScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;
+ (void)clearDistribution:(id)arg1 domain:(int)arg2;
+ (void)clearScalar:(id)arg1 domain:(int)arg2;
+ (bool)enabled;
+ (unsigned long long)getCurrentTime;
+ (double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 significantDigits:(unsigned int)arg3 timingBlock:(id /* block */)arg4;
+ (double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 sinceStartTime:(unsigned long long)arg3;
+ (double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 sinceStartTime:(unsigned long long)arg3 significantDigits:(unsigned int)arg4;
+ (double)pushTimeIntervalForDistribution:(id)arg1 domain:(int)arg2 timingBlock:(id /* block */)arg3;
+ (void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;
+ (void)pushToDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned int)arg4;
+ (void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3;
+ (void)setDistribution:(id)arg1 value:(double)arg2 domain:(int)arg3 significantDigits:(unsigned int)arg4;
+ (void)setScalar:(id)arg1 value:(long long)arg2 domain:(int)arg3;

- (void).cxx_destruct;
- (void)addToScalar:(id)arg1 value:(long long)arg2;
- (void)clearDistribution:(id)arg1;
- (void)clearScalar:(id)arg1;
- (void)commit;
- (id)initWithDomain:(int)arg1;
- (id)initWithDomain:(int)arg1 significantDigits:(unsigned int)arg2;
- (void)pushToDistribution:(id)arg1 value:(double)arg2;
- (void)pushToDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned int)arg3;
- (void)setDistribution:(id)arg1 value:(double)arg2;
- (void)setDistribution:(id)arg1 value:(double)arg2 significantDigits:(unsigned int)arg3;
- (void)setScalar:(id)arg1 value:(long long)arg2;

@end
