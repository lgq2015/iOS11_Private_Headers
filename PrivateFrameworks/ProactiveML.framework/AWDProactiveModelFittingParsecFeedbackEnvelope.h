/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingParsecFeedbackEnvelope : PBCodable <NSCopying> {
    AWDProactiveModelFittingEvaluation * _evaluation;
    AWDProactiveModelFittingLinRegFeatureMatrix * _linRegFeatureMatrix;
    AWDProactiveModelFittingLinRegObjectiveFeatures * _linRegObjectiveFeatures;
    AWDProactiveModelFittingLogRegGradient * _logRegGradient;
    AWDProactiveModelFittingLogRegWeights * _logRegWeights;
}

@property (nonatomic, retain) AWDProactiveModelFittingEvaluation *evaluation;
@property (nonatomic, readonly) bool hasEvaluation;
@property (nonatomic, readonly) bool hasLinRegFeatureMatrix;
@property (nonatomic, readonly) bool hasLinRegObjectiveFeatures;
@property (nonatomic, readonly) bool hasLogRegGradient;
@property (nonatomic, readonly) bool hasLogRegWeights;
@property (nonatomic, retain) AWDProactiveModelFittingLinRegFeatureMatrix *linRegFeatureMatrix;
@property (nonatomic, retain) AWDProactiveModelFittingLinRegObjectiveFeatures *linRegObjectiveFeatures;
@property (nonatomic, retain) AWDProactiveModelFittingLogRegGradient *logRegGradient;
@property (nonatomic, retain) AWDProactiveModelFittingLogRegWeights *logRegWeights;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evaluation;
- (bool)hasEvaluation;
- (bool)hasLinRegFeatureMatrix;
- (bool)hasLinRegObjectiveFeatures;
- (bool)hasLogRegGradient;
- (bool)hasLogRegWeights;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)linRegFeatureMatrix;
- (id)linRegObjectiveFeatures;
- (id)logRegGradient;
- (id)logRegWeights;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEvaluation:(id)arg1;
- (void)setLinRegFeatureMatrix:(id)arg1;
- (void)setLinRegObjectiveFeatures:(id)arg1;
- (void)setLogRegGradient:(id)arg1;
- (void)setLogRegWeights:(id)arg1;
- (void)writeTo:(id)arg1;

@end