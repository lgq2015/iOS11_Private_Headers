/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPCluster : NSObject <CPDisposable> {
    unsigned int  clusterCount;
    double * ddx;
    unsigned int * ddxOrderIndex;
    double * dx;
    unsigned int * dxOrderIndex;
    struct { unsigned int x1; double x2; double x3; double x4; } * dxStats;
    unsigned int  interClusterMinIndex;
    unsigned int  interLevelMinIndex;
    unsigned int  levels;
    double  maxClusterSpread;
    unsigned int  minClusterSize;
    double  minInterClusterDiff;
    double  minInterLevel2ndDiff;
    bool  ownData;
    bool  ownDifferences;
    const struct { double x1; unsigned int x2; double x3; double x4; unsigned int x5; double x6; double x7; bool x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; bool x20; } * profile;
    double * x;
    unsigned int  xCount;
    struct { unsigned int x1; double x2; double x3; double x4; } * xStats;
}

+ (void)clusterTextLine:(id)arg1;
+ (void)clusterTextLine:(id)arg1 withCluster:(id)arg2 atLevel:(unsigned int)arg3 withMaximumWordGap:(double*)arg4 andMaximumLetterGap:(double*)arg5;
+ (unsigned int*)createOrderIndexFor:(double*)arg1 ofSize:(unsigned int)arg2;
+ (void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned int)arg2 count:(unsigned int*)arg3;

- (void)analyzeDensities;
- (void)analyzeDifferences;
- (bool)applyDifferenceHints:(struct { unsigned int x1; double x2; double x3; double x4; }*)arg1 count:(unsigned int)arg2;
- (void)assembleDataStats;
- (void)assembleDensityDifferenceStats;
- (void)assembleDifferenceStats;
- (unsigned int)clusterCount;
- (struct { unsigned int x1; double x2; double x3; double x4; })clusterStatisticsAtIndex:(unsigned int)arg1;
- (bool)coalesceFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (void)computeDataFromDifferences;
- (void)computeDifferencesFromData;
- (void)dealloc;
- (struct { unsigned int x1; double x2; double x3; double x4; })differenceClusterStatisticsAtIndex:(unsigned int)arg1;
- (void)dispose;
- (void)finalize;
- (void)findClusters:(double*)arg1 count:(unsigned int)arg2;
- (void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(bool)arg2;
- (void)findClustersFromDifferences:(double*)arg1 count:(unsigned int)arg2;
- (void)findDensityClusters:(double*)arg1 count:(unsigned int)arg2;
- (id)init;
- (id)initWithProfile:(const struct { double x1; unsigned int x2; double x3; double x4; unsigned int x5; double x6; double x7; bool x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; double x17; double x18; double x19; bool x20; }*)arg1;
- (bool)joinClosestLevelPairFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (bool)joinLevelsFrom:(unsigned int)arg1 to:(unsigned int)arg2;
- (struct { unsigned int x1; double x2; double x3; double x4; })largestClusterStatistics;
- (unsigned int)levels;
- (void)makeWords:(struct { unsigned int x1; unsigned int x2; int x3; int x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg1 count:(unsigned int)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned int)arg4;
- (void)resetAnalysis;
- (void)setMaximumClusterSpread:(double)arg1;
- (void)setMinimumClusterSize:(unsigned int)arg1;
- (void)setMinimumRecognizedInterClusterDifference:(double)arg1;
- (void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1;
- (bool)splitLevelAtIndex:(unsigned int)arg1 betweenValue:(double)arg2 andValue:(double)arg3;
- (void)splitSecondDifferences;
- (void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(struct { unsigned int x1; double x2; double x3; double x4; }*)arg3;

@end
