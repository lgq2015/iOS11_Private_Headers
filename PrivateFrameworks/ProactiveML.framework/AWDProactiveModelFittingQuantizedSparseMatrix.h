/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingQuantizedSparseMatrix : PBCodable <NSCopying> {
    float  _bucketSize;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _columnIndices;
    unsigned int  _columnLength;
    struct { 
        unsigned int bucketSize : 1; 
        unsigned int columnLength : 1; 
        unsigned int minValue : 1; 
        unsigned int rowLength : 1; 
    }  _has;
    float  _minValue;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rowIndices;
    unsigned int  _rowLength;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _values;
}

@property (nonatomic) float bucketSize;
@property (nonatomic, readonly) unsigned int*columnIndices;
@property (nonatomic, readonly) unsigned long long columnIndicesCount;
@property (nonatomic) unsigned int columnLength;
@property (nonatomic) bool hasBucketSize;
@property (nonatomic) bool hasColumnLength;
@property (nonatomic) bool hasMinValue;
@property (nonatomic) bool hasRowLength;
@property (nonatomic) float minValue;
@property (nonatomic, readonly) unsigned int*rowIndices;
@property (nonatomic, readonly) unsigned long long rowIndicesCount;
@property (nonatomic) unsigned int rowLength;
@property (nonatomic, readonly) unsigned int*values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (id)quantizedSparseMatrixFromSparseMatrix:(id)arg1 numberOfBuckets:(unsigned long long)arg2;

- (void)addColumnIndices:(unsigned int)arg1;
- (void)addRowIndices:(unsigned int)arg1;
- (void)addValues:(unsigned int)arg1;
- (float)bucketSize;
- (void)clearColumnIndices;
- (void)clearRowIndices;
- (void)clearValues;
- (unsigned int*)columnIndices;
- (unsigned int)columnIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnIndicesCount;
- (unsigned int)columnLength;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBucketSize;
- (bool)hasColumnLength;
- (bool)hasMinValue;
- (bool)hasRowLength;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)minValue;
- (float)originalValueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (bool)readFrom:(id)arg1;
- (unsigned int*)rowIndices;
- (unsigned int)rowIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowIndicesCount;
- (unsigned int)rowLength;
- (void)setBucketSize:(float)arg1;
- (void)setColumnIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setColumnLength:(unsigned int)arg1;
- (void)setHasBucketSize:(bool)arg1;
- (void)setHasColumnLength:(bool)arg1;
- (void)setHasMinValue:(bool)arg1;
- (void)setHasRowLength:(bool)arg1;
- (void)setMinValue:(float)arg1;
- (void)setRowIndices:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setRowLength:(unsigned int)arg1;
- (void)setValues:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)values;
- (unsigned int)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
