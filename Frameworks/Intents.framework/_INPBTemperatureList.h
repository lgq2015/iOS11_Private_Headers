/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTemperatureList : PBCodable <NSCopying> {
    _INPBCondition * _condition;
    NSMutableArray * _temperatures;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, readonly) bool hasCondition;
@property (nonatomic, retain) NSMutableArray *temperatures;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)temperatureType;

- (void).cxx_destruct;
- (void)addTemperature:(id)arg1;
- (void)clearTemperatures;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setTemperatures:(id)arg1;
- (id)temperatureAtIndex:(unsigned long long)arg1;
- (id)temperatures;
- (unsigned long long)temperaturesCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
