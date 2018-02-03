/* made by EzioChiu
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDIDSSessionCancelSent : PBCodable <NSCopying> {
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int numberOfRecipients : 1; 
        unsigned int remoteSessionEndReason : 1; 
    }  _has;
    unsigned int  _numberOfRecipients;
    unsigned int  _remoteSessionEndReason;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) NSString *guid;
@property (nonatomic, readonly) bool hasGuid;
@property (nonatomic) bool hasNumberOfRecipients;
@property (nonatomic) bool hasRemoteSessionEndReason;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int numberOfRecipients;
@property (nonatomic) unsigned int remoteSessionEndReason;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)guid;
- (bool)hasGuid;
- (bool)hasNumberOfRecipients;
- (bool)hasRemoteSessionEndReason;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numberOfRecipients;
- (bool)readFrom:(id)arg1;
- (unsigned int)remoteSessionEndReason;
- (void)setGuid:(id)arg1;
- (void)setHasNumberOfRecipients:(bool)arg1;
- (void)setHasRemoteSessionEndReason:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setNumberOfRecipients:(unsigned int)arg1;
- (void)setRemoteSessionEndReason:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end