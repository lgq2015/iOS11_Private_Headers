/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AEPackageTransport : PXObservable {
    NSMutableArray * __stagedIdentifiersInOrder;
    NSMutableDictionary * __stagedPackagesByIdentifier;
}

@property (nonatomic, readonly) NSMutableArray *_stagedIdentifiersInOrder;
@property (nonatomic, readonly) NSMutableDictionary *_stagedPackagesByIdentifier;

- (void).cxx_destruct;
- (void)_addPackageToStaging:(id)arg1;
- (void)_removePackageFromStagingWithIdentifier:(id)arg1;
- (id)_stagedIdentifiersInOrder;
- (id)_stagedPackagesByIdentifier;
- (void)commitPackage:(id)arg1;
- (id)init;
- (id)mutableChangeObject;
- (id)orderedStagedIdentifiers;
- (id)packagesWithLivePhotoContent;
- (void)performChanges:(id /* block */)arg1;
- (void)reportError:(id)arg1;
- (void)stagePackage:(id)arg1;
- (void)stagePackages:(id)arg1;
- (id)stagedPackageForIdentifier:(id)arg1;
- (id)stagedPackages;
- (void)unstagePackageWithIdentifier:(id)arg1;
- (void)unstagePackagesWithIdentifiers:(id)arg1;

@end
