/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetTaskAttributeIntent : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBSpatialEventTrigger * _spatialEventTrigger;
    int  _status;
    _INPBTask * _targetTask;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasSpatialEventTrigger;
@property (nonatomic) bool hasStatus;
@property (nonatomic, readonly) bool hasTargetTask;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic) int status;
@property (nonatomic, retain) _INPBTask *targetTask;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIntentMetadata;
- (bool)hasSpatialEventTrigger;
- (bool)hasStatus;
- (bool)hasTargetTask;
- (bool)hasTemporalEventTrigger;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTargetTask:(id)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (id)spatialEventTrigger;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)targetTask;
- (id)temporalEventTrigger;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
