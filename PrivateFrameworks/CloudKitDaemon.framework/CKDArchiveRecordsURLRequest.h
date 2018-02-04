/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDArchiveRecordsURLRequest : CKDURLRequest {
    id /* block */  _recordArchivedBlock;
    NSMutableDictionary * _recordZoneIDByRequestID;
    NSMutableDictionary * _zoneIDToRecordIDs;
}

@property (nonatomic, copy) id /* block */ recordArchivedBlock;
@property (nonatomic, retain) NSMutableDictionary *recordZoneIDByRequestID;
@property (nonatomic, retain) NSMutableDictionary *zoneIDToRecordIDs;

- (void).cxx_destruct;
- (id)generateRequestOperations;
- (id)initWithRecordIDsToArchive:(id)arg1;
- (int)operationType;
- (id /* block */)recordArchivedBlock;
- (id)recordZoneIDByRequestID;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setRecordArchivedBlock:(id /* block */)arg1;
- (void)setRecordZoneIDByRequestID:(id)arg1;
- (void)setZoneIDToRecordIDs:(id)arg1;
- (id)zoneIDToRecordIDs;
- (id)zoneIDsToLock;

@end
