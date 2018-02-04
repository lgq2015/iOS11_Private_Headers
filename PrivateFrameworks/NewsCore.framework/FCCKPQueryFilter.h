/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPQueryFilter : PBCodable <NSCopying> {
    FCCKPRecordFieldIdentifier * _fieldName;
    FCCKPRecordFieldValue * _fieldValue;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
}

@property (nonatomic, retain) FCCKPRecordFieldIdentifier *fieldName;
@property (nonatomic, retain) FCCKPRecordFieldValue *fieldValue;
@property (nonatomic, readonly) bool hasFieldName;
@property (nonatomic, readonly) bool hasFieldValue;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldName;
- (id)fieldValue;
- (bool)hasFieldName;
- (bool)hasFieldValue;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFieldValue:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)writeTo:(id)arg1;

@end