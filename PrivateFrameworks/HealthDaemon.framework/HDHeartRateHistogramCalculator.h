/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartRateHistogramCalculator : NSObject {
    struct HistogramState { 
        struct vector<HistogramBucket, std::__1::allocator<HistogramBucket> > { 
            struct HistogramBucket {} *__begin_; 
            struct HistogramBucket {} *__end_; 
            struct __compressed_pair<HistogramBucket *, std::__1::allocator<HistogramBucket> > { 
                struct HistogramBucket {} *__first_; 
            } __end_cap_; 
        } _dateBuckets; 
        double _histogramBucketAnchor; 
        double _histogramBucketSize; 
        long long _currentStartDateBucket; 
    }  _histogramState;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_dateComponentsToInterval:(id)arg1;
- (void)_initializeWideBucketDatesFromStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4;
- (bool)_isWideIntervalComponents:(id)arg1;
- (id)_negativeComponents:(id)arg1;
- (void)addDataPoint:(double)arg1 startTime:(double)arg2 endTime:(double)arg3;
- (id)heartRateHistogramsWithUnit:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 anchorDate:(id)arg3 intervalComponents:(id)arg4 histogramBucketAnchor:(double)arg5 histogramBucketSize:(double)arg6;
- (bool)validateDateSequenceForTesting:(id)arg1;

@end
