/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSModel : NSObject {
    NSString * _configFilePath;
    NSObject<OS_dispatch_queue> * _corePredictionQueue;
    NSArray * _featureSet;
    NSString * _modelDBFilePath;
    NSString * _modelName;
    CPMLModel * _predictionModel;
    NSString * _trainingDBFilePath;
    CPMLDB * _trainingModel;
}

@property (retain) NSString *configFilePath;
@property (retain) NSObject<OS_dispatch_queue> *corePredictionQueue;
@property (retain) NSArray *featureSet;
@property (retain) NSString *modelDBFilePath;
@property (retain) NSString *modelName;
@property (retain) CPMLModel *predictionModel;
@property (retain) NSString *trainingDBFilePath;
@property (retain) CPMLDB *trainingModel;

- (void).cxx_destruct;
- (void)addResultToTrainingData:(id)arg1 query:(id)arg2;
- (id)configFilePath;
- (id)corePredictionQueue;
- (id)featureSet;
- (id)getConfigFilePath;
- (id)getTopHitForQuery:(id)arg1 results:(id)arg2;
- (void)initPredictionModel;
- (id)initWithTrainingDBFilePath:(id)arg1 modelDBFilePath:(id)arg2 className:(id)arg3;
- (id)modelDBFilePath;
- (id)modelName;
- (id)predictionModel;
- (void)purgeAllData;
- (void)purgeDataOlderThanTime:(double)arg1;
- (void)setConfigFilePath:(id)arg1;
- (void)setCorePredictionQueue:(id)arg1;
- (void)setFeatureSet:(id)arg1;
- (void)setModelDBFilePath:(id)arg1;
- (void)setModelName:(id)arg1;
- (void)setPredictionModel:(id)arg1;
- (void)setTrainingDBFilePath:(id)arg1;
- (void)setTrainingModel:(id)arg1;
- (id)trainingDBFilePath;
- (id)trainingModel;
- (void)updateModel;

@end
