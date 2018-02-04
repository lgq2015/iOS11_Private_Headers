/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDIndexQueryNode : PBCodable <NSCopying> {
    NSString * _field;
    NSMutableArray * _operands;
    int  _type;
    PBUnknownFields * _unknownFields;
    NSString * _value;
}

@property (nonatomic, retain) NSString *field;
@property (nonatomic, readonly) bool hasField;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSMutableArray *operands;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic, retain) NSString *value;

+ (Class)operandType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addOperand:(id)arg1;
- (void)clearOperands;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)field;
- (bool)hasField;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)operandAtIndex:(unsigned long long)arg1;
- (id)operands;
- (unsigned long long)operandsCount;
- (bool)readFrom:(id)arg1;
- (void)setField:(id)arg1;
- (void)setOperands:(id)arg1;
- (void)setType:(int)arg1;
- (void)setValue:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (id)value;
- (void)writeTo:(id)arg1;

@end
