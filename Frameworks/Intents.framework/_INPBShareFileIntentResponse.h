/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBShareFileIntentResponse : PBCodable <NSCopying> {
    bool  _confirm;
    struct { 
        unsigned int shareMode : 1; 
        unsigned int confirm : 1; 
        unsigned int success : 1; 
    }  _has;
    NSMutableArray * _recipients;
    int  _shareMode;
    bool  _success;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool confirm;
@property (nonatomic) bool hasConfirm;
@property (nonatomic) bool hasShareMode;
@property (nonatomic) bool hasSuccess;
@property (nonatomic, retain) NSMutableArray *recipients;
@property (nonatomic) int shareMode;
@property (nonatomic) bool success;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)recipientsType;

- (void).cxx_destruct;
- (int)StringAsShareMode:(id)arg1;
- (void)addRecipients:(id)arg1;
- (void)clearRecipients;
- (bool)confirm;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasConfirm;
- (bool)hasShareMode;
- (bool)hasSuccess;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recipients;
- (id)recipientsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recipientsCount;
- (void)setConfirm:(bool)arg1;
- (void)setHasConfirm:(bool)arg1;
- (void)setHasShareMode:(bool)arg1;
- (void)setHasSuccess:(bool)arg1;
- (void)setRecipients:(id)arg1;
- (void)setShareMode:(int)arg1;
- (void)setSuccess:(bool)arg1;
- (int)shareMode;
- (id)shareModeAsString:(int)arg1;
- (bool)success;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
