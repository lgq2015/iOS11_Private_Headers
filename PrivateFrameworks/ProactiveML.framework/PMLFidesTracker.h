/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLFidesTracker : NSObject <PMLEvaluationTrackerProtocol, PMLLogRegTrackerProtocol, PMLMultiLabelEvaluationTrackerProtocol> {
    struct NSString { Class x1; } * _planId;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPlanId:(struct NSString { Class x1; }*)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (id)trackEvaluationMetrics:(id)arg1 minibatchStats:(id)arg2;
- (id)trackGradient:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4 serverIteration:(unsigned long long)arg5;
- (id)trackPrecisionAtK:(id)arg1;
- (id)trackPrecisionAtK:(id)arg1 minibatchStats:(id)arg2;
- (id)trackWeights:(id)arg1 scaleFactor:(float)arg2 minibatchStats:(id)arg3 evaluationMetrics:(id)arg4;

@end
