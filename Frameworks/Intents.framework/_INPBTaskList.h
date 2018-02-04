/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBTaskList : PBCodable <NSCopying> {
    _INPBDateTime * _createdDateTime;
    _INPBDataString * _groupName;
    NSString * _identifier;
    _INPBDateTime * _modifiedDateTime;
    NSMutableArray * _tasks;
    _INPBDataString * _title;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBDateTime *createdDateTime;
@property (nonatomic, retain) _INPBDataString *groupName;
@property (nonatomic, readonly) bool hasCreatedDateTime;
@property (nonatomic, readonly) bool hasGroupName;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasModifiedDateTime;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) _INPBDateTime *modifiedDateTime;
@property (nonatomic, retain) NSMutableArray *tasks;
@property (nonatomic, retain) _INPBDataString *title;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)tasksType;

- (void).cxx_destruct;
- (void)addTasks:(id)arg1;
- (void)clearTasks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createdDateTime;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupName;
- (bool)hasCreatedDateTime;
- (bool)hasGroupName;
- (bool)hasIdentifier;
- (bool)hasModifiedDateTime;
- (bool)hasTitle;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modifiedDateTime;
- (bool)readFrom:(id)arg1;
- (void)setCreatedDateTime:(id)arg1;
- (void)setGroupName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setModifiedDateTime:(id)arg1;
- (void)setTasks:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)tasks;
- (id)tasksAtIndex:(unsigned long long)arg1;
- (unsigned long long)tasksCount;
- (id)title;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
