/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPQuery : PBCodable <NSCopying> {
    bool  _distinct;
    NSMutableArray * _filters;
    struct { 
        unsigned int queryOperator : 1; 
        unsigned int distinct : 1; 
    }  _has;
    int  _queryOperator;
    NSMutableArray * _sorts;
    NSMutableArray * _types;
}

@property (nonatomic) bool distinct;
@property (nonatomic, retain) NSMutableArray *filters;
@property (nonatomic) bool hasDistinct;
@property (nonatomic) bool hasQueryOperator;
@property (nonatomic) int queryOperator;
@property (nonatomic, retain) NSMutableArray *sorts;
@property (nonatomic, retain) NSMutableArray *types;

+ (Class)filtersType;
+ (Class)sortsType;
+ (Class)typesType;

- (void).cxx_destruct;
- (int)StringAsQueryOperator:(id)arg1;
- (void)addFilters:(id)arg1;
- (void)addSorts:(id)arg1;
- (void)addTypes:(id)arg1;
- (void)clearFilters;
- (void)clearSorts;
- (void)clearTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)distinct;
- (id)filters;
- (id)filtersAtIndex:(unsigned long long)arg1;
- (unsigned long long)filtersCount;
- (bool)hasDistinct;
- (bool)hasQueryOperator;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)queryOperator;
- (id)queryOperatorAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDistinct:(bool)arg1;
- (void)setFilters:(id)arg1;
- (void)setHasDistinct:(bool)arg1;
- (void)setHasQueryOperator:(bool)arg1;
- (void)setQueryOperator:(int)arg1;
- (void)setSorts:(id)arg1;
- (void)setTypes:(id)arg1;
- (id)sorts;
- (id)sortsAtIndex:(unsigned long long)arg1;
- (unsigned long long)sortsCount;
- (id)types;
- (id)typesAtIndex:(unsigned long long)arg1;
- (unsigned long long)typesCount;
- (void)writeTo:(id)arg1;

@end
