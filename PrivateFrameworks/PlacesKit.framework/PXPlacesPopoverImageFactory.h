/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesPopoverImageFactory : NSObject {
    NSCache * _cachedBackgroundImages;
    UIColor * _defaultBackgroundColor;
    <NSObject> * _memoryWarningObserver;
}

@property (nonatomic, retain) NSCache *cachedBackgroundImages;
@property (nonatomic, retain) UIColor *defaultBackgroundColor;
@property (nonatomic, retain) <NSObject> *memoryWarningObserver;

+ (struct CGSize { double x1; double x2; })backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_fetchAndCacheBackgroundImageWithName:(id)arg1;
- (id)annotationPlaceHolderImageUsingTraitCollection:(id)arg1;
- (id)backgroundImageNameForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (struct CGSize { double x1; double x2; })backgroundImageSizeForPopoverAnnotation;
- (struct CGSize { double x1; double x2; })backgroundImageSizeForType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;
- (id)cachedBackgroundImages;
- (id)createAlbumPlaceHolderImageUsingTraitCollection:(id)arg1;
- (id)createPopoverImageForGeotaggable:(id)arg1 withImage:(struct CGImage { }*)arg2 imageType:(unsigned long long)arg3 usingTraitCollection:(id)arg4;
- (void)dealloc;
- (id)defaultBackgroundColor;
- (id)imageNamed:(id)arg1;
- (id)init;
- (id)memoryWarningObserver;
- (void)setCachedBackgroundImages:(id)arg1;
- (void)setDefaultBackgroundColor:(id)arg1;
- (void)setMemoryWarningObserver:(id)arg1;
- (struct CGSize { double x1; double x2; })thumbnailImageSizeForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2 includeScale:(bool)arg3;
- (double)thumbnailTopMarginForImageType:(unsigned long long)arg1 usingTraitCollection:(id)arg2;

@end
