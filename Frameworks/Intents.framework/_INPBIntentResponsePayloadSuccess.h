/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentResponsePayloadSuccess : PBCodable <NSCopying> {
    struct { 
        unsigned int shouldOpenContainingApplication : 1; 
    }  _has;
    NSData * _responseMessageData;
    NSString * _responseTypeName;
    bool  _shouldOpenContainingApplication;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasResponseMessageData;
@property (nonatomic, readonly) bool hasResponseTypeName;
@property (nonatomic) bool hasShouldOpenContainingApplication;
@property (nonatomic, retain) NSData *responseMessageData;
@property (nonatomic, retain) NSString *responseTypeName;
@property (nonatomic) bool shouldOpenContainingApplication;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasResponseMessageData;
- (bool)hasResponseTypeName;
- (bool)hasShouldOpenContainingApplication;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseMessageData;
- (id)responseTypeName;
- (void)setHasShouldOpenContainingApplication:(bool)arg1;
- (void)setResponseMessageData:(id)arg1;
- (void)setResponseTypeName:(id)arg1;
- (void)setShouldOpenContainingApplication:(bool)arg1;
- (bool)shouldOpenContainingApplication;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
