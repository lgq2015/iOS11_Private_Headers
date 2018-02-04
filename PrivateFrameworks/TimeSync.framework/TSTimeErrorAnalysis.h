/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSTimeErrorAnalysis : NSObject {
    double  _averagePeriod;
    bool  _calculated;
    long long  _calculatedStepSize;
    long long  _highestWindowSize;
    long long  _lowestWindowSize;
    long long  _numberOfErrors;
    double * _timeErrors;
    double * _timestamps;
}

@property (nonatomic, readonly) long long analysisLimit;
@property (nonatomic, readonly) double averagePeriod;
@property (nonatomic, readonly) bool calculated;
@property (nonatomic, readonly) long long calculatedStepSize;
@property (nonatomic, readonly) long long highestWindowSize;
@property (nonatomic, readonly) long long lowestWindowSize;
@property (nonatomic, readonly) long long numberOfErrors;
@property (nonatomic, readonly) long long threadingLimit;
@property (nonatomic, readonly) long long threadingSegment;
@property (nonatomic, readonly) double*timeErrors;
@property (nonatomic, readonly) double*timestamps;

+ (id)additionalScriptInitialization;
+ (id)additionalScriptPlots:(id)arg1;
+ (id)additionalScriptRecords;
+ (id)generatePythonScriptWithOutputPath:(id)arg1 fileName:(id)arg2 titleName:(id)arg3 plotPath:(id)arg4 showPlot:(bool)arg5;
+ (id)keyPathsForValuesAffectingAnalysisLimit;
+ (id)plotSize;
+ (id)plotTitle;
+ (id)plotYLabel;
+ (id)plotYLimits:(id)arg1;
+ (id)variableName;

- (void)_performAnalysisFromWindowSize:(long long)arg1 toWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (long long)analysisLimit;
- (double)averagePeriod;
- (bool)calculated;
- (long long)calculatedStepSize;
- (void)dealloc;
- (bool)exportAnalysisToDirectoryURL:(id)arg1;
- (bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (bool)exportAnalysisToDirectoryURL:(id)arg1 withFilename:(id)arg2 fromStartWindowSize:(long long)arg3 toEndWindowSize:(long long)arg4 stepSize:(long long)arg5;
- (bool)exportTimeErrorsToDirectoryURL:(id)arg1;
- (bool)exportTimeErrorsToDirectoryURL:(id)arg1 withFilename:(id)arg2;
- (long long)highestWindowSize;
- (id)initWithTimeErrorValues:(id)arg1;
- (long long)lowestWindowSize;
- (long long)numberOfErrors;
- (void)performAnalysis;
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3;
- (void)performAnalysisFromStartWindowSize:(long long)arg1 toEndWindowSize:(long long)arg2 stepSize:(long long)arg3 withThreadingOption:(long long)arg4;
- (void)performAnalysisWithThreadingOption:(long long)arg1;
- (long long)threadingLimit;
- (long long)threadingSegment;
- (double*)timeErrors;
- (double*)timestamps;

@end
