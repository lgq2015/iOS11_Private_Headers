/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHTrendLineData : NSObject <TSCHUnretainedParent> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mCachedChartFrame;
    bool  mCachedChartVertical;
    TSUBezierPath * mCachedTrendLinePath;
    int  mInputAxisType;
    int  mLineType;
    double  mMaxXValue;
    double  mMaxYValue;
    double  mMinXValue;
    double  mMinYValue;
    double  mOffsetInBody;
    int  mOutputAxisType;
    TSURegressionModel * mRegression;
    TSCHChartSeries * mSeries;
    bool  mShowTrendLine;
    bool  mTrendLineInvalid;
}

@property (nonatomic, readonly) float equationTextOpacity;
@property (nonatomic, readonly) NSString *rSquaredText;
@property (nonatomic, readonly) float rSquaredTextOpacity;
@property (nonatomic, readonly) bool showEquation;
@property (nonatomic, readonly) bool showRSquared;
@property (nonatomic, readonly) bool showTrendLine;
@property (nonatomic, readonly) bool showTrendLineLegendText;
@property (nonatomic, readonly) NSString *trendLineLegendText;

- (void)clearParent;
- (void)dealloc;
- (float)equationTextOpacity;
- (id)initWithSeries:(id)arg1;
- (void)invalidateData;
- (double)maxValueForAxisID:(id)arg1;
- (double)minValueForAxisID:(id)arg1;
- (struct __CFAttributedString { }*)newEquationAttributedString;
- (void)p_addPathToTrendLinePathWithPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2 curved:(bool)arg3 curveFitter:(id)arg4;
- (void)p_calcBounds;
- (void)p_calcBoundsForMovingAverage;
- (void)p_calcMARegression:(unsigned long long)arg1 xData:(id)arg2 yData:(id)arg3;
- (void)p_calcRegression:(unsigned long long)arg1 xData:(double*)arg2 yData:(double*)arg3;
- (id)p_dataPointValues;
- (unsigned long long)p_fillArrayX:(id)arg1 andY:(id)arg2 fromPoints:(id)arg3;
- (unsigned long long)p_fillArrayX:(double*)arg1 andY:(double*)arg2 fromPoints:(id)arg3 hasNegativeX:(bool*)arg4;
- (void)p_generateRegression;
- (int)p_getTrendLineType;
- (id)p_linePathFromPoints:(struct { double x1; double x2; }*)arg1 count:(unsigned long long)arg2;
- (void)p_releaseCache;
- (struct { double x1; double x2; })p_unitPoint:(struct { double x1; double x2; })arg1 toScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 offset:(double)arg3 vertical:(bool)arg4;
- (void)p_updateTrendLineData;
- (id)rSquaredText;
- (float)rSquaredTextOpacity;
- (bool)showEquation;
- (bool)showRSquared;
- (bool)showTrendLine;
- (bool)showTrendLineForAxisID:(id)arg1;
- (bool)showTrendLineLegendText;
- (id)trendLineLegendText;
- (id)trendLinePathForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 offsetInBody:(double)arg2 vertical:(bool)arg3;
- (void)trendLineUnitSpacePoints:(struct { /* ? */ }**)arg1 count:(unsigned long long*)arg2 drawCurve:(bool*)arg3 maxPoints:(unsigned long long)arg4;
- (void)updateIfNeeded;

@end
