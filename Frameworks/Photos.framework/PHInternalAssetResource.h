/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHInternalAssetResource : PHAssetResource <PHCPLAssetResource> {
    NSString * _assetLocalIdentifier;
    unsigned long long  _cplResourceType;
    id  _fileReservation;
    PHSandboxExtensionWrapper * _sandboxExtensionWrapper;
}

@property (nonatomic, readonly) unsigned long long cplResourceType;
@property (nonatomic, retain) id fileReservation;
@property (setter=_setSandboxExtensionWrapper:, nonatomic, retain) PHSandboxExtensionWrapper *sandboxExtensionWrapper;

+ (bool)_isResourceFileCreatedOnDemandWithType:(long long)arg1 asset:(id)arg2;
+ (id)resourceForType:(long long)arg1 fromAsset:(id)arg2 managedAsset:(id)arg3;

- (void).cxx_destruct;
- (void)_acquireSandboxExtensionIfNeeded;
- (void)_fixupOriginalFilename;
- (void)_fixupUTI;
- (bool)_inconsistentTypeAndUTIOrMissingFileWithShouldCheckFileExistence:(bool)arg1;
- (id /* block */)_onDemandFileLoaderForResourceType:(long long)arg1 asset:(id)arg2;
- (void)_populateFromAsset:(id)arg1;
- (void)_populateFromAssetAlternatePath:(id)arg1 alternatePath:(id)arg2 assetResourceType:(long long)arg3;
- (bool)_populateFromManagedAsset:(id)arg1 usingCPLType:(unsigned long long)arg2;
- (void)_populateFromManagedAssetSidecar:(id)arg1 utiHint:(id)arg2;
- (void)_setAssetLocalIdentifier:(id)arg1;
- (void)_setSandboxExtensionWrapper:(id)arg1;
- (void)_unpin;
- (long long)analysisType;
- (id)assetLocalIdentifier;
- (unsigned long long)cplResourceType;
- (void)dealloc;
- (id)description;
- (bool)fileExists;
- (id)fileReservation;
- (id)initWithResourceType:(long long)arg1 fromAsset:(id)arg2 managedAsset:(id)arg3;
- (bool)isLibraryAssetResource;
- (bool)pin;
- (id)sandboxExtensionWrapper;
- (void)setFileReservation:(id)arg1;

@end
