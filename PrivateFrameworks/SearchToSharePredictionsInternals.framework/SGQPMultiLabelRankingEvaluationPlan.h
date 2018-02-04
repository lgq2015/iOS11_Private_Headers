/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchToSharePredictionsInternals.framework/SearchToSharePredictionsInternals
 */

@interface SGQPMultiLabelRankingEvaluationPlan : NSObject <PMLPlanProtocol> {
    NSArray * _evaluationPoints;
    bool  _isSynchronous;
    unsigned long long  _maxSessionsLimit;
    NSDictionary * _models;
    SGQPMultiLabelModel * _multiLabelModel;
    struct NSString { Class x1; } * _planId;
    PMLSessionDescriptor * _sessionDescriptor;
    PMLTrainingStore * _store;
    <PMLMultiLabelEvaluationTrackerProtocol> * _tracker;
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
@property (nonatomic, readonly) <PMLMultiLabelEvaluationTrackerProtocol> *tracker;

- (void).cxx_destruct;
- (id)evaluateSessionsSince:(double)arg1;
- (id)init;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(struct NSString { Class x1; }*)arg3 isSynchronous:(bool)arg4 model:(id)arg5 maxSessionsLimit:(unsigned long long)arg6 evaluteAtKs:(id)arg7 modelsAndAssociatedLabels:(id)arg8;
- (id)initWithStore:(id)arg1 tracker:(id)arg2 planId:(struct NSString { Class x1; }*)arg3 isSynchronous:(bool)arg4 model:(id)arg5 maxSessionsLimit:(unsigned long long)arg6 evaluteAtKs:(id)arg7 multiLabelModel:(id)arg8;
- (bool)isSynchronous;
- (unsigned long long)maxSessionsLimit;
- (struct NSString { Class x1; }*)planId;
- (id)precisionCountsAtEvaluationPointsForSessions:(id)arg1;
- (id)run;
- (void)runUntilDoneForTesting;
- (id)runWhile:(id /* block */)arg1 didFinish:(bool*)arg2;
- (id)sessionDescriptor;
- (id)store;
- (id)toPlistWithChunks:(id)arg1;
- (id)tracker;

@end
