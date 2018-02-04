/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSModelManager : NSObject {
    unsigned long long  _activeCount;
    bool  _disablePolicy;
    NSNumber * _modelVersion;
    NSMutableDictionary * _models;
    NSMutableDictionary * _shadowModels;
    NSNumber * _shadowVersion;
}

@property (nonatomic) unsigned long long activeCount;
@property (nonatomic) bool disablePolicy;
@property (nonatomic, retain) NSNumber *modelVersion;
@property (nonatomic, retain) NSMutableDictionary *models;
@property (nonatomic, retain) NSMutableDictionary *shadowModels;
@property (nonatomic, retain) NSNumber *shadowVersion;

+ (void)cannedInfoForType:(unsigned long long)arg1 directivesPath:(id*)arg2 modelName:(id*)arg3;
+ (id)directivesFromFilePath:(id)arg1;
+ (id)errorDomain;
+ (void)loadModelWithURL:(id)arg1 type:(unsigned long long)arg2 directivesPath:(id)arg3 intoModelDict:(id)arg4 error:(id*)arg5;
+ (bool)loadModelsWithDirectory:(id)arg1 intoModelDict:(id)arg2;
+ (void)pathsFor:(unsigned long long)arg1 withParentPath:(id)arg2 modelPath:(id*)arg3 directivesPath:(id*)arg4;
+ (id)sharedModelManager;

- (void).cxx_destruct;
- (void)activate;
- (unsigned long long)activeCount;
- (id)computeFeedbackScoresForVectors:(id)arg1 withBundleFeatures:(id)arg2;
- (double*)computeL2ScoresForVectors:(id)arg1 secondVector:(id)arg2 withQualityScores:(double*)arg3 withServerFeatures:(id)arg4 withBundleFeatures:(id)arg5 experimentalWeight1:(double)arg6 experimentalWeight2:(double)arg7 forShadow:(bool)arg8;
- (double*)computeL3ScoresForFeatures:(id)arg1 didGetServerFeatures:(bool)arg2;
- (void)computeQualityScores:(double*)arg1 forScores:(double*)arg2 forFeatureCount:(unsigned long long)arg3 withContext:(id)arg4;
- (double*)computeScoresForFeatures:(id)arg1 withBundleFeatures:(id)arg2 serverBundleFeatures:(id)arg3 usingModelContext:(id)arg4 qos:(unsigned int)arg5;
- (void)deactivate;
- (void)dealloc;
- (bool)disablePolicy;
- (id)getL2ModelVersion;
- (id)getL3ModelVersion;
- (id)init;
- (void)loadCannedModelWithType:(unsigned long long)arg1 error:(id*)arg2;
- (void)loadCannedModels;
- (id)loadIfNecessaryModelOfResourceType:(unsigned long long)arg1 nowTime:(double)arg2 intoModelDict:(id)arg3 currentVersion:(id)arg4;
- (id)modelVersion;
- (id)models;
- (void)setActiveCount:(unsigned long long)arg1;
- (void)setDisablePolicy:(bool)arg1;
- (void)setModelVersion:(id)arg1;
- (void)setModels:(id)arg1;
- (void)setShadowModels:(id)arg1;
- (void)setShadowVersion:(id)arg1;
- (id)shadowModels;
- (id)shadowVersion;
- (double)testL2WithData:(id)arg1 experimental:(bool)arg2;
- (void)triggerUpdate;
- (void)updateModelsAccordingToHierarchy;
- (void)updateModelsAccordingToHierarchy:(id)arg1 updateEnabled:(bool)arg2;

@end
