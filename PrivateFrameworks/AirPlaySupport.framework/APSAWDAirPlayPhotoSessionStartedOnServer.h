/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayPhotoSessionStartedOnServer : PBCodable <NSCopying> {
    NSString * _clientModel;
    NSString * _clientVersion;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int status : 1; 
        unsigned int transportType : 1; 
    }  _has;
    NSString * _sessionUUID;
    int  _status;
    unsigned long long  _timestamp;
    unsigned int  _transportType;
}

@property (nonatomic, retain) NSString *clientModel;
@property (nonatomic, retain) NSString *clientVersion;
@property (nonatomic, readonly) bool hasClientModel;
@property (nonatomic, readonly) bool hasClientVersion;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasStatus;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTransportType;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transportType;

- (id)clientModel;
- (id)clientVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasClientModel;
- (bool)hasClientVersion;
- (bool)hasSessionUUID;
- (bool)hasStatus;
- (bool)hasTimestamp;
- (bool)hasTransportType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setClientModel:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTransportType:(bool)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (int)status;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end
