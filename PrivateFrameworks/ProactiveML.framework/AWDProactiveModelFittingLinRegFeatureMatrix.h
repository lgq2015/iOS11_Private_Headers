/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingLinRegFeatureMatrix : PBCodable <NSCopying> {
    float  _featureMatrixL2norm;
    float  _featureMatrixScaleFactor;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int featureMatrixL2norm : 1; 
        unsigned int featureMatrixScaleFactor : 1; 
    }  _has;
    AWDProactiveModelFittingMinibatchStats * _minibatchStats;
    AWDProactiveModelFittingModelInfo * _modelInfo;
    AWDProactiveModelFittingSparseFloatMatrix * _sparseFloatFeatureMatrix;
    AWDProactiveModelFittingQuantizedSparseMatrix * _sparseQuantizedFeatureMatrix;
    unsigned long long  _timestamp;
}

@property (nonatomic) float featureMatrixL2norm;
@property (nonatomic) float featureMatrixScaleFactor;
@property (nonatomic) bool hasFeatureMatrixL2norm;
@property (nonatomic) bool hasFeatureMatrixScaleFactor;
@property (nonatomic, readonly) bool hasMinibatchStats;
@property (nonatomic, readonly) bool hasModelInfo;
@property (nonatomic, readonly) bool hasSparseFloatFeatureMatrix;
@property (nonatomic, readonly) bool hasSparseQuantizedFeatureMatrix;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) AWDProactiveModelFittingMinibatchStats *minibatchStats;
@property (nonatomic, retain) AWDProactiveModelFittingModelInfo *modelInfo;
@property (nonatomic, retain) AWDProactiveModelFittingSparseFloatMatrix *sparseFloatFeatureMatrix;
@property (nonatomic, retain) AWDProactiveModelFittingQuantizedSparseMatrix *sparseQuantizedFeatureMatrix;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (float)featureMatrixL2norm;
- (float)featureMatrixScaleFactor;
- (float)featureMatrixValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (bool)hasFeatureMatrix;
- (bool)hasFeatureMatrixL2norm;
- (bool)hasFeatureMatrixScaleFactor;
- (bool)hasMinibatchStats;
- (bool)hasModelInfo;
- (bool)hasSparseFloatFeatureMatrix;
- (bool)hasSparseQuantizedFeatureMatrix;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)minibatchStats;
- (id)modelInfo;
- (bool)readFrom:(id)arg1;
- (void)setFeatureMatrixL2norm:(float)arg1;
- (void)setFeatureMatrixScaleFactor:(float)arg1;
- (void)setHasFeatureMatrixL2norm:(bool)arg1;
- (void)setHasFeatureMatrixScaleFactor:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setMinibatchStats:(id)arg1;
- (void)setModelInfo:(id)arg1;
- (void)setSparseFloatFeatureMatrix:(id)arg1;
- (void)setSparseQuantizedFeatureMatrix:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)sparseFloatFeatureMatrix;
- (id)sparseQuantizedFeatureMatrix;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
