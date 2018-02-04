/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface TCKDatabase : NSObject {
    NSMutableArray * _tDeletedRecordIDs;
    NSMutableArray * _tDeletedZoneIDs;
    id /* block */  _tFetchDatabaseChangesHandler;
    id /* block */  _tFetchRecordZoneChangesOperationHandler;
    id /* block */  _tFetchRecordsHandler;
    id /* block */  _tFetchZoneChangesHandler;
    id /* block */  _tFetchZonesHandler;
    NSMutableArray * _tFetchedChangedRecordZoneNames;
    NSMutableArray * _tFetchedRecords;
    id /* block */  _tModifyRecordsHandler;
    id /* block */  _tModifyRecordsOperationHandler;
    id /* block */  _tModifyZonesHandler;
    NSMutableArray * _tQueriedRecordTypes;
    NSMutableArray * _tQueriedRecordZonesNames;
    NSMutableArray * _tQueriedRecords;
    id /* block */  _tQueryHandler;
    NSMutableSet * _tSavedRecordIDs;
    NSMutableArray * _tSavedRecords;
    NSMutableArray * _tSavedSubscriptions;
    NSMutableArray * _tSavedZones;
}

@property (nonatomic, retain) NSMutableArray *tDeletedRecordIDs;
@property (nonatomic, retain) NSMutableArray *tDeletedZoneIDs;
@property (nonatomic, copy) id /* block */ tFetchDatabaseChangesHandler;
@property (nonatomic, copy) id /* block */ tFetchRecordZoneChangesOperationHandler;
@property (nonatomic, copy) id /* block */ tFetchRecordsHandler;
@property (nonatomic, copy) id /* block */ tFetchZoneChangesHandler;
@property (nonatomic, copy) id /* block */ tFetchZonesHandler;
@property (nonatomic, retain) NSMutableArray *tFetchedChangedRecordZoneNames;
@property (nonatomic, retain) NSMutableArray *tFetchedRecords;
@property (nonatomic, copy) id /* block */ tModifyRecordsHandler;
@property (nonatomic, copy) id /* block */ tModifyRecordsOperationHandler;
@property (nonatomic, copy) id /* block */ tModifyZonesHandler;
@property (nonatomic, retain) NSMutableArray *tQueriedRecordTypes;
@property (nonatomic, retain) NSMutableArray *tQueriedRecordZonesNames;
@property (nonatomic, retain) NSMutableArray *tQueriedRecords;
@property (nonatomic, copy) id /* block */ tQueryHandler;
@property (nonatomic, retain) NSMutableSet *tSavedRecordIDs;
@property (nonatomic, retain) NSMutableArray *tSavedRecords;
@property (nonatomic, retain) NSMutableArray *tSavedSubscriptions;
@property (nonatomic, retain) NSMutableArray *tSavedZones;

+ (id)tRecordsForQuery:(id)arg1 zoneID:(id)arg2;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setTDeletedRecordIDs:(id)arg1;
- (void)setTDeletedZoneIDs:(id)arg1;
- (void)setTFetchDatabaseChangesHandler:(id /* block */)arg1;
- (void)setTFetchRecordZoneChangesOperationHandler:(id /* block */)arg1;
- (void)setTFetchRecordsHandler:(id /* block */)arg1;
- (void)setTFetchZoneChangesHandler:(id /* block */)arg1;
- (void)setTFetchZonesHandler:(id /* block */)arg1;
- (void)setTFetchedChangedRecordZoneNames:(id)arg1;
- (void)setTFetchedRecords:(id)arg1;
- (void)setTModifyRecordsHandler:(id /* block */)arg1;
- (void)setTModifyRecordsOperationHandler:(id /* block */)arg1;
- (void)setTModifyZonesHandler:(id /* block */)arg1;
- (void)setTQueriedRecordTypes:(id)arg1;
- (void)setTQueriedRecordZonesNames:(id)arg1;
- (void)setTQueriedRecords:(id)arg1;
- (void)setTQueryHandler:(id /* block */)arg1;
- (void)setTSavedRecordIDs:(id)arg1;
- (void)setTSavedRecords:(id)arg1;
- (void)setTSavedSubscriptions:(id)arg1;
- (void)setTSavedZones:(id)arg1;
- (id)tDeletedRecordIDs;
- (id)tDeletedZoneIDs;
- (id /* block */)tFetchDatabaseChangesHandler;
- (id /* block */)tFetchRecordZoneChangesOperationHandler;
- (id /* block */)tFetchRecordsHandler;
- (id /* block */)tFetchZoneChangesHandler;
- (id /* block */)tFetchZonesHandler;
- (id)tFetchedChangedRecordZoneNames;
- (id)tFetchedRecords;
- (id /* block */)tModifyRecordsHandler;
- (id /* block */)tModifyRecordsOperationHandler;
- (id /* block */)tModifyZonesHandler;
- (id)tQueriedRecordTypes;
- (id)tQueriedRecordZonesNames;
- (id)tQueriedRecords;
- (id /* block */)tQueryHandler;
- (id)tSavedRecordIDs;
- (id)tSavedRecords;
- (id)tSavedSubscriptions;
- (id)tSavedZones;

@end
