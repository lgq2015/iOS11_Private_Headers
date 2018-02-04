/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface AWDProactiveModelFittingMinibatchStats : PBCodable <NSCopying> {
    unsigned long long  _batchSize;
    struct { 
        unsigned int batchSize : 1; 
        unsigned int support : 1; 
    }  _has;
    NSMutableArray * _perLabelSupports;
    float  _support;
}

@property (nonatomic) unsigned long long batchSize;
@property (nonatomic) bool hasBatchSize;
@property (nonatomic) bool hasSupport;
@property (nonatomic, retain) NSMutableArray *perLabelSupports;
@property (nonatomic) float support;

+ (Class)perLabelSupportType;
+ (id)statsWithPerLabelCounts:(id)arg1;
+ (id)statsWithSize:(unsigned long long)arg1 support:(float)arg2;

- (void).cxx_destruct;
- (void)addPerLabelSupport:(id)arg1;
- (unsigned long long)batchSize;
- (void)clearPerLabelSupports;
- (id)combineWithStats:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBatchSize;
- (bool)hasSupport;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)perLabelSupportAtIndex:(unsigned long long)arg1;
- (id)perLabelSupports;
- (unsigned long long)perLabelSupportsCount;
- (bool)readFrom:(id)arg1;
- (void)setBatchSize:(unsigned long long)arg1;
- (void)setHasBatchSize:(bool)arg1;
- (void)setHasSupport:(bool)arg1;
- (void)setPerLabelSupports:(id)arg1;
- (void)setSupport:(float)arg1;
- (float)support;
- (float)supportForLabel:(unsigned long long)arg1;
- (id)toDictionary;
- (void)writeTo:(id)arg1;

@end
