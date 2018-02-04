/* made by EzioChiu.
 */

@protocol PUDisplayAsset <NSObject, NSCopying>

@required

- (double)aspectRatio;
- (bool)canPlayLoopingVideo;
- (bool)canPlayPhotoIris;
- (NSDate *)creationDate;
- (double)duration;
- (bool)hasPhotoColorAdjustments;
- (bool)isAnimatedImage;
- (unsigned long long)isContentEqualTo:(id <PUDisplayAsset>)arg1;
- (bool)isFavorite;
- (bool)isLivePhoto;
- (bool)isPhotoIrisPlaceholder;
- (bool)isTemporaryPlaceholder;
- (NSString *)localizedGeoDescription;
- (CLLocation *)location;
- (unsigned long long)mediaSubtypes;
- (unsigned long long)mediaType;
- (NSDate *)modificationDate;
- (unsigned long long)originalFilesize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisStillDisplayTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoIrisVideoDuration;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (long long)playbackStyle;
- (long long)playbackVariation;
- (NSString *)uniformTypeIdentifier;
- (NSString *)uuid;

@end
