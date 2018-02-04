/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBProperty : PBCodable <NSCopying> {
    _INPBIntentSlotValue * _payload;
    NSString * _role;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasPayload;
@property (nonatomic, readonly) bool hasRole;
@property (nonatomic, retain) _INPBIntentSlotValue *payload;
@property (nonatomic, retain) NSString *role;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPayload;
- (bool)hasRole;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)payload;
- (bool)readFrom:(id)arg1;
- (id)role;
- (void)setPayload:(id)arg1;
- (void)setRole:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
