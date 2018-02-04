/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitHomeSharing : PBCodable <NSCopying> {
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int errorCode : 1; 
        unsigned int responseType : 1; 
        unsigned int stage : 1; 
    }  _has;
    int  _responseType;
    int  _stage;
    unsigned long long  _timestamp;
}

@property (nonatomic) int errorCode;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasResponseType;
@property (nonatomic) bool hasStage;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int responseType;
@property (nonatomic) int stage;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsResponseType:(id)arg1;
- (int)StringAsStage:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)errorCode;
- (bool)hasErrorCode;
- (bool)hasResponseType;
- (bool)hasStage;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)responseType;
- (id)responseTypeAsString:(int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasResponseType:(bool)arg1;
- (void)setHasStage:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setResponseType:(int)arg1;
- (void)setStage:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)stage;
- (id)stageAsString:(int)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end