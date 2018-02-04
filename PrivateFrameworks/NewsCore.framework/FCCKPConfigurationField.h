/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPConfigurationField : PBCodable <NSCopying> {
    NSString * _name;
    FCCKPConfigurationFieldValue * _value;
}

@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasValue;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) FCCKPConfigurationFieldValue *value;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasName;
- (bool)hasValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;
- (void)writeTo:(id)arg1;

@end
