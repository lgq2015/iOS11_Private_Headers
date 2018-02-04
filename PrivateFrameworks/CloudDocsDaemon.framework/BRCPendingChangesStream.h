/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCPendingChangesStream : NSObject {
    BRCClientZone * _clientZone;
    NSURL * _databaseURL;
    BRCPQLConnection * _db;
    NSError * _error;
    CKServerChangeToken * _startingChangeToken;
}

- (void).cxx_destruct;
- (void)_createSchemaIfNecessary;
- (void)_dbBecameCorrupted;
- (void)_destroyDatabase;
- (void)_openDB;
- (long long)_recordTypeFromRecordID:(id)arg1 isShare:(bool)arg2 isDelete:(bool)arg3;
- (void)dealloc;
- (void)destroyDatabase;
- (void)destroyDatabaseOnQueue:(bool)arg1;
- (bool)enumerateRecordsOfType:(long long)arg1 block:(id /* block */)arg2;
- (void)fetchTokenState:(id /* block */)arg1;
- (id)initWithServerZone:(id)arg1;
- (bool)saveEditedRecords:(id)arg1 deletedRecordIDs:(id)arg2 deletedShareIDs:(id)arg3 serverChangeToken:(id)arg4 clientChangeToken:(long long)arg5 syncStatus:(long long)arg6;
- (id)saveError;

@end
