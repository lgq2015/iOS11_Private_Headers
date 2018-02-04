/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPlacesGeotaggableMediaProvider : NSObject <PXPlacesMapGeotaggableInfoDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_fetchImageManagerAssetForPlacesAsset:(id)arg1;
- (void)imageForGeotaggable:(id)arg1 ofSize:(struct CGSize { double x1; double x2; })arg2 networkAccessAllowed:(bool)arg3 andCompletion:(id /* block */)arg4;

@end
