/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTPBAutoBugCapturePayloadSendFail : PBCodable <NSCopying> {
    NSString * _idsIdentifier;
}

@property (nonatomic, readonly) bool hasIdsIdentifier;
@property (nonatomic, retain) NSString *idsIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdsIdentifier;
- (unsigned long long)hash;
- (id)idsIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
