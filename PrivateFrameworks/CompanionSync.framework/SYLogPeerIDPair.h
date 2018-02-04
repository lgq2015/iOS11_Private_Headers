/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYLogPeerIDPair : PBCodable <NSCopying> {
    NSString * _generationID;
    NSString * _peerID;
}

@property (nonatomic, retain) NSString *generationID;
@property (nonatomic, readonly) bool hasGenerationID;
@property (nonatomic, retain) NSString *peerID;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)generationID;
- (bool)hasGenerationID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peerID;
- (bool)readFrom:(id)arg1;
- (void)setGenerationID:(id)arg1;
- (void)setPeerID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
