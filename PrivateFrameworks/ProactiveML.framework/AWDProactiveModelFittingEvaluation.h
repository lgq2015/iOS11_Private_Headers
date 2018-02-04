/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingEvaluation : PBCodable <NSCopying> {
    AWDProactiveModelFittingEvalMetrics * _evaluationMetrics;
    struct { 
        unsigned int timestamp : 1; 
    }  _has;
    AWDProactiveModelFittingMinibatchStats * _minibatchStats;
    AWDProactiveModelFittingModelInfo * _modelInfo;
    NSMutableArray * _precisionAtKs;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) AWDProactiveModelFittingEvalMetrics *evaluationMetrics;
@property (nonatomic, readonly) bool hasEvaluationMetrics;
@property (nonatomic, readonly) bool hasMinibatchStats;
@property (nonatomic, readonly) bool hasModelInfo;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, retain) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, retain) NSMutableArray *precisionAtKs;
@property (nonatomic) unsigned long long timestamp;

+ (Class)precisionAtKType;

- (void).cxx_destruct;
- (void)addPrecisionAtK:(id)arg1;
- (void)clearPrecisionAtKs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)evaluationMetrics;
- (bool)hasEvaluationMetrics;
- (bool)hasMinibatchStats;
- (bool)hasModelInfo;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minibatchStats;
- (id)modelInfo;
- (id)precisionAtKAtIndex:(unsigned long long)arg1;
- (id)precisionAtKs;
- (unsigned long long)precisionAtKsCount;
- (bool)readFrom:(id)arg1;
- (void)setEvaluationMetrics:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMinibatchStats:(id)arg1;
- (void)setModelInfo:(id)arg1;
- (void)setPrecisionAtKs:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
