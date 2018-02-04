/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPCorrectedField : PBCodable <NSCopying> {
    NSString * _correctedValue;
    int  _field;
    NSString * _fieldName;
    struct { 
        unsigned int field : 1; 
        unsigned int isMarkedIncorrect : 1; 
    }  _has;
    bool  _isMarkedIncorrect;
    NSString * _originalValue;
}

@property (nonatomic, retain) NSString *correctedValue;
@property (nonatomic) int field;
@property (nonatomic, retain) NSString *fieldName;
@property (nonatomic, readonly) bool hasCorrectedValue;
@property (nonatomic) bool hasField;
@property (nonatomic, readonly) bool hasFieldName;
@property (nonatomic) bool hasIsMarkedIncorrect;
@property (nonatomic, readonly) bool hasOriginalValue;
@property (nonatomic) bool isMarkedIncorrect;
@property (nonatomic, retain) NSString *originalValue;

- (void).cxx_destruct;
- (int)StringAsField:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correctedValue;
- (id)description;
- (id)dictionaryRepresentation;
- (int)field;
- (id)fieldAsString:(int)arg1;
- (id)fieldName;
- (bool)hasCorrectedValue;
- (bool)hasField;
- (bool)hasFieldName;
- (bool)hasIsMarkedIncorrect;
- (bool)hasOriginalValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMarkedIncorrect;
- (void)mergeFrom:(id)arg1;
- (id)originalValue;
- (bool)readFrom:(id)arg1;
- (void)setCorrectedValue:(id)arg1;
- (void)setField:(int)arg1;
- (void)setFieldName:(id)arg1;
- (void)setHasField:(bool)arg1;
- (void)setHasIsMarkedIncorrect:(bool)arg1;
- (void)setIsMarkedIncorrect:(bool)arg1;
- (void)setOriginalValue:(id)arg1;
- (void)writeTo:(id)arg1;

@end
