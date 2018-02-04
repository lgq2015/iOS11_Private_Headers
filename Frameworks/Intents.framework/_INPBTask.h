/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTask : PBCodable <NSCopying> {
    _INPBDateTime * _createdDateTime;
    struct { 
        unsigned int status : 1; 
        unsigned int taskType : 1; 
    }  _has;
    NSString * _identifier;
    _INPBDateTime * _modifiedDateTime;
    _INPBSpatialEventTrigger * _spatialEventTrigger;
    int  _status;
    int  _taskType;
    _INPBTemporalEventTrigger * _temporalEventTrigger;
    _INPBDataString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBDateTime *createdDateTime;
@property (nonatomic, readonly) bool hasCreatedDateTime;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasModifiedDateTime;
@property (nonatomic, readonly) bool hasSpatialEventTrigger;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTaskType;
@property (nonatomic, readonly) bool hasTemporalEventTrigger;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) _INPBDateTime *modifiedDateTime;
@property (nonatomic, retain) _INPBSpatialEventTrigger *spatialEventTrigger;
@property (nonatomic) int status;
@property (nonatomic) int taskType;
@property (nonatomic, retain) _INPBTemporalEventTrigger *temporalEventTrigger;
@property (nonatomic, retain) _INPBDataString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsTaskType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateTime;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCreatedDateTime;
- (bool)hasIdentifier;
- (bool)hasModifiedDateTime;
- (bool)hasSpatialEventTrigger;
- (bool)hasStatus;
- (bool)hasTaskType;
- (bool)hasTemporalEventTrigger;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifiedDateTime;
- (bool)readFrom:(id)arg1;
- (void)setCreatedDateTime:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTaskType:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModifiedDateTime:(id)arg1;
- (void)setSpatialEventTrigger:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTaskType:(int)arg1;
- (void)setTemporalEventTrigger:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)spatialEventTrigger;
- (int)status;
- (id)statusAsString:(int)arg1;
- (int)taskType;
- (id)taskTypeAsString:(int)arg1;
- (id)temporalEventTrigger;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
