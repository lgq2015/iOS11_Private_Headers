/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCloudSyncChangeRecord : HDCloudSyncRecord {
    unsigned long long  _changeIndex;
    NSURL * _changesetArchiveFileURL;
    HDSyncAnchorRangeMap * _decodedSyncAnchorRangeMap;
    NSNumber * _options;
    int  _protocolVersion;
}

@property (nonatomic, readonly) unsigned long long changeIndex;
@property (nonatomic, readonly) NSURL *changesetArchiveFileURL;
@property (nonatomic, readonly) HDSyncAnchorRangeMap *decodedSyncAnchorRangeMap;
@property (nonatomic, readonly) bool finalForSequence;
@property (nonatomic, readonly) int protocolVersion;

+ (id)_assetForCKRecord:(id)arg1 error:(id*)arg2;
+ (id)assetKeys;
+ (long long)bytesPerChangeRecordAssetThreshold;
+ (id)changesetArchiveContentDataForCKRecord:(id)arg1 error:(id*)arg2;
+ (id)changesetArchiveURLForCKRecord:(id)arg1 error:(id*)arg2;
+ (bool)hasFutureSchema:(id)arg1;
+ (bool)isChangeRecord:(id)arg1;
+ (bool)isChangeRecord:(id)arg1 inSequence:(id)arg2;
+ (id)nonAssetKeys;
+ (id)recordWithCKRecord:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_decodedSyncAnchorRangeMapForAnchorRangeData:(id)arg1;
- (unsigned long long)changeIndex;
- (id)changesetArchiveFileURL;
- (long long)compare:(id)arg1;
- (id)decodedSyncAnchorRangeMap;
- (id)description;
- (bool)finalForSequence;
- (id)initWithSyncAnchorRangeMap:(id)arg1 finalForSequence:(bool)arg2 changesetArchiveFileHandle:(id)arg3 sequenceRecord:(id)arg4;
- (id)initWithSyncAnchorRangeMapData:(id)arg1 changeIndex:(unsigned long long)arg2 changesetAsset:(id)arg3 protocolVersion:(int)arg4 options:(id)arg5 sequenceRecordID:(id)arg6 record:(id)arg7 schemaVersion:(long long)arg8;
- (int)protocolVersion;
- (bool)shouldFetchAssetContentInMemory;

@end