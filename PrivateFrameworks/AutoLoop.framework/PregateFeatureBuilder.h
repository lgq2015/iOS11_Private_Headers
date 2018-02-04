/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface PregateFeatureBuilder : NSObject {
    NSArray * _facesArray;
    struct vector<FloatPoint, std::__1::allocator<FloatPoint> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _frameBlurVectors;
    struct vector<FloatPoint, std::__1::allocator<FloatPoint> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _frameOffsets;
    struct vector<CMTime, std::__1::allocator<CMTime> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    }  _frameTimes;
    NSArray * _movieMetadata;
    NSDictionary * _stillImageMetadata;
    NSDictionary * _videoTrackMetadataDict;
    NSMutableDictionary * featuresDict;
    NSMutableDictionary * fullFeaturesDict;
    ExifMetadataExtractor * irisStillExtractor;
    IrisVideoMetadataExtractor * irisVideoExtractor;
    NSArray * stdProcessInputKeysArray;
}

@property (retain) NSArray *facesArray;
@property (readonly) NSMutableDictionary *featuresDict;
@property /* Warning: unhandled struct encoding: '{vector<FloatPoint' */ struct  frameBlurVectors; /* unknown property attribute:  std::__1::allocator<FloatPoint> >=^{?}}} */
@property /* Warning: unhandled struct encoding: '{vector<FloatPoint' */ struct  frameOffsets; /* unknown property attribute:  std::__1::allocator<FloatPoint> >=^{?}}} */
@property /* Warning: unhandled struct encoding: '{vector<CMTime' */ struct  frameTimes; /* unknown property attribute:  std::__1::allocator<CMTime> >=^{?}}} */
@property (readonly) NSMutableDictionary *fullFeaturesDict;
@property (retain) ExifMetadataExtractor *irisStillExtractor;
@property (retain) IrisVideoMetadataExtractor *irisVideoExtractor;
@property (retain) NSArray *movieMetadata;
@property (retain) NSArray *stdProcessInputKeysArray;
@property (retain) NSDictionary *stillImageMetadata;
@property (retain) NSDictionary *videoTrackMetadataDict;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildFullDictionary;
- (id)facesArray;
- (id)featuresDict;
- (void)fillVector:(struct vector<float, std::__1::allocator<float> > { float *x1; float *x2; struct __compressed_pair<float *, std::__1::allocator<float> > { float *x_3_1_1; } x3; }*)arg1 withPerFrameStats:(id)arg2;
- (struct vector<FloatPoint, std::__1::allocator<FloatPoint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > { struct { /* ? */ } *x_3_1_1; } x3; })frameBlurVectors;
- (struct vector<FloatPoint, std::__1::allocator<FloatPoint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > { struct { /* ? */ } *x_3_1_1; } x3; })frameOffsets;
- (struct vector<CMTime, std::__1::allocator<CMTime> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_1_1; } x3; })frameTimes;
- (id)fullFeaturesDict;
- (id)init;
- (id)irisStillExtractor;
- (id)irisVideoExtractor;
- (id)movieMetadata;
- (int)process;
- (void)processBlurVectors;
- (int)processFullDictionary;
- (int)processMovieMetadata;
- (void)processOffsetVectors;
- (void)processPresentationTimes;
- (int)processStandardPerFrameKeys;
- (int)processStill;
- (int)processStillImageFaceData;
- (bool)processStillImageMetadata;
- (int)processVidTrackMetadata;
- (int)processVideo;
- (int)readPerFrameMetadataToArrays;
- (void)setFacesArray:(id)arg1;
- (void)setFrameBlurVectors:(struct vector<FloatPoint, std::__1::allocator<FloatPoint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > { struct { /* ? */ } *x_3_1_1; } x3; })arg1;
- (void)setFrameOffsets:(struct vector<FloatPoint, std::__1::allocator<FloatPoint> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<FloatPoint *, std::__1::allocator<FloatPoint> > { struct { /* ? */ } *x_3_1_1; } x3; })arg1;
- (void)setFrameTimes:(struct vector<CMTime, std::__1::allocator<CMTime> > { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<CMTime *, std::__1::allocator<CMTime> > { struct { /* ? */ } *x_3_1_1; } x3; })arg1;
- (void)setIrisStillExtractor:(id)arg1;
- (void)setIrisVideoExtractor:(id)arg1;
- (void)setMovieMetadata:(id)arg1;
- (void)setStdProcessInputKeysArray:(id)arg1;
- (void)setStillImageMetadata:(id)arg1;
- (void)setVideoTrackMetadataDict:(id)arg1;
- (int)standardProcessKey:(id)arg1 addToDictionary:(id)arg2;
- (id)stdProcessInputKeysArray;
- (id)stillImageMetadata;
- (id)videoTrackMetadataDict;

@end
