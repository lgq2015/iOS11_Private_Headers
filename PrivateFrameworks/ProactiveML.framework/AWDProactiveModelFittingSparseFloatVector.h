/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingSparseFloatVector : PBCodable <NSCopying> {
    struct { 
        unsigned int length : 1; 
    }  _has;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _indices;
    unsigned long long  _length;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _values;
}

@property (nonatomic) bool hasLength;
@property (nonatomic, readonly) unsigned long long*indices;
@property (nonatomic, readonly) unsigned long long indicesCount;
@property (nonatomic) unsigned long long length;
@property (nonatomic, readonly) float*values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (id)sparseFloatVectorFromModelWeights:(id)arg1;
+ (id)sparseFloatVectorFromSparseVector:(id)arg1;

- (void)addIndices:(unsigned long long)arg1;
- (void)addValues:(float)arg1;
- (void)clearIndices;
- (void)clearValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLength;
- (unsigned long long)hash;
- (unsigned long long*)indices;
- (unsigned long long)indicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)indicesCount;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasLength:(bool)arg1;
- (void)setIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setLength:(unsigned long long)arg1;
- (void)setValues:(float*)arg1 count:(unsigned long long)arg2;
- (float)valueAtIndex:(unsigned long long)arg1;
- (float*)values;
- (float)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
