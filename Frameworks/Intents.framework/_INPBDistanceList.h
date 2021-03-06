/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBDistanceList : PBCodable <NSCopying> {
    _INPBCondition * _condition;
    NSMutableArray * _distances;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBCondition *condition;
@property (nonatomic, retain) NSMutableArray *distances;
@property (nonatomic, readonly) bool hasCondition;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)distanceType;
+ (id)options;

- (void).cxx_destruct;
- (void)addDistance:(id)arg1;
- (void)clearDistances;
- (id)condition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)distanceAtIndex:(unsigned long long)arg1;
- (id)distances;
- (unsigned long long)distancesCount;
- (bool)hasCondition;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCondition:(id)arg1;
- (void)setDistances:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
