/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserRetrieveResponse : PBCodable <NSCopying> {
    CKDPRecord * _user;
}

@property (nonatomic, readonly) bool hasUser;
@property (nonatomic, retain) CKDPRecord *user;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasUser;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setUser:(id)arg1;
- (id)user;
- (void)writeTo:(id)arg1;

@end
