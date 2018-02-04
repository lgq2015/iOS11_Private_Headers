/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSCacheZoneFetchOperation : CKDPCSCacheFetchOperation {
    bool  _shouldCreateZoneishPCS;
}

@property (nonatomic, readonly) bool needsZoneishPCS;
@property (nonatomic) bool shouldCreateZoneishPCS;
@property (nonatomic, readonly) CKRecordZoneID *zoneID;
@property (nonatomic, retain) CKDZonePCSData *zonePCSData;

- (bool)_createAdditionalPCS;
- (bool)_decryptPCS;
- (bool)_fetchPCSDataFromDatabase;
- (bool)_fetchPCSDataFromServer;
- (void)_handleDecryptedZonePCSData:(id)arg1 withError:(id)arg2;
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (void)_saveNewPCSOnDefaultZone:(id)arg1 completion:(id /* block */)arg2;
- (bool)_savePCSDataToCache;
- (bool)_saveUpdatedPCSToServer;
- (void)_saveZoneToServer:(id)arg1 completion:(id /* block */)arg2;
- (void)_saveZoneToServer:(id)arg1 withPCS:(struct _OpaquePCSShareProtection { }*)arg2 zoneishPCS:(struct _OpaquePCSShareProtection { }*)arg3 previousEtag:(id)arg4 completion:(id /* block */)arg5;
- (void)_willRetryFetch;
- (bool)hasAllPCSData;
- (id)itemTypeName;
- (bool)needsZoneishPCS;
- (void)setShouldCreateZoneishPCS:(bool)arg1;
- (void)setZonePCSData:(id)arg1;
- (bool)shouldCreateZoneishPCS;
- (id)zoneID;
- (id)zonePCSData;

@end
