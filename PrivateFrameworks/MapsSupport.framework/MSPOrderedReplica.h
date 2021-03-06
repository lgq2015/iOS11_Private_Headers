/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPOrderedReplica : MSPReplica

+ (void)_switchForEdit:(id)arg1 caseIsInsertRecord:(id /* block */)arg2 caseIsEditContents:(id /* block */)arg3 caseIsEditPosition:(id /* block */)arg4;
+ (id)allowedEditClasses;

- (bool)_containerSerializationRequiresTrackingPositionEdits;
- (void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5;
- (id)orderedReplicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(id /* block */)arg4 replicaEditApplier:(id /* block */)arg5 error:(out id*)arg6;

@end
