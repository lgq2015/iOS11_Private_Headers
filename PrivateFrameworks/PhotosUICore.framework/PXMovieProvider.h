/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMovieProvider : NSObject {
    PHAssetCollection * _assetCollection;
    <PXMovieProviderDelegate> * _delegate;
    PHAsset * _keyAsset;
}

@property (nonatomic, readonly) PHAssetCollection *assetCollection;
@property (nonatomic, readonly) bool canPlayMovie;
@property (nonatomic) <PXMovieProviderDelegate> *delegate;
@property (nonatomic, readonly) PXDiagnosticsItemProvider *diagnosticsItemProvider;
@property (nonatomic, readonly) PHAsset *keyAsset;
@property (nonatomic, readonly) UIViewController *movieViewController;

- (void).cxx_destruct;
- (id)assetCollection;
- (bool)canPlayMovie;
- (id)delegate;
- (id)diagnosticsItemProvider;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 keyAsset:(id)arg2;
- (id)keyAsset;
- (id)movieViewController;
- (bool)ppt_runTest:(id)arg1 options:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
