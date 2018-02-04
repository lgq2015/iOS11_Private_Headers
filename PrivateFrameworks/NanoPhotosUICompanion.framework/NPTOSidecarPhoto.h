/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPhotosUICompanion.framework/NanoPhotosUICompanion
 */

@interface NPTOSidecarPhoto : NPTOPhoto {
    NSDictionary * _attributes;
    UIImage * _fullImage;
    NSString * _path;
    NSDictionary * _supplement;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } contentOffset;
@property (nonatomic, readonly) double irisDuration;
@property (nonatomic, readonly) double irisStillDisplayTime;
@property (nonatomic, readonly) NSURL *irisURL;
@property (nonatomic, readonly) bool isPhotoIris;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSDictionary *supplement;
@property (nonatomic, readonly) double zoomScale;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })contentOffset;
- (id)eagerlyDecodedFullImage;
- (id)faceRegions;
- (id)fullImage;
- (id)identifier;
- (id)initWithPath:(id)arg1;
- (double)irisDuration;
- (double)irisStillDisplayTime;
- (id)irisURL;
- (bool)isIrisVideoHidden;
- (bool)isPhotoIris;
- (id)lazilyDecodedFullImage;
- (id)modificationDate;
- (id)path;
- (id)supplement;
- (id)thumbnail:(long long)arg1;
- (id)thumbnailFacesRegions;
- (double)zoomScale;

@end
