/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitArtworkManager : NSObject {
    VKIconManager * _iconManager;
    VKShieldManager * _shieldManager;
}

@property (nonatomic, readonly) VKIconManager *iconManager;
@property (nonatomic, readonly) VKShieldManager *shieldManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_createImageWithBlockInAutoreleasePoolIfNeeded:(id /* block */)arg1;
- (id)_imageFroMVKImage:(id)arg1;
- (id)_imageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 withWidthPaddingMultiple:(double)arg5 fullBleedColor:(id*)arg6;
- (bool)_isMemoryConstrained;
- (id)_vkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 widthPaddingMultiple:(double)arg5;
- (id)iconManager;
- (id)initWithShieldManager:(id)arg1 iconManager:(id)arg2;
- (void)purge;
- (id)shieldManager;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 withWidthPaddingMultiple:(double)arg5;
- (id)transitArtworkImageWithDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4 withWidthPaddingMultiple:(double)arg5 fullBleedColor:(id*)arg6;
- (id)transitArtworkImageWithShieldDataSource:(id)arg1 size:(long long)arg2 featureType:(unsigned long long)arg3 scale:(double)arg4;

@end
