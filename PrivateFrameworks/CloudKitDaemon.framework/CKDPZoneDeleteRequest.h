/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int userPurge : 1; 
    }  _has;
    CKDPDate * _lastMissingManateeIdentityErrorDate;
    bool  _userPurge;
    CKDPRecordZoneIdentifier * _zoneIdentifier;
}

@property (nonatomic, readonly) bool hasLastMissingManateeIdentityErrorDate;
@property (nonatomic) bool hasUserPurge;
@property (nonatomic, readonly) bool hasZoneIdentifier;
@property (nonatomic, retain) CKDPDate *lastMissingManateeIdentityErrorDate;
@property (nonatomic) bool userPurge;
@property (nonatomic, retain) CKDPRecordZoneIdentifier *zoneIdentifier;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLastMissingManateeIdentityErrorDate;
- (bool)hasUserPurge;
- (bool)hasZoneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastMissingManateeIdentityErrorDate;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasUserPurge:(bool)arg1;
- (void)setLastMissingManateeIdentityErrorDate:(id)arg1;
- (void)setUserPurge:(bool)arg1;
- (void)setZoneIdentifier:(id)arg1;
- (bool)userPurge;
- (void)writeTo:(id)arg1;
- (id)zoneIdentifier;

@end
