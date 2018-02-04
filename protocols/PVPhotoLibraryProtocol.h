/* made by EzioChiu.
 */

@protocol PVPhotoLibraryProtocol <NSObject>

@required

- (float)pv_faceProcessingProgress;
- (<PVFetchResultProtocol> *)pv_fetchAssetsForFaceGroup:(id <PVFaceGroupProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchAssetsForPerson:(id <PVPersonProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchAssetsInMoment:(id <PVMomentProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchAssetsWithLocalIdentifiers:(NSArray *)arg1;
- (<PVFetchResultProtocol> *)pv_fetchCandidatePersonsForPerson:(id <PVPersonProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchFaceGroups;
- (<PVFetchResultProtocol> *)pv_fetchFaceGroupsForPerson:(id <PVPersonProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchFaces;
- (<PVFetchResultProtocol> *)pv_fetchFacesForFaceGroup:(id <PVFaceGroupProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchFacesForPerson:(id <PVPersonProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchFacesForPerson:(id <PVPersonProtocol>)arg1 inMoment:(id <PVMomentProtocol>)arg2;
- (<PVFetchResultProtocol> *)pv_fetchFacesForPersonLocalIdentifiers:(NSArray *)arg1 inMoment:(id <PVMomentProtocol>)arg2;
- (NSDictionary *)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id <PVFetchResultProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchFacesWithLocalIdentifiers:(NSArray *)arg1;
- (NSSet *)pv_fetchInvalidAssetIdentifiersForCommonComparison;
- (<PVFetchResultProtocol> *)pv_fetchInvalidCandidatePersonsForPerson:(id <PVPersonProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchMoments;
- (<PVFetchResultProtocol> *)pv_fetchMomentsForAssetsWithLocalIdentifiers:(NSArray *)arg1;
- (<PVFetchResultProtocol> *)pv_fetchMomentsForPerson:(id <PVPersonProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchMomentsWithLocalIdentifiers:(NSArray *)arg1;
- (NSDictionary *)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id <PVFetchResultProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchPersonsInMoment:(id <PVMomentProtocol>)arg1;
- (<PVFetchResultProtocol> *)pv_fetchPersonsWithLocalIdentifiers:(NSArray *)arg1;
- (<PVFetchResultProtocol> *)pv_fetchPersonsWithType:(unsigned long long)arg1;
- (bool)pv_isLibraryBeingSynchronized;
- (NSDate *)pv_lastAssetDate;
- (bool)pv_performChangesAndWait:(void *)arg1 error:(void *)arg2; // needs 2 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id*
- (NSURL *)pv_persistentStorageDirectoryURL;

@end
