/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBIntentResponsePayloadFailure : PBCodable <NSCopying> {
    bool  _appLaunchRequested;
    NSString * _enumTypeName;
    int  _errorCode;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int appLaunchRequested : 1; 
    }  _has;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool appLaunchRequested;
@property (nonatomic, retain) NSString *enumTypeName;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasAppLaunchRequested;
@property (nonatomic, readonly) bool hasEnumTypeName;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;

- (void).cxx_destruct;
- (bool)appLaunchRequested;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)enumTypeName;
- (int)errorCode;
- (bool)hasAppLaunchRequested;
- (bool)hasEnumTypeName;
- (bool)hasErrorCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppLaunchRequested:(bool)arg1;
- (void)setEnumTypeName:(id)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasAppLaunchRequested:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
