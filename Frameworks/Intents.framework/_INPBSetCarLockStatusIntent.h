/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBSetCarLockStatusIntent : PBCodable <NSCopying> {
    _INPBDataString * _carName;
    struct { 
        unsigned int locked : 1; 
    }  _has;
    _INPBIntentMetadata * _intentMetadata;
    bool  _locked;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBDataString *carName;
@property (nonatomic, readonly) bool hasCarName;
@property (nonatomic, readonly) bool hasIntentMetadata;
@property (nonatomic) bool hasLocked;
@property (nonatomic, retain) _INPBIntentMetadata *intentMetadata;
@property (nonatomic) bool locked;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)carName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCarName;
- (bool)hasIntentMetadata;
- (bool)hasLocked;
- (unsigned long long)hash;
- (id)intentMetadata;
- (bool)isEqual:(id)arg1;
- (bool)locked;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCarName:(id)arg1;
- (void)setHasLocked:(bool)arg1;
- (void)setIntentMetadata:(id)arg1;
- (void)setLocked:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
