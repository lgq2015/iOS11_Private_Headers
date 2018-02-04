/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHErrorBarData : NSObject <TSCHUnretainedParent> {
    bool  mErrorBarsInvalid;
    double  mMaxValue;
    long long  mMaxValueGroupIndex;
    double  mMaxValueScatterX;
    double  mMinValue;
    long long  mMinValueGroupIndex;
    double  mMinValueScatterX;
    TSCHChartSeries * mSeries;
    double  mStandardDeviation;
    double  mStandardDeviationMean;
    double  mStandardDeviationMeanScatterX;
    double  mStandardDeviationScatterX;
    double  mStandardError;
    double  mStandardErrorScatterX;
    bool  mSupportsXAxisBars;
}

@property (nonatomic, readonly) long long maxValueGroupIndex;
@property (nonatomic, readonly) long long minValueGroupIndex;

+ (bool)hasErrorBarsForSeries:(id)arg1;
+ (int)p_errorBarSettingForSeries:(id)arg1 useXAxis:(bool)arg2 axisID:(id)arg3;

- (void)clearParent;
- (bool)hasErrorDataForAxisID:(id)arg1 valueIndex:(unsigned long long)arg2 chartVertical:(bool)arg3 barVertical:(bool*)arg4 unitValue:(struct CGPoint { double x1; double x2; }*)arg5 unitPositive:(struct CGPoint { double x1; double x2; }*)arg6 unitNegative:(struct CGPoint { double x1; double x2; }*)arg7;
- (id)initWithSeries:(id)arg1;
- (void)invalidateData;
- (id)lineEndForAxisID:(id)arg1;
- (double)maxValueForAxisID:(id)arg1;
- (long long)maxValueGroupIndex;
- (double)minValueForAxisID:(id)arg1;
- (long long)minValueGroupIndex;
- (float)opacityForAxisID:(id)arg1;
- (void)p_clearData;
- (double*)p_createArrayOfSeriesOffsetsForAxisID:(id)arg1 count:(unsigned long long)arg2;
- (double*)p_createArrayOfSeriesValuesForAxisID:(id)arg1 count:(unsigned long long)arg2;
- (double)p_customErrorForAxisID:(id)arg1 groupIndex:(unsigned long long)arg2 positive:(bool)arg3;
- (bool)p_errorBarIsVerticalForAxisID:(id)arg1 chartVertical:(bool)arg2;
- (int)p_errorBarSettingForAxisID:(id)arg1 value:(double)arg2 barType:(int)arg3;
- (int)p_errorBarTypeForAxisID:(id)arg1;
- (double)p_errorForValue:(double*)arg1 onAxisID:(id)arg2 groupIndex:(unsigned long long)arg3 positive:(bool)arg4;
- (double)p_fixedErrorForAxisID:(id)arg1;
- (struct CGPoint { double x1; double x2; })p_getValuePointForGroup:(unsigned long long)arg1 inputAxisID:(id)arg2 outputAxisID:(id)arg3 barVertical:(bool)arg4;
- (double)p_negativeErrorForValue:(double*)arg1 onAxisID:(id)arg2 groupIndex:(unsigned long long)arg3;
- (double)p_percentageErrorForAxisID:(id)arg1;
- (double)p_positiveErrorForValue:(double*)arg1 onAxisID:(id)arg2 groupIndex:(unsigned long long)arg3;
- (double)p_stdDevErrorForAxisID:(id)arg1;
- (double)p_stdDevFactorForAxisID:(id)arg1;
- (double)p_stdDevMeanForAxisID:(id)arg1;
- (double)p_stdErrorErrorForAxisID:(id)arg1;
- (unsigned long long)p_stripBadValuesInArray:(double*)arg1 numValues:(unsigned long long)arg2;
- (void)p_updateDataForAxisID:(id)arg1;
- (void)p_updateMinMaxForAxisID:(id)arg1 forValues:(double*)arg2 withOffsets:(double*)arg3 numValues:(unsigned long long)arg4;
- (void)p_updateMinMaxForStackedPercentageAxis:(id)arg1 forValues:(double*)arg2 withOffsets:(double*)arg3 numValues:(unsigned long long)arg4;
- (void)p_updateStdDeviationForAxisID:(id)arg1 forValues:(double*)arg2 withOffsets:(double*)arg3 numValues:(unsigned long long)arg4;
- (void)p_updateStdErrorForAxisID:(id)arg1 forValues:(double*)arg2 withOffsets:(double*)arg3 numValues:(unsigned long long)arg4;
- (id)shadowForAxisID:(id)arg1;
- (bool)showErrorBarsForAxisID:(id)arg1;
- (id)strokeForAxisID:(id)arg1;
- (void)updateIfNeeded;

@end
