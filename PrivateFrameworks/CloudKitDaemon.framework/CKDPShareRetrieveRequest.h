/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareRetrieveRequest : PBRequest <NSCopying> {
    CKDPShareIdentifier * _shareId;
    CKDPRecordZoneIdentifier * _zoneId;
}

@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, readonly) bool hasZoneId;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneId;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasShareId;
- (bool)hasZoneId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setShareId:(id)arg1;
- (void)setZoneId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;
- (id)zoneId;

@end
