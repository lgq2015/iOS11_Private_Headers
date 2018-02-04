/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingSparseFloatMatrix : PBCodable <NSCopying> {
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _columnIndices;
    unsigned long long  _columnLength;
    struct { 
        unsigned int columnLength : 1; 
        unsigned int rowLength : 1; 
    }  _has;
    struct { 
        unsigned long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _rowIndices;
    unsigned long long  _rowLength;
    struct { 
        float *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _values;
}

@property (nonatomic, readonly) unsigned long long*columnIndices;
@property (nonatomic, readonly) unsigned long long columnIndicesCount;
@property (nonatomic) unsigned long long columnLength;
@property (nonatomic) bool hasColumnLength;
@property (nonatomic) bool hasRowLength;
@property (nonatomic, readonly) unsigned long long*rowIndices;
@property (nonatomic, readonly) unsigned long long rowIndicesCount;
@property (nonatomic) unsigned long long rowLength;
@property (nonatomic, readonly) float*values;
@property (nonatomic, readonly) unsigned long long valuesCount;

+ (id)sparseFloatMatrixFromDenseMatrix:(id)arg1;
+ (id)sparseFloatMatrixFromSparseMatrix:(id)arg1;

- (void)addColumnIndices:(unsigned long long)arg1;
- (void)addRowIndices:(unsigned long long)arg1;
- (void)addValues:(float)arg1;
- (void)clearColumnIndices;
- (void)clearRowIndices;
- (void)clearValues;
- (unsigned long long*)columnIndices;
- (unsigned long long)columnIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)columnIndicesCount;
- (unsigned long long)columnLength;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasColumnLength;
- (bool)hasRowLength;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long*)rowIndices;
- (unsigned long long)rowIndicesAtIndex:(unsigned long long)arg1;
- (unsigned long long)rowIndicesCount;
- (unsigned long long)rowLength;
- (void)setColumnIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setColumnLength:(unsigned long long)arg1;
- (void)setHasColumnLength:(bool)arg1;
- (void)setHasRowLength:(bool)arg1;
- (void)setRowIndices:(unsigned long long*)arg1 count:(unsigned long long)arg2;
- (void)setRowLength:(unsigned long long)arg1;
- (void)setValues:(float*)arg1 count:(unsigned long long)arg2;
- (float)valueAtRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (float*)values;
- (float)valuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (void)writeTo:(id)arg1;

@end
