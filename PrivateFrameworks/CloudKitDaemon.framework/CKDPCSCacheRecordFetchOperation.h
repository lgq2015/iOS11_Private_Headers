/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPCSCacheRecordFetchOperation : CKDPCSCacheFetchOperation {
    bool  _serverRecordHasNoProtectionData;
    NSString * _serverRecordType;
}

@property (nonatomic, readonly) CKRecordID *recordID;
@property (nonatomic, retain) CKDRecordPCSData *recordPCSData;
@property (nonatomic) bool serverRecordHasNoProtectionData;
@property (nonatomic, retain) NSString *serverRecordType;

- (void).cxx_destruct;
- (bool)_createAdditionalPCS;
- (bool)_decryptPCS;
- (bool)_decryptRecordPCSInPrivateDatabase;
- (bool)_decryptRecordPCSInSharedDatabase;
- (bool)_fetchDependentPCS;
- (bool)_fetchDependentPCSInSharedDatabase;
- (bool)_fetchPCSDataFromDatabase;
- (bool)_fetchPCSDataFromServer;
- (bool)_fetchPCSForPrivateZone;
- (void)_handlePCSDataFetched:(id)arg1 withError:(id)arg2;
- (bool)_savePCSDataToCache;
- (bool)hasAllPCSData;
- (id)itemTypeName;
- (bool)needsChainPCSCreation;
- (id)recordID;
- (id)recordPCSData;
- (bool)serverRecordHasNoProtectionData;
- (id)serverRecordType;
- (void)setRecordPCSData:(id)arg1;
- (void)setServerRecordHasNoProtectionData:(bool)arg1;
- (void)setServerRecordType:(id)arg1;

@end
