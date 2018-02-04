/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoAnalysisServiceClient : NSObject {
    NSDictionary * _cachedRequestContextDictionary;
    NSURL * _libraryURL;
    NSXPCConnection * _xpcConnection;
}

@property (nonatomic, readonly) NSXPCConnection *xpcConnection;

+ (id)defaultClient;

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 reply:(id /* block */)arg2;
- (void)configureXPCConnection;
- (id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1;
- (void)dispatchBlockWithoutBoost:(id /* block */)arg1;
- (id)dumpAnalysisStatusError:(id*)arg1;
- (id)faceCandidatesForKeyFaceForPersonsWithLocalIdentifiers:(id)arg1 error:(id*)arg2;
- (id)faceClusteringInformation:(unsigned long long)arg1 error:(id*)arg2;
- (void)faceProcessingStatusForUserInterface:(id /* block */)arg1;
- (void)generateMemoriesRelatedDiagnosticsLogsWithReply:(id /* block */)arg1;
- (void)generateMemoriesWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (id)init;
- (id)initWithLibraryURL:(id)arg1;
- (void)invalidate;
- (void)invalidateGraphWithReply:(id /* block */)arg1;
- (id)localizedLabelForSceneIdentifier:(unsigned int)arg1 error:(id*)arg2;
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (bool)performFaceProcessingOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (id)performSceneClassificationOnAssetWithLocalIdentifier:(id)arg1 error:(id*)arg2;
- (void)personPromoterAdvancedStatus:(id /* block */)arg1;
- (void)personPromoterStatus:(id /* block */)arg1;
- (bool)processPersonsWithOptions:(id)arg1 error:(id*)arg2;
- (void)rebuildGraphWithProgress:(id)arg1 reply:(id /* block */)arg2;
- (bool)rebuildPersonsWithOptions:(id)arg1 error:(id*)arg2;
- (bool)reclusterFacesWithOptions:(id)arg1 error:(id*)arg2;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (void)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)renderFaceTilesForFaceLocalIdentifiers:(id)arg1 inAssetWithLocalIdentifier:(id)arg2 error:(id*)arg3;
- (id)requestAllSocialGroupsForPersonIdentifier:(id)arg1 withError:(id*)arg2;
- (id)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetCollectionsRelatedToPersonIdentifiers:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (id)requestAssetsForPersonIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestContextDictionary;
- (id)requestContextDictionaryWithOperationId:(bool)arg1;
- (id)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(id)arg1 referenceAssetLocalIdentifier:(id)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5;
- (id)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 duration:(unsigned long long)arg2 precision:(unsigned long long)arg3 options:(id)arg4 error:(id*)arg5;
- (id)requestCurationDebugInformationForAssetLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestDefaultsObjectForKey:(id)arg1 withError:(id*)arg2;
- (id)requestExportGraphForPurpose:(id)arg1 error:(id*)arg2;
- (void)requestGraphRebuildFractionCompletedWithReply:(id /* block */)arg1;
- (id)requestGraphStatisticsWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestGraphStatus:(id*)arg1;
- (bool)requestInvalidatePersistentCaches:(id*)arg1;
- (bool)requestInvalidateTransientCaches:(id*)arg1;
- (id)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(id)arg1 precision:(unsigned long long)arg2 error:(id*)arg3;
- (id)requestMemoryTreeDebugInformationWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestMetadataSnapshotFolderCreation:(id*)arg1;
- (bool)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(id)arg1 momentLocalIdentifiersToDelete:(id)arg2 momentLocalIdentifiersToReload:(id)arg3 error:(id*)arg4;
- (id)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6;
- (id)requestRelatedDebugInformationBetweenReferenceAssetCollectionForLocalIdentifier:(id)arg1 andRelatedAssetCollectionForLocalIdentifier:(id)arg2 options:(id)arg3 precision:(unsigned long long)arg4 relatedType:(unsigned long long)arg5 error:(id*)arg6;
- (id)requestRelatedMomentsForPersonIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (bool)requestSetDefaultsObject:(id)arg1 forKey:(id)arg2 withError:(id*)arg3;
- (id)requestSnapshotServiceForCurationResultsWithGraphOptions:(id)arg1 error:(id*)arg2;
- (void)requestSnapshotServiceForMomentWithLocalIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (id)requestSnapshotServiceForPeopleCurationResultsWithGraphOptions:(id)arg1 error:(id*)arg2;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 reply:(id /* block */)arg5;
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(id)arg1 andRelatedResultsForLocalIdentifiers:(id)arg2 precision:(unsigned long long)arg3 relatedType:(unsigned long long)arg4 additionalSnapshotSummaryInfo:(id)arg5 reply:(id /* block */)arg6;
- (id)requestSnapshotServiceForRelatedResultsWithGraphOptions:(id)arg1 error:(id*)arg2;
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(id)arg1 reply:(id /* block */)arg2;
- (id)requestSocialGroupsForPersonIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestSortedArrayOfPersonIdentifiers:(id)arg1 withError:(id*)arg2;
- (id)requestSuggestedMePersonIdentifierWithError:(id*)arg1;
- (bool)requestTitleForAssetCollectionWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5;
- (bool)requestTitleForCollectionMomentListWithLocalIdentifier:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5;
- (bool)requestTitleForMemoryWithLocalIdentifier:(id)arg1 title:(id*)arg2 subtitle:(id*)arg3 error:(id*)arg4;
- (bool)requestTitleForPersonIdentifiers:(id)arg1 format:(long long)arg2 title:(id*)arg3 subtitle:(id*)arg4 error:(id*)arg5;
- (id)requestTransientMemoriesWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestTransientMemoryPropertiesWithOptions:(id)arg1 error:(id*)arg2;
- (id)requestWriteAdditionalDataToSnapshotResults:(id)arg1 forFilenameKey:(id)arg2 error:(id*)arg3;
- (bool)resetFaceClusteringState:(id*)arg1;
- (bool)resetPeople:(id*)arg1;
- (id)sceneNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2;
- (void)scheduleAssetForOnDemandAnalysisWithUUID:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3 completionHandler:(id /* block */)arg4;
- (id)searchResultNodesForSceneClassifications:(id)arg1 error:(id*)arg2;
- (id)searchResultNodesForSceneIdentifiers:(id)arg1 error:(id*)arg2;
- (void)setJobProcessingConstraintsWithValues:(id)arg1 mask:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setupXpcConnection;
- (void)simulateMemoriesNotificationWithOptions:(id)arg1 reply:(id /* block */)arg2;
- (long long)suggestVerifiedPersonLocalIdentifierForFaceWithLocalIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (long long)suggestVerifiedPersonLocalIdentifierForPersonWithLocalIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (long long)suggestedPersonsForPersonWithLocalIdentifier:(id)arg1 toBeConfirmedPersonSuggestions:(id)arg2 toBeRejectedPersonSuggestions:(id)arg3 completion:(id /* block */)arg4;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (long long)updateKeyFacesOfPersonsWithLocalIdentifiers:(id)arg1 forceUpdate:(bool)arg2 completion:(id /* block */)arg3;
- (id)xpcConnection;

@end
