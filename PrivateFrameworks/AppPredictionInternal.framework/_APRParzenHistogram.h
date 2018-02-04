/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface _APRParzenHistogram : NSObject <NSSecureCoding> {
    ATXHistogramData * _arg12Hist;
    ATXHistogramBundleIdTable * _arg12Table;
    ATXHistogramData * _arg1Hist;
    ATXHistogramBundleIdTable * _arg1Table;
    ATXHistogramData * _arg2Hist;
    ATXHistogramBundleIdTable * _arg2Table;
    unsigned short  _maxIndex;
    unsigned short  _prevIndex;
    NSString * _prevKey;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)getIndicesForEvent:(id)arg1 intoBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithArg1Hist:(id)arg1 arg2Hist:(id)arg2 arg12Hist:(id)arg3 arg1Table:(id)arg4 arg2Table:(id)arg5 arg12Table:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (float)predict:(id)arg1;
- (void)pruneABHistogramForEvent:(id)arg1;
- (void)pruneHistogram:(id)arg1 threshold:(float)arg2;
- (void)pruneWithEvents:(id)arg1;
- (void)removeHistoryForAllBundleIds:(id)arg1;
- (void)swapWithCoder:(id)arg1;

@end
