/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPReplica : NSObject {
    NSUUID * _clientIdentifier;
    NSDictionary * _records;
}

@property (nonatomic, readonly) NSUUID *clientIdentifier;
@property (nonatomic, readonly) NSDictionary *records;

+ (void)_switchForEdit:(id)arg1 caseIsInsertRecord:(id /* block */)arg2 caseIsEditContents:(id /* block */)arg3;
+ (id)allowedEditClasses;

- (void).cxx_destruct;
- (bool)_containerSerializationRequiresTrackingPositionEdits;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)_replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(id /* block */)arg4 replicaEditApplier:(id /* block */)arg5 error:(out id*)arg6;
- (id)clientIdentifier;
- (id)description;
- (id)editsToInsertOrUpdateRecords:(id)arg1;
- (id)editsToMergeWithReplica:(id)arg1;
- (id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2;
- (id)editsToRemoveRecordsWithIdentifiers:(id)arg1;
- (id)init;
- (id)initWithRecords:(id)arg1 clientIdentifier:(id)arg2;
- (id)records;
- (id)replicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(id /* block */)arg4 replicaEditApplier:(id /* block */)arg5 error:(out id*)arg6;
- (id)tombstoneRecordForRecord:(id)arg1;

@end
