/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKMicaDocumentStore : LKDocumentStore <LKDocumentStoreDelegate> {
    _NTKMicaDocumentFaceSnapshottingWindow * _snapshotWindow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_hasWriteAccess;
+ (id)allDocuments;
+ (void)cacheThumbnailImage:(id)arg1 forKey:(id)arg2;
+ (id)cachedThumbnailImageForKey:(id)arg1;
+ (unsigned long long)indexOfDocument:(id)arg1;
+ (void)removeCachedThumbnailImageForDocument:(id)arg1;

- (void).cxx_destruct;
- (void)_asynchronouslySnapshotView:(id)arg1 completion:(id /* block */)arg2;
- (void)_didAddDocument:(id)arg1;
- (void)_didModifyDocument:(id)arg1;
- (void)_didRemoveDocument:(id)arg1;
- (void)_redrawSnapshotForDocument:(id)arg1;

@end
