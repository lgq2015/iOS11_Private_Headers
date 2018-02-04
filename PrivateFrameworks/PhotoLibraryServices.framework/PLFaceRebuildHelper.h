/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFaceRebuildHelper : NSObject {
    NSManagedObjectContext * _context;
}

- (void).cxx_destruct;
- (void)_updateAnalysisStateForAsset:(id)arg1;
- (id)findExistingDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2;
- (id)findOrInsertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2;
- (id)initWithContext:(id)arg1;
- (id)insertDetectedFaceForRebuildFace:(id)arg1 onAsset:(id)arg2;
- (void)rebuildDetectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3;
- (void)rebuildHiddenFace:(id)arg1 onAsset:(id)arg2;
- (void)rebuildRejectedFace:(id)arg1 onAsset:(id)arg2 person:(id)arg3;

@end
