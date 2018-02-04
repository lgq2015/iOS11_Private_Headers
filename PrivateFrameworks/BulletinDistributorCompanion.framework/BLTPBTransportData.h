/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBTransportData : PBCodable <NSCopying> {
    struct { 
        unsigned int sequenceNumber : 1; 
        unsigned int sessionState : 1; 
        unsigned int isInitialSequenceNumber : 1; 
    }  _has;
    bool  _isInitialSequenceNumber;
    NSData * _md5;
    unsigned long long  _sequenceNumber;
    NSData * _sessionIdentifier;
    unsigned int  _sessionState;
}

@property (nonatomic) bool hasIsInitialSequenceNumber;
@property (nonatomic, readonly) bool hasMd5;
@property (nonatomic) bool hasSequenceNumber;
@property (nonatomic, readonly) bool hasSessionIdentifier;
@property (nonatomic) bool hasSessionState;
@property (nonatomic) bool isInitialSequenceNumber;
@property (nonatomic, retain) NSData *md5;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic, retain) NSData *sessionIdentifier;
@property (nonatomic) unsigned int sessionState;

+ (id)transportDataWithSequenceNumberManager:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)backwardsCompatibleSessionState;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsInitialSequenceNumber;
- (bool)hasMd5;
- (bool)hasSequenceNumber;
- (bool)hasSessionIdentifier;
- (bool)hasSessionState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInitialSequenceNumber;
- (id)md5;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)sequenceNumber;
- (id)sessionIdentifier;
- (unsigned int)sessionState;
- (id)sessionUUID;
- (void)setHasIsInitialSequenceNumber:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setHasSessionState:(bool)arg1;
- (void)setIsInitialSequenceNumber:(bool)arg1;
- (void)setMd5:(id)arg1;
- (void)setSequenceNumber:(unsigned long long)arg1;
- (long long)setSequenceNumberOnManager:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSessionState:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
