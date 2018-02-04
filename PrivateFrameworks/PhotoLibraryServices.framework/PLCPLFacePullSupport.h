/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCPLFacePullSupport : NSObject {
    <PLSyncableAsset> * _currentAsset;
    <PLSyncContext> * _syncContext;
}

+ (id)_disjointSetsByAddingSet:(id)arg1 toSets:(id)arg2;
+ (void)applyFacesChangesFromAssetChange:(id)arg1 toAsset:(id)arg2 inSyncContext:(id)arg3;

- (id)_applyAssetChange:(id)arg1 toExistingFaces:(id)arg2 withPolicy:(long long)arg3;
- (void)_applyDimensionAndStateFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (void)_applyPersonFromFaceReference:(id)arg1 toDetectedFace:(id)arg2;
- (bool)_canReassignFaceFromPerson:(id)arg1 toPerson:(id)arg2 shouldDedupePersons:(bool*)arg3;
- (id)_createFaceFromFaceRef:(id)arg1 algorithmVersion:(int)arg2;
- (void)_finalizeFace:(id)arg1 withFaceRef:(id)arg2 applyDimensionAndState:(bool)arg3;
- (long long)_policyForApplyingFaceChangesFromAssetChange:(id)arg1;
- (void)_unlinkPersonIfVerifiedFromFace:(id)arg1;
- (void)applyFacesChangesFromAssetChange:(id)arg1;
- (void)dealloc;
- (id)initWithSyncContext:(id)arg1 asset:(id)arg2;

@end
