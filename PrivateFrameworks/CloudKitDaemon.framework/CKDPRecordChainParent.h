/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordChainParent : PBCodable <NSCopying> {
    NSData * _publicKeyID;
    CKDPRecordReference * _reference;
}

@property (nonatomic, readonly) bool hasPublicKeyID;
@property (nonatomic, readonly) bool hasReference;
@property (nonatomic, retain) NSData *publicKeyID;
@property (nonatomic, retain) CKDPRecordReference *reference;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPublicKeyID;
- (bool)hasReference;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)publicKeyID;
- (bool)readFrom:(id)arg1;
- (id)reference;
- (void)setPublicKeyID:(id)arg1;
- (void)setReference:(id)arg1;
- (void)writeTo:(id)arg1;

@end
