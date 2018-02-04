/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPZoneRetrieveResponseZoneSummary : PBCodable <NSCopying> {
    long long  _assetQuotaUsage;
    CKDPZoneCapabilities * _capabilities;
    NSData * _clientChangeToken;
    NSData * _currentServerContinuationToken;
    int  _deviceCount;
    struct { 
        unsigned int assetQuotaUsage : 1; 
        unsigned int metadataQuotaUsage : 1; 
        unsigned int deviceCount : 1; 
        unsigned int zoneKeyRollAllowed : 1; 
        unsigned int zoneishPcsNeedsRolled : 1; 
    }  _has;
    long long  _metadataQuotaUsage;
    CKDPZone * _targetZone;
    bool  _zoneKeyRollAllowed;
    CKDPDate * _zonePcsModificationTime;
    bool  _zoneishPcsNeedsRolled;
}

@property (nonatomic) long long assetQuotaUsage;
@property (nonatomic, retain) CKDPZoneCapabilities *capabilities;
@property (nonatomic, retain) NSData *clientChangeToken;
@property (nonatomic, retain) NSData *currentServerContinuationToken;
@property (nonatomic) int deviceCount;
@property (nonatomic) bool hasAssetQuotaUsage;
@property (nonatomic, readonly) bool hasCapabilities;
@property (nonatomic, readonly) bool hasClientChangeToken;
@property (nonatomic, readonly) bool hasCurrentServerContinuationToken;
@property (nonatomic) bool hasDeviceCount;
@property (nonatomic) bool hasMetadataQuotaUsage;
@property (nonatomic, readonly) bool hasTargetZone;
@property (nonatomic) bool hasZoneKeyRollAllowed;
@property (nonatomic, readonly) bool hasZonePcsModificationTime;
@property (nonatomic) bool hasZoneishPcsNeedsRolled;
@property (nonatomic) long long metadataQuotaUsage;
@property (nonatomic, retain) CKDPZone *targetZone;
@property (nonatomic) bool zoneKeyRollAllowed;
@property (nonatomic, retain) CKDPDate *zonePcsModificationTime;
@property (nonatomic) bool zoneishPcsNeedsRolled;

- (void).cxx_destruct;
- (long long)assetQuotaUsage;
- (id)capabilities;
- (id)clientChangeToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentServerContinuationToken;
- (id)description;
- (int)deviceCount;
- (id)dictionaryRepresentation;
- (bool)hasAssetQuotaUsage;
- (bool)hasCapabilities;
- (bool)hasClientChangeToken;
- (bool)hasCurrentServerContinuationToken;
- (bool)hasDeviceCount;
- (bool)hasMetadataQuotaUsage;
- (bool)hasTargetZone;
- (bool)hasZoneKeyRollAllowed;
- (bool)hasZonePcsModificationTime;
- (bool)hasZoneishPcsNeedsRolled;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)metadataQuotaUsage;
- (bool)readFrom:(id)arg1;
- (void)setAssetQuotaUsage:(long long)arg1;
- (void)setCapabilities:(id)arg1;
- (void)setClientChangeToken:(id)arg1;
- (void)setCurrentServerContinuationToken:(id)arg1;
- (void)setDeviceCount:(int)arg1;
- (void)setHasAssetQuotaUsage:(bool)arg1;
- (void)setHasDeviceCount:(bool)arg1;
- (void)setHasMetadataQuotaUsage:(bool)arg1;
- (void)setHasZoneKeyRollAllowed:(bool)arg1;
- (void)setHasZoneishPcsNeedsRolled:(bool)arg1;
- (void)setMetadataQuotaUsage:(long long)arg1;
- (void)setTargetZone:(id)arg1;
- (void)setZoneKeyRollAllowed:(bool)arg1;
- (void)setZonePcsModificationTime:(id)arg1;
- (void)setZoneishPcsNeedsRolled:(bool)arg1;
- (id)targetZone;
- (void)writeTo:(id)arg1;
- (bool)zoneKeyRollAllowed;
- (id)zonePcsModificationTime;
- (bool)zoneishPcsNeedsRolled;

@end
