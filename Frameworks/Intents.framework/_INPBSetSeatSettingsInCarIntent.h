/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetSeatSettingsInCarIntent : PBCodable <NSCopying> {
    bool  _enableCooling;
    bool  _enableHeating;
    bool  _enableMassage;
    struct { 
        unsigned int relativeLevelSetting : 1; 
        unsigned int seat : 1; 
        unsigned int enableCooling : 1; 
        unsigned int enableHeating : 1; 
        unsigned int enableMassage : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBInteger * _level;
    int  _relativeLevelSetting;
    int  _seat;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool enableCooling;
@property (nonatomic) bool enableHeating;
@property (nonatomic) bool enableMassage;
@property (nonatomic) bool hasEnableCooling;
@property (nonatomic) bool hasEnableHeating;
@property (nonatomic) bool hasEnableMassage;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasLevel;
@property (nonatomic) bool hasRelativeLevelSetting;
@property (nonatomic) bool hasSeat;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBInteger *level;
@property (nonatomic) int relativeLevelSetting;
@property (nonatomic) int seat;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (int)StringAsRelativeLevelSetting:(id)arg1;
- (int)StringAsSeat:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)enableCooling;
- (bool)enableHeating;
- (bool)enableMassage;
- (bool)hasEnableCooling;
- (bool)hasEnableHeating;
- (bool)hasEnableMassage;
- (bool)hasIntentMetadata;
- (bool)hasLevel;
- (bool)hasRelativeLevelSetting;
- (bool)hasSeat;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (id)level;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)relativeLevelSetting;
- (id)relativeLevelSettingAsString:(int)arg1;
- (int)seat;
- (id)seatAsString:(int)arg1;
- (void)setEnableCooling:(bool)arg1;
- (void)setEnableHeating:(bool)arg1;
- (void)setEnableMassage:(bool)arg1;
- (void)setHasEnableCooling:(bool)arg1;
- (void)setHasEnableHeating:(bool)arg1;
- (void)setHasEnableMassage:(bool)arg1;
- (void)setHasRelativeLevelSetting:(bool)arg1;
- (void)setHasSeat:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLevel:(id)arg1;
- (void)setRelativeLevelSetting:(int)arg1;
- (void)setSeat:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
