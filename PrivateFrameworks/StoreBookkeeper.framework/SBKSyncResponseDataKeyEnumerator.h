/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKSyncResponseDataKeyEnumerator : NSObject {
    id /* block */  _completionBlock;
    NSEnumerator * _conflictedKeysEnumerator;
    NSEnumerator * _deletedKeysEnumerator;
    bool  _resolvedConflictsNeedSyncToServer;
    SBKSyncResponseData * _responseData;
    SBKSyncTransaction * _transaction;
    NSEnumerator * _updatedKeysEnumerator;
}

@property (copy) id /* block */ completionBlock;
@property (retain) NSEnumerator *conflictedKeysEnumerator;
@property (retain) NSEnumerator *deletedKeysEnumerator;
@property bool resolvedConflictsNeedSyncToServer;
@property (retain) SBKSyncResponseData *responseData;
@property (retain) SBKSyncTransaction *transaction;
@property (retain) NSEnumerator *updatedKeysEnumerator;

- (void).cxx_destruct;
- (void)_processDeletedKey:(id)arg1 isDirty:(bool*)arg2;
- (void)_processNextKey;
- (void)_processUpdatedKey:(id)arg1 isConflict:(bool)arg2 isDirty:(bool*)arg3;
- (id /* block */)completionBlock;
- (id)conflictedKeysEnumerator;
- (id)deletedKeysEnumerator;
- (void)enumerateKeysInResponseForTransaction:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithResponseData:(id)arg1;
- (bool)resolvedConflictsNeedSyncToServer;
- (id)responseData;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setConflictedKeysEnumerator:(id)arg1;
- (void)setDeletedKeysEnumerator:(id)arg1;
- (void)setResolvedConflictsNeedSyncToServer:(bool)arg1;
- (void)setResponseData:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)setUpdatedKeysEnumerator:(id)arg1;
- (id)transaction;
- (id)updatedKeysEnumerator;

@end
