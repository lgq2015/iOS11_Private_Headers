/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetProfileInCarIntent : PBCodable <NSCopying> {
    bool  _defaultProfile;
    struct { 
        unsigned int defaultProfile : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    _INPBString * _profileName;
    _INPBInteger * _profileNumber;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool defaultProfile;
@property (nonatomic) bool hasDefaultProfile;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic, readonly) bool hasProfileName;
@property (nonatomic, readonly) bool hasProfileNumber;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic, retain) _INPBString *profileName;
@property (nonatomic, retain) _INPBInteger *profileNumber;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)defaultProfile;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultProfile;
- (bool)hasIntentMetadata;
- (bool)hasProfileName;
- (bool)hasProfileNumber;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)profileName;
- (id)profileNumber;
- (bool)readFrom:(id)arg1;
- (void)setDefaultProfile:(bool)arg1;
- (void)setHasDefaultProfile:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setProfileName:(id)arg1;
- (void)setProfileNumber:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
