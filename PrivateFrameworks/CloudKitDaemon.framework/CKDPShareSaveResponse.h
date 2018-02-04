/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareSaveResponse : PBCodable <NSCopying> {
    CKDPShare * _share;
}

@property (nonatomic, readonly) bool hasShare;
@property (nonatomic, retain) CKDPShare *share;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShare;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setShare:(id)arg1;
- (id)share;
- (void)writeTo:(id)arg1;

@end
