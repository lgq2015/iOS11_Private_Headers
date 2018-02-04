/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLNaiveBayesSolver : NSObject {
    PMLModelWeights * _counts;
    PMLSparseMatrix * _covariates;
    PMLModelWeights * _negativeConditionalCounts;
    PMLModelWeights * _negativeConditionalProbabilities;
    PMLModelRegressor * _objective;
    PMLModelWeights * _positiveConditionalCounts;
    PMLModelWeights * _positiveConditionalProbabilities;
    PMLModelWeights * _probabilities;
}

@property (retain) PMLModelWeights *counts;
@property (retain) PMLSparseMatrix *covariates;
@property (retain) PMLModelWeights *negativeConditionalCounts;
@property (retain) PMLModelWeights *negativeConditionalProbabilities;
@property (retain) PMLModelRegressor *objective;
@property (retain) PMLModelWeights *positiveConditionalCounts;
@property (retain) PMLModelWeights *positiveConditionalProbabilities;
@property (retain) PMLModelWeights *probabilities;

- (void).cxx_destruct;
- (id)counts;
- (id)covariates;
- (id)init;
- (id)initWithProbabilities:(id)arg1 positiveConditionalProbabilities:(id)arg2 negativeConditionalProbabilities:(id)arg3;
- (id)negativeConditionalCounts;
- (id)negativeConditionalProbabilities;
- (id)objective;
- (id)positiveConditionalCounts;
- (id)positiveConditionalProbabilities;
- (float)predict:(id)arg1;
- (id)probabilities;
- (void)setCounts:(id)arg1;
- (void)setCovariates:(id)arg1;
- (void)setNegativeConditionalCounts:(id)arg1;
- (void)setNegativeConditionalProbabilities:(id)arg1;
- (void)setObjective:(id)arg1;
- (void)setPositiveConditionalCounts:(id)arg1;
- (void)setPositiveConditionalProbabilities:(id)arg1;
- (void)setProbabilities:(id)arg1;
- (void)solve;
- (void)solveForCovariates:(id)arg1 objectives:(id)arg2;

@end
