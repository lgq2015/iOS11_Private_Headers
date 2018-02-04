/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable <NSCopying> {
    int  _changeType;
    struct { 
        unsigned int changeType : 1; 
    }  _has;
    CKDPShare * _share;
    CKDPShareIdentifier * _shareIdentifier;
}

@property (nonatomic) int changeType;
@property (nonatomic) bool hasChangeType;
@property (nonatomic, readonly) bool hasShare;
@property (nonatomic, readonly) bool hasShareIdentifier;
@property (nonatomic, retain) CKDPShare *share;
@property (nonatomic, retain) CKDPShareIdentifier *shareIdentifier;

- (void).cxx_destruct;
- (int)StringAsChangeType:(id)arg1;
- (int)changeType;
- (id)changeTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeType;
- (bool)hasShare;
- (bool)hasShareIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangeType:(int)arg1;
- (void)setHasChangeType:(bool)arg1;
- (void)setShare:(id)arg1;
- (void)setShareIdentifier:(id)arg1;
- (id)share;
- (id)shareIdentifier;
- (void)writeTo:(id)arg1;

@end
