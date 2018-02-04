/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchDatabaseChangesURLRequest : CKDURLRequest <CKDURLRequestPipelining> {
    NSMutableArray * _changedZoneIDs;
    NSMutableArray * _deletedZoneIDs;
    NSData * _previousServerChangeTokenData;
    NSMutableArray * _purgedZoneIDs;
    CKRecordZoneID * _recordZoneID;
    unsigned long long  _resultsLimit;
    NSData * _serverChangeTokenData;
    long long  _status;
    id /* block */  _zoneChangedBlock;
    id /* block */  _zoneDeletedBlock;
    id /* block */  _zonePurgedBlock;
}

@property (nonatomic, readonly) NSArray *changedZoneIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSArray *deletedZoneIDs;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *previousServerChangeTokenData;
@property (nonatomic, readonly) NSArray *purgedZoneIDs;
@property (nonatomic, retain) CKRecordZoneID *recordZoneID;
@property (nonatomic) unsigned long long resultsLimit;
@property (nonatomic, retain) NSData *serverChangeTokenData;
@property (nonatomic) long long status;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ zoneChangedBlock;
@property (nonatomic, copy) id /* block */ zoneDeletedBlock;
@property (nonatomic, copy) id /* block */ zonePurgedBlock;

- (void).cxx_destruct;
- (id)changedZoneIDs;
- (id)deletedZoneIDs;
- (id)generateRequestOperations;
- (id)initWithPreviousServerChangeTokenData:(id)arg1;
- (int)operationType;
- (id)previousServerChangeTokenData;
- (id)purgedZoneIDs;
- (id)recordZoneID;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (unsigned long long)resultsLimit;
- (id)serverChangeTokenData;
- (void)setPreviousServerChangeTokenData:(id)arg1;
- (void)setRecordZoneID:(id)arg1;
- (void)setResultsLimit:(unsigned long long)arg1;
- (void)setServerChangeTokenData:(id)arg1;
- (void)setStatus:(long long)arg1;
- (void)setZoneChangedBlock:(id /* block */)arg1;
- (void)setZoneDeletedBlock:(id /* block */)arg1;
- (void)setZonePurgedBlock:(id /* block */)arg1;
- (long long)status;
- (id /* block */)zoneChangedBlock;
- (id /* block */)zoneDeletedBlock;
- (id /* block */)zonePurgedBlock;

@end