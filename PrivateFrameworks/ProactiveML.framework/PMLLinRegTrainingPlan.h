/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLLinRegTrainingPlan : NSObject <PMLPlanProtocol> {
    bool  _isSynchronous;
    unsigned long long  _maxSessionsLimit;
    <PMLNoiseStrategy> * _noiseStrategy;
    struct NSString { Class x1; } * _planId;
    unsigned long long  _positiveLabel;
    PMLSessionDescriptor * _sessionDescriptor;
    unsigned long long  _sessionsInBatch;
    double  _skew;
    PMLTrainingStore * _store;
    <PMLLinRegTrackerProtocol> * _tracker;
    bool  _useOnlyAppleInternalSessions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSynchronous;
@property (nonatomic, readonly) unsigned long long maxSessionsLimit;
@property (nonatomic, readonly) NSString *planId;
@property (nonatomic, readonly) PMLSessionDescriptor *sessionDescriptor;
@property (nonatomic, readonly) PMLTrainingStore *store;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <PMLLinRegTrackerProtocol> *tracker;
@property (nonatomic, readonly) bool useOnlyAppleInternalSessions;

+ (id)_objectiveFeaturesWithNoiseFromCovariates:(id)arg1 objectives:(id)arg2;
+ (id)featureMatrixWithNoiseFromCovariates:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 noiseStrategy:(id)arg3 planId:(struct NSString { Class x1; }*)arg4 isSynchronous:(bool)arg5 positiveLabel:(unsigned long long)arg6 skew:(double)arg7 sessionDescriptor:(id)arg8 maxSessionsLimit:(unsigned long long)arg9 sessionsInBatch:(unsigned long long)arg10 useOnlyAppleInternalSessions:(bool)arg11;
- (bool)isSynchronous;
- (void)loadSessionsSince:(double)arg1 block:(id /* block */)arg2;
- (unsigned long long)maxSessionsLimit;
- (id)normalizeRegressor:(id)arg1;
- (struct NSString { Class x1; }*)planId;
- (void)runUntilDoneForTesting;
- (id)runWhile:(id /* block */)arg1 didFinish:(bool*)arg2;
- (id)sessionDescriptor;
- (id)store;
- (id)toPlistWithChunks:(id)arg1;
- (id)tracker;
- (bool)train;
- (bool)useOnlyAppleInternalSessions;

@end
