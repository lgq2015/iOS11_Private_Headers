/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKDateRelevanceProvider : NTKRelevanceProvider {
    NSDate * _initialRelevanceDate;
    bool  _initialRelevanceDateWasProvided;
    NSDateInterval * _interval;
    NSDate * _irrelevantDate;
    double  _recentDuration;
}

@property (nonatomic, readonly) NSDate *initialRelevanceDate;
@property (nonatomic, readonly) NSDateInterval *interval;
@property (nonatomic, readonly) NSDate *irrelevantDate;
@property (nonatomic, readonly) double recentDuration;

- (void).cxx_destruct;
- (id)_defaultInitialRelevanceDateForDate:(id)arg1;
- (unsigned long long)_hash;
- (void)_loadDatesWithEventInterval:(id)arg1 irrelevantDate:(id)arg2 initialRelevanceDate:(id)arg3;
- (void)_localeDidChange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithEventDate:(id)arg1;
- (id)initWithEventDate:(id)arg1 duration:(double)arg2;
- (id)initWithEventDate:(id)arg1 duration:(double)arg2 becomesIrrelevantDate:(id)arg3;
- (id)initWithEventInterval:(id)arg1;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 firstBecomesRelevantDate:(id)arg3;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 firstBecomesRelevantDate:(id)arg3 recentDuration:(double)arg4;
- (id)initWithEventInterval:(id)arg1 becomesIrrelevantDate:(id)arg2 recentDuration:(double)arg3;
- (id)initWithEventInterval:(id)arg1 firstBecomesRelevantDate:(id)arg2;
- (id)initialRelevanceDate;
- (id)interval;
- (id)irrelevantDate;
- (bool)isEqual:(id)arg1;
- (double)recentDuration;

@end
