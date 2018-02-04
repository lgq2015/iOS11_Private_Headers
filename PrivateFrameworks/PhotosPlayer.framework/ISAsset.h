/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISAsset : NSObject {
    id  _UIImage;
    unsigned long long  _options;
    struct CGImage { } * _photo;
    int  _photoEXIFOrientation;
    double  _photoTime;
    AVAsset * _videoAsset;
}

@property (nonatomic, readonly) bool hasColorAdjustments;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) struct CGImage { }*photo;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoCMTime;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly) double photoTime;
@property (nonatomic, readonly, copy) AVAsset *videoAsset;

+ (id)assetForURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (bool)hasColorAdjustments;
- (id)init;
- (id)initWithVideoAsset:(id)arg1 UIImage:(id)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage { }*)arg2 photoTime:(double)arg3;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage { }*)arg2 photoTime:(double)arg3 options:(unsigned long long)arg4;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage { }*)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4;
- (id)initWithVideoAsset:(id)arg1 photo:(struct CGImage { }*)arg2 photoTime:(double)arg3 photoEXIFOrientation:(int)arg4 options:(unsigned long long)arg5;
- (unsigned long long)options;
- (struct CGImage { }*)photo;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoCMTime;
- (int)photoEXIFOrientation;
- (double)photoTime;
- (void)resetAVObjects;
- (id)videoAsset;

@end
