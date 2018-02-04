/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLEngineDerivativesCache : NSObject {
    NSURL * _cacheMappingURL;
    NSURL * _cacheURL;
    Class  _derivativeGeneratorClass;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _tryCreatingCacheFolder;
}

@property (nonatomic, readonly, copy) NSURL *cacheURL;
@property (nonatomic, retain) Class derivativeGeneratorClass;

- (void).cxx_destruct;
- (id)_cacheKeyForReferenceResource:(id)arg1;
- (bool)_checkGeneratedResources:(id)arg1 error:(id*)arg2;
- (bool)_checkResource:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (void)_createCacheFolderIfNecessary;
- (id)_finalFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1;
- (id)_folderNameForReferenceResource:(id)arg1;
- (bool)_isUnsupportedFormatError:(id)arg1;
- (id)_tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1;
- (void)_updateChange:(id*)arg1 fromOldChange:(id)arg2 withResources:(id)arg3;
- (id)cacheURL;
- (id)cachedResourcesForReferenceResource:(id)arg1;
- (Class)derivativeGeneratorClass;
- (void)discardCache;
- (void)generateDerivativesForChange:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCacheURL:(id)arg1;
- (void)noteGeneratedResouces:(id)arg1 haveBeenGeneratedForReferenceResource:(id)arg2;
- (void)setDerivativeGeneratorClass:(Class)arg1;
- (id)tempFolderURLForGeneratedResourcesWithReferenceResource:(id)arg1;

@end
