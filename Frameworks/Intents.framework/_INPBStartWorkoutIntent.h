/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBStartWorkoutIntent : PBCodable <NSCopying> {
    _INPBDouble * _goalValue;
    struct { 
        unsigned int workoutGoalUnitType : 1; 
        unsigned int workoutLocationType : 1; 
        unsigned int isOpenEnded : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _isOpenEnded;
    PBUnknownFields * _unknownFields;
    int  _workoutGoalUnitType;
    int  _workoutLocationType;
    _INPBDataString * _workoutName;
}

@property (nonatomic, retain) _INPBDouble *goalValue;
@property (nonatomic, readonly) bool hasGoalValue;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasIsOpenEnded;
@property (nonatomic) bool hasWorkoutGoalUnitType;
@property (nonatomic) bool hasWorkoutLocationType;
@property (nonatomic, readonly) bool hasWorkoutName;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool isOpenEnded;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) int workoutGoalUnitType;
@property (nonatomic) int workoutLocationType;
@property (nonatomic, retain) _INPBDataString *workoutName;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsWorkoutGoalUnitType:(id)arg1;
- (int)StringAsWorkoutLocationType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)goalValue;
- (bool)hasGoalValue;
- (bool)hasIntentMetadata;
- (bool)hasIsOpenEnded;
- (bool)hasWorkoutGoalUnitType;
- (bool)hasWorkoutLocationType;
- (bool)hasWorkoutName;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)isOpenEnded;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGoalValue:(id)arg1;
- (void)setHasIsOpenEnded:(bool)arg1;
- (void)setHasWorkoutGoalUnitType:(bool)arg1;
- (void)setHasWorkoutLocationType:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setIsOpenEnded:(bool)arg1;
- (void)setWorkoutGoalUnitType:(int)arg1;
- (void)setWorkoutLocationType:(int)arg1;
- (void)setWorkoutName:(id)arg1;
- (id)unknownFields;
- (int)workoutGoalUnitType;
- (id)workoutGoalUnitTypeAsString:(int)arg1;
- (int)workoutLocationType;
- (id)workoutLocationTypeAsString:(int)arg1;
- (id)workoutName;
- (void)writeTo:(id)arg1;

@end
