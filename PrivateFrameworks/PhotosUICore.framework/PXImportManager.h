/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXImportManager : NSObject {
    NSProgress * _progress;
    NSMapTable * _progressToCompletionHandlerMapping;
    NSMapTable * _progressToErrorsMapping;
    NSMapTable * _progressToProvidersMapping;
    NSMapTable * _progressToSharedSourcesCompletionHandlerMapping;
    NSMapTable * _providersToImportedResultObjectMapping;
}

@property (nonatomic, readonly) NSProgress *progress;

+ (id)defaultManager;
+ (id)supportedTypeIdentifiers;

- (void).cxx_destruct;
- (void)_addProgress:(id)arg1 forItemProviders:(id)arg2;
- (void)_addProgress:(id)arg1 forItemProviders:(id)arg2 assetCreationCompletionHandler:(id /* block */)arg3;
- (void)_addProgress:(id)arg1 forItemProviders:(id)arg2 sharedSourceCompletionHandler:(id /* block */)arg3;
- (id)_assetsForImportedItemProviders:(id)arg1;
- (void)_handleCompletionOfImportForItemProvider:(id)arg1 resultObject:(id)arg2 progress:(id)arg3 error:(id)arg4;
- (id)_sourcesForItemProviders:(id)arg1;
- (void)fetchAssetsFromDrop:(id)arg1 importIfNeeded:(bool)arg2 completion:(id /* block */)arg3;
- (id)importDragItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)importSharedSourcesForDragItems:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)progress;

@end
