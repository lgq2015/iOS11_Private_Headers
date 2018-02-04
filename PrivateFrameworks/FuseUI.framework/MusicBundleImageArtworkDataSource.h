/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicBundleImageArtworkDataSource : NSObject <MPArtworkDataSource> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSCache * _defaultCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedArtworkDataSource;

- (void).cxx_destruct;
- (id)_cacheForArtworkCatalog:(id)arg1;
- (void)_getImageForArtworkCatalog:(id)arg1 isExistenceCheck:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
- (bool)areRepresentationsAvailableForCatalog:(id)arg1;
- (void)cancelLoadingRepresentationForArtworkCatalog:(id)arg1;
- (id)existingRepresentationForArtworkCatalog:(id)arg1;
- (id)init;
- (bool)isRepresentation:(id)arg1 bestRepresentationForArtworkCatalog:(id)arg2;
- (void)loadRepresentationForArtworkCatalog:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)visualIdenticalityIdentifierForCatalog:(id)arg1;

@end
