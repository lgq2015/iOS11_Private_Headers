/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentSlotResolutionResult : PBCodable <NSCopying> {
    _INPBPayloadConfirmation * _PayloadConfirmation;
    _INPBPayloadNeedsDisambiguation * _PayloadNeedsDisambiguation;
    _INPBPayloadNeedsValue * _PayloadNeedsValue;
    _INPBPayloadSuccess * _PayloadSuccess;
    _INPBPayloadUnsupported * _PayloadUnsupported;
    struct { 
        unsigned int type : 1; 
    }  _has;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBPayloadConfirmation *PayloadConfirmation;
@property (nonatomic, retain) _INPBPayloadNeedsDisambiguation *PayloadNeedsDisambiguation;
@property (nonatomic, retain) _INPBPayloadNeedsValue *PayloadNeedsValue;
@property (nonatomic, retain) _INPBPayloadSuccess *PayloadSuccess;
@property (nonatomic, retain) _INPBPayloadUnsupported *PayloadUnsupported;
@property (nonatomic, readonly) bool hasPayloadConfirmation;
@property (nonatomic, readonly) bool hasPayloadNeedsDisambiguation;
@property (nonatomic, readonly) bool hasPayloadNeedsValue;
@property (nonatomic, readonly) bool hasPayloadSuccess;
@property (nonatomic, readonly) bool hasPayloadUnsupported;
@property (nonatomic) bool hasType;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)PayloadConfirmation;
- (id)PayloadNeedsDisambiguation;
- (id)PayloadNeedsValue;
- (id)PayloadSuccess;
- (id)PayloadUnsupported;
- (int)StringAsType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPayloadConfirmation;
- (bool)hasPayloadNeedsDisambiguation;
- (bool)hasPayloadNeedsValue;
- (bool)hasPayloadSuccess;
- (bool)hasPayloadUnsupported;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPayloadConfirmation:(id)arg1;
- (void)setPayloadNeedsDisambiguation:(id)arg1;
- (void)setPayloadNeedsValue:(id)arg1;
- (void)setPayloadSuccess:(id)arg1;
- (void)setPayloadUnsupported:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
