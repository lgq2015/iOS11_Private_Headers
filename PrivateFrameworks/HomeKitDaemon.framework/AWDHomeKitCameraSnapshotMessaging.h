/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitCameraSnapshotMessaging : PBCodable <NSCopying> {
    struct { 
        unsigned int receivedSnapshotRequest : 1; 
        unsigned int sentSnapshotRequest : 1; 
        unsigned int sentSnapshotResponse : 1; 
    }  _has;
    unsigned int  _receivedSnapshotRequest;
    unsigned int  _sentSnapshotRequest;
    unsigned int  _sentSnapshotResponse;
}

@property (nonatomic) bool hasReceivedSnapshotRequest;
@property (nonatomic) bool hasSentSnapshotRequest;
@property (nonatomic) bool hasSentSnapshotResponse;
@property (nonatomic) unsigned int receivedSnapshotRequest;
@property (nonatomic) unsigned int sentSnapshotRequest;
@property (nonatomic) unsigned int sentSnapshotResponse;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReceivedSnapshotRequest;
- (bool)hasSentSnapshotRequest;
- (bool)hasSentSnapshotResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)receivedSnapshotRequest;
- (unsigned int)sentSnapshotRequest;
- (unsigned int)sentSnapshotResponse;
- (void)setHasReceivedSnapshotRequest:(bool)arg1;
- (void)setHasSentSnapshotRequest:(bool)arg1;
- (void)setHasSentSnapshotResponse:(bool)arg1;
- (void)setReceivedSnapshotRequest:(unsigned int)arg1;
- (void)setSentSnapshotRequest:(unsigned int)arg1;
- (void)setSentSnapshotResponse:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
