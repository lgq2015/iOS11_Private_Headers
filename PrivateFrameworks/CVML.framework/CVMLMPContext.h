/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLMPContext : NSObject {
    int  _clusterSplitDistanceType;
    int  _debugMode;
    float  _inliersRatioThreshold;
    float  _naturalClusteringDistanceThreshold;
    int  _numberOfKeypointsToConsider;
    bool  _performClustersPostprocessing;
    bool  _performSceneClassification;
    NSArray * _qualityCriteriaList;
    float  _roiAreaThreshold;
    int  _timerMode;
    bool  _useTimestampAdjustedDistances;
}

@property int clusterSplitDistanceType;
@property int debugMode;
@property float inliersRatioThreshold;
@property float naturalClusteringDistanceThreshold;
@property int numberOfKeypointsToConsider;
@property bool performClustersPostprocessing;
@property bool performSceneClassification;
@property (retain) NSArray *qualityCriteriaList;
@property float roiAreaThreshold;
@property int timerMode;
@property bool useTimestampAdjustedDistances;

- (void).cxx_destruct;
- (int)clusterSplitDistanceType;
- (int)debugMode;
- (float)inliersRatioThreshold;
- (float)naturalClusteringDistanceThreshold;
- (int)numberOfKeypointsToConsider;
- (bool)performClustersPostprocessing;
- (bool)performSceneClassification;
- (id)qualityCriteriaList;
- (float)roiAreaThreshold;
- (void)setClusterSplitDistanceType:(int)arg1;
- (void)setDebugMode:(int)arg1;
- (void)setInliersRatioThreshold:(float)arg1;
- (void)setNaturalClusteringDistanceThreshold:(float)arg1;
- (void)setNumberOfKeypointsToConsider:(int)arg1;
- (void)setPerformClustersPostprocessing:(bool)arg1;
- (void)setPerformSceneClassification:(bool)arg1;
- (void)setQualityCriteriaList:(id)arg1;
- (void)setRoiAreaThreshold:(float)arg1;
- (void)setTimerMode:(int)arg1;
- (void)setUseTimestampAdjustedDistances:(bool)arg1;
- (int)timerMode;
- (bool)useTimestampAdjustedDistances;

@end
