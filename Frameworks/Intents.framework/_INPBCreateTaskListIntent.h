/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBCreateTaskListIntent : PBCodable <NSCopying> {
    _INPBDataString * _groupName;
    _INPBIntentMetadata * _intentMetadata;
    NSMutableArray * _taskTitles;
    _INPBDataString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBDataString *groupName;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) NSMutableArray *taskTitles;
@property (nonatomic, retain) _INPBDataString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)taskTitlesType;

- (void).cxx_destruct;
- (void)addTaskTitles:(id)arg1;
- (void)clearTaskTitles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupName;
- (bool)hasGroupName;
- (bool)hasIntentMetadata;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setTaskTitles:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)taskTitles;
- (id)taskTitlesAtIndex:(unsigned long long)arg1;
- (unsigned long long)taskTitlesCount;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
