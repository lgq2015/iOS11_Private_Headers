/* made by EzioChiu
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetRepresentationPrivate : NSObject <ALAssetsLibraryAsset> {
    NSString * _extension;
    bool  _isValid;
    ALAssetsLibrary * _library;
    PLManagedAsset * _photo;
    PLPhotoLibrary * _photoLibrary;
    PLSidecarFile * _sidecar;
}

@property (nonatomic, retain) PLPhotoLibrary *_photoLibrary;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isValid;
@property (nonatomic) ALAssetsLibrary *library;
@property (nonatomic, retain) PLManagedAsset *photo;
@property (nonatomic, retain) PLSidecarFile *sidecar;
@property (readonly) Class superclass;

+ (void)_clearFileDescriptorQueue;
+ (int)_fileDescriptorForPersistentURL:(id)arg1;
+ (void)_setupFileDescriptorQueue;
+ (int)_updateFileDescriptor:(int)arg1 forPersistentURL:(id)arg2;

- (void).cxx_destruct;
- (bool)_isImage;
- (bool)_isVideo;
- (void)_performBlockAndWait:(id /* block */)arg1;
- (id)_photoLibrary;
- (void)dealloc;
- (id)extension;
- (id)initWithManagedAsset:(id)arg1 sidecar:(id)arg2 extension:(id)arg3 library:(id)arg4;
- (bool)isValid;
- (id)library;
- (void)libraryDidChange;
- (id)photo;
- (void)setExtension:(id)arg1;
- (void)setIsValid:(bool)arg1;
- (void)setLibrary:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setSidecar:(id)arg1;
- (void)set_photoLibrary:(id)arg1;
- (id)sidecar;

@end
