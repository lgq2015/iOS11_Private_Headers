/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKTimelapseListing : NSObject <NSCopying, NTKAVListing> {
    UIImage * _image;
    NSString * _imageName;
    NTKPhotoAnalysis * _photoAnalysis;
    unsigned long long  _theme;
    CLKVideo * _video;
    long long  _videoIndex;
    NSString * _videoName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) NTKPhotoAnalysis *photoAnalysis;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long theme;
@property (nonatomic, readonly) CLKVideo *video;
@property (nonatomic, readonly) long long videoIndex;

- (void).cxx_destruct;
- (void)_setHasAssets;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)discardAssets;
- (id)image;
- (id)initWithTheme:(unsigned long long)arg1 videoIndex:(long long)arg2 photoAnalysis:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isSimilarTo:(id)arg1;
- (id)photoAnalysis;
- (bool)snapshotDiffers:(id)arg1;
- (unsigned long long)theme;
- (id)video;
- (long long)videoIndex;

@end
