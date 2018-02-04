/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCondition : PBCodable <NSCopying> {
    int  _conditionalOperator;
    struct { 
        unsigned int conditionalOperator : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) int conditionalOperator;
@property (nonatomic) bool hasConditionalOperator;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsConditionalOperator:(id)arg1;
- (int)conditionalOperator;
- (id)conditionalOperatorAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConditionalOperator;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditionalOperator:(int)arg1;
- (void)setHasConditionalOperator:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
