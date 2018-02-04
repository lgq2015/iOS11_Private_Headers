/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPShareDeleteRequest : PBRequest <NSCopying> {
    NSString * _etag;
    CKDPProtectionInfo * _oBSOLETESelfAddedPcs;
    CKDPShareIdentifier * _shareId;
}

@property (nonatomic, retain) NSString *etag;
@property (nonatomic, readonly) bool hasEtag;
@property (nonatomic, readonly) bool hasOBSOLETESelfAddedPcs;
@property (nonatomic, readonly) bool hasShareId;
@property (nonatomic, retain) CKDPProtectionInfo *oBSOLETESelfAddedPcs;
@property (nonatomic, retain) CKDPShareIdentifier *shareId;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etag;
- (bool)hasEtag;
- (bool)hasOBSOLETESelfAddedPcs;
- (bool)hasShareId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)oBSOLETESelfAddedPcs;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setEtag:(id)arg1;
- (void)setOBSOLETESelfAddedPcs:(id)arg1;
- (void)setShareId:(id)arg1;
- (id)shareId;
- (void)writeTo:(id)arg1;

@end
