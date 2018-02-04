/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKSecureDatabaseResetOperation : FCOperation {
    FCCKPrivateDatabase * _database;
    bool  _deleteZones;
    id /* block */  _resetCompletionHandler;
    bool  _restoreSecureSentinel;
    bool  _restoreZoneContents;
}

@property (nonatomic, retain) FCCKPrivateDatabase *database;
@property (nonatomic) bool deleteZones;
@property (nonatomic, copy) id /* block */ resetCompletionHandler;
@property (nonatomic) bool restoreSecureSentinel;
@property (nonatomic) bool restoreZoneContents;

- (void).cxx_destruct;
- (id)_deleteZones;
- (id)_rawRecordsToSave;
- (id)_rawZoneIDsToDelete;
- (id)_rawZonesToRecreate;
- (id)_recreateZones;
- (id)_restoreSecureSentinel;
- (id)_restoreZoneContents;
- (id)database;
- (bool)deleteZones;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id /* block */)resetCompletionHandler;
- (bool)restoreSecureSentinel;
- (bool)restoreZoneContents;
- (void)setDatabase:(id)arg1;
- (void)setDeleteZones:(bool)arg1;
- (void)setResetCompletionHandler:(id /* block */)arg1;
- (void)setRestoreSecureSentinel:(bool)arg1;
- (void)setRestoreZoneContents:(bool)arg1;
- (bool)validateOperation;

@end
