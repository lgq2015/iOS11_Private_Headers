/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKRecordFetchAggregatorOperationInfo : CKDatabaseOperationInfo {
    NSDictionary * _assetTransferOptionsByRecordTypeAndKey;
    NSSet * _desiredKeys;
    bool  _fetchAssetContents;
    bool  _forceDecryptionAttempt;
    bool  _preserveOrdering;
}

@property (nonatomic, retain) NSDictionary *assetTransferOptionsByRecordTypeAndKey;
@property (nonatomic, retain) NSSet *desiredKeys;
@property (nonatomic) bool fetchAssetContents;
@property (nonatomic) bool forceDecryptionAttempt;
@property (nonatomic) bool preserveOrdering;

- (void).cxx_destruct;
- (id)assetTransferOptionsByRecordTypeAndKey;
- (id)desiredKeys;
- (bool)fetchAssetContents;
- (bool)forceDecryptionAttempt;
- (id)init;
- (bool)preserveOrdering;
- (void)setAssetTransferOptionsByRecordTypeAndKey:(id)arg1;
- (void)setDesiredKeys:(id)arg1;
- (void)setFetchAssetContents:(bool)arg1;
- (void)setForceDecryptionAttempt:(bool)arg1;
- (void)setPreserveOrdering:(bool)arg1;

@end
