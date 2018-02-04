/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISPlayerContent : NSObject {
    struct CGImage { } * _photo;
    int  _photoEXIFOrientation;
    bool  _photoHasColorAdjustments;
    bool  _photoIsOriginal;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _postPhotoFrameTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _prePhotoFrameTime;
    NSNumber * _variationIdentifier;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _videoDuration;
    AVPlayerItem * _videoPlayerItem;
}

@property (nonatomic, readonly) struct CGImage { }*photo;
@property (nonatomic, readonly) int photoEXIFOrientation;
@property (nonatomic, readonly) bool photoHasColorAdjustments;
@property (nonatomic, readonly) bool photoIsOriginal;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } postPhotoFrameTime;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } prePhotoFrameTime;
@property (nonatomic, readonly) NSNumber *variationIdentifier;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } videoDuration;
@property (nonatomic, readonly) AVPlayerItem *videoPlayerItem;

- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)hash;
- (id)initWithPhoto:(struct CGImage { }*)arg1 photoIsOriginal:(bool)arg2 photoEXIFOrientation:(int)arg3 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 videoDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5 photoHasColorAdjustments:(bool)arg6 videoPlayerItem:(id)arg7 prePhotoFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg8 postPhotoFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg9 variationIdentifier:(id)arg10;
- (bool)isEqual:(id)arg1;
- (struct CGImage { }*)photo;
- (int)photoEXIFOrientation;
- (bool)photoHasColorAdjustments;
- (bool)photoIsOriginal;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })postPhotoFrameTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })prePhotoFrameTime;
- (id)variationIdentifier;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })videoDuration;
- (id)videoPlayerItem;

@end
