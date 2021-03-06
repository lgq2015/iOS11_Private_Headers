/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXAssetAnalyzerRequest : NSObject <PXPhotoLibraryUIChangeObserver> {
    PHAsset * _asset;
    bool  _finished;
    id /* block */  _resultHandler;
    long long  _workerType;
}

@property (readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) long long workerType;

- (void).cxx_destruct;
- (void)_handleFinishWithSuccess:(bool)arg1;
- (id)asset;
- (void)dealloc;
- (id)initWithAsset:(id)arg1 workerType:(long long)arg2;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)runWithResultHandler:(id /* block */)arg1;
- (long long)workerType;

@end
