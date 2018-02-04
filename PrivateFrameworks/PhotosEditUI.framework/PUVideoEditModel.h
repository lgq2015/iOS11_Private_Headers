/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUVideoEditModel : PUViewModel {
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _initialSlomoRegion;
    bool  _isSlomo;
    PFVideoAVObjectBuilder * _videoBuilder;
    double  _videoDuration;
    double  _videoEndTime;
    struct CGSize { 
        double width; 
        double height; 
    }  _videoSize;
    double  _videoStartTime;
}

@property (nonatomic, readonly) bool hasDefaultSlomoRegions;
@property (nonatomic, readonly) bool hasEdits;
@property (nonatomic, readonly) bool hasSlomoRegionEdits;
@property (nonatomic, readonly) bool hasTrimRegionEdits;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } initialSlomoRegion;
@property (nonatomic, readonly) bool isSlomo;
@property (nonatomic, readonly) bool isVideoValid;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } slomoRegion;
@property (nonatomic, readonly) double slomoRegionEndTime;
@property (nonatomic, readonly) double slomoRegionStartTime;
@property (nonatomic, retain) PFVideoAVObjectBuilder *videoBuilder;
@property (nonatomic) double videoDuration;
@property (nonatomic) double videoEndTime;
@property (nonatomic) struct CGSize { double x1; double x2; } videoSize;
@property (nonatomic) double videoStartTime;

- (void).cxx_destruct;
- (bool)_isTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 equivalentToTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 epsilon:(double)arg3;
- (bool)hasDefaultSlomoRegions;
- (bool)hasEdits;
- (bool)hasSlomoRegionEdits;
- (bool)hasTrimRegionEdits;
- (id)init;
- (id)initWithVideoAsset:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })initialSlomoRegion;
- (bool)isSlomo;
- (bool)isVideoValid;
- (id)newViewModelChange;
- (void)setInitialSlomoRegion:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setVideoBuilder:(id)arg1;
- (void)setVideoDuration:(double)arg1;
- (void)setVideoEndTime:(double)arg1;
- (void)setVideoSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVideoStartTime:(double)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })slomoRegion;
- (double)slomoRegionEndTime;
- (double)slomoRegionStartTime;
- (id)videoBuilder;
- (double)videoDuration;
- (double)videoEndTime;
- (struct CGSize { double x1; double x2; })videoSize;
- (double)videoStartTime;

@end
