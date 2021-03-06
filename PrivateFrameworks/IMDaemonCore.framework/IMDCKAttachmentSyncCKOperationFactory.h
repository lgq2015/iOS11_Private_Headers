/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDCKAttachmentSyncCKOperationFactory : NSObject

+ (id)_desiredKeysArrayForType:(long long)arg1;

- (id)_attachmentFetchRecordZoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4;
- (id)_operationGroup;
- (id)deleteAttachmentCKOperationUsingRecordIDstoDelete:(id)arg1;
- (id)fetchAttachmentZoneChangesCKOperationUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3 desiredKeys:(long long)arg4;
- (id)fetchAttachmentZoneRecords:(id)arg1 desiredKeys:(long long)arg2;
- (id)saveAttachmentsCKOperationUsingRecordsToSave:(id)arg1;

@end
