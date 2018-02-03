/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLSavePlan : NSObject {
    struct __CFDictionary { } * _changeCache;
    struct __CFDictionary { } * _deletedFOKRowsInCurrentSave;
    NSMutableSet * _externalDataReferencesToDelete;
    NSMutableArray * _externalDataReferencesToSave;
    struct _sqlSaveFlags { 
        unsigned int notifyFOKChanges : 1; 
        unsigned int hasChanges : 1; 
        unsigned int reserved : 30; 
    }  _flags;
    struct __CFDictionary { } * _insertCache;
    NSSQLSaveChangesRequestContext * _requestContext;
    NSMutableArray * _rowsToDelete;
    struct __CFDictionary { } * _toManyCache;
    NSMutableDictionary * _toManyRelationshipChanges;
    int  _transactionInMemorySequence;
    NSMutableSet * _updatedByForeignKey;
    NSMutableSet * _updatedByRequest;
    struct __CFDictionary { } * _updatedFOKRowsInCurrentSave;
}

@property (readonly) <_NSCoreDataCollectionWithoutKeys> *externalDataReferencesToDelete;
@property (readonly) <_NSCoreDataCollectionWithoutKeys> *externalDataReferencesToSave;
@property (readonly) NSSaveChangesRequest *saveRequest;
@property (readonly) NSManagedObjectContext *savingContext;
@property (nonatomic) int transactionInMemorySequence;

- (void)_addExternalReferenceDataToDelete:(id)arg1;
- (void)_addExternalReferenceDataToSave:(id)arg1;
- (void)_computeUpdatedRowSplit;
- (id)_correlationTableUpdateTrackerForRelationship:(id)arg1;
- (void)_createCorrelationTrackerUpdatesForDeletedObject:(id)arg1;
- (void)_createRowsForSave;
- (id)_entityForObject:(id)arg1;
- (id)_findOrCreateChangeSnapshotForGlobalID:(id)arg1;
- (unsigned int)_knownEntityKeyForObject:(id)arg1;
- (unsigned int)_knownEntityKeyForObjectID:(id)arg1;
- (unsigned int)_knownOrderKeyForObject:(id)arg1 from:(id)arg2 inverseToMany:(id)arg3;
- (long long)_knownPrimaryKeyForObject:(id)arg1;
- (long long)_knownPrimaryKeyForObjectID:(id)arg1;
- (id)_newRowCacheRowForToManyUpdatesForRelationship:(id)arg1 rowCacheOriginal:(id)arg2 originalOrderKeys:(id)arg3 originalSnapshot:(id)arg4 value:(id)arg5 added:(id)arg6 deleted:(id)arg7 sourceRowPK:(long long)arg8 properties:(id)arg9 sourceObject:(id)arg10 newIndexes:(unsigned long long**)arg11 reorderedIndexes:(char **)arg12;
- (unsigned int)_orderKeyForObject:(id)arg1 fromSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 inOrderedSet:(id)arg4;
- (void)_populateOrderKeysInOrderedSet:(id)arg1 usingSourceObjectID:(id)arg2 inverseRelationship:(id)arg3 newIndexes:(unsigned long long**)arg4 reorderedIndexes:(char **)arg5;
- (void)_populateRow:(id)arg1 fromObject:(id)arg2 timestamp:(double)arg3 inserted:(bool)arg4;
- (void)_prepareForDeletionOfExternalDataReferencesForObject:(id)arg1;
- (void)_recordToManyChangesForObject:(id)arg1 inRow:(id)arg2 usingTimestamp:(double)arg3 inserted:(bool)arg4;
- (void)_registerChangedFOKs:(id)arg1 deletions:(id)arg2 forSourceObject:(id)arg3 andRelationship:(id)arg4;
- (void)dealloc;
- (id)entityForEntityDescription:(id)arg1;
- (id)externalDataReferencesToDelete;
- (id)externalDataReferencesToSave;
- (id)foreignOrderKeysBeingDeleted;
- (id)foreignOrderKeysBeingUpdated;
- (bool)hasChangesForWriting;
- (id)initForRequestContext:(id)arg1;
- (id)newAncillaryRowsUpdatedForRowCache;
- (id)newCorrelationTableUpdates;
- (id)newObjectsForExhaustiveLockConflictDetection;
- (id)newObjectsForFastLockConflictDetection;
- (id)newObjectsForUniquenessConflictDetectionGivenReportedFailures:(id)arg1;
- (id)newPrimaryRowsUpdatedForRowCache;
- (id)newRowsToAddToRowCache;
- (id)newRowsToRemoveFromRowCache;
- (void)prepareRows;
- (id)saveRequest;
- (id)savingContext;
- (void)setTransactionInMemorySequence:(int)arg1;
- (id)toManyRelationshipChanges;
- (int)transactionInMemorySequence;

@end