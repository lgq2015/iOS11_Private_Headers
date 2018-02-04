/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKStillImageCaptureResponse : CMKCaptureResponse {
    NSString * _avalancheUUID;
    CIFilter * _effectFilter;
    bool  _finalResponse;
    id /* block */  _stillImageCompletionBlock;
    UIImage * _stillImageFilteredPreviewImage;
    struct __IOSurface { } * _stillImageFilteredPreviewSurface;
    NSData * _stillImageJPEGData;
    NSMutableDictionary * _stillImageJob;
    UIImage * _stillImageOriginalImage;
    struct opaqueCMSampleBuffer { } * _stillImageOriginalSampleBuffer;
    struct __IOSurface { } * _stillImageOriginalSurface;
    unsigned long long  _stillImageOriginalSurfaceSize;
    id /* block */  _stillImageRequestEnqueuedBlock;
    UIImage * _stillImageUnfilteredPreviewImage;
    struct __IOSurface { } * _stillImageUnfilteredPreviewSurface;
    NSString * _timelapseDestinationPath;
    bool  _transient;
}

@property (nonatomic, copy) NSString *avalancheUUID;
@property (nonatomic, copy) CIFilter *effectFilter;
@property (getter=isFinalResponse, nonatomic) bool finalResponse;
@property (nonatomic, copy) id /* block */ stillImageCompletionBlock;
@property (nonatomic, retain) UIImage *stillImageFilteredPreviewImage;
@property (nonatomic) struct __IOSurface { }*stillImageFilteredPreviewSurface;
@property (nonatomic, retain) NSData *stillImageJPEGData;
@property (nonatomic, retain) NSMutableDictionary *stillImageJob;
@property (nonatomic, readonly, copy) NSDictionary *stillImageMetadata;
@property (nonatomic, retain) UIImage *stillImageOriginalImage;
@property (nonatomic) struct opaqueCMSampleBuffer { }*stillImageOriginalSampleBuffer;
@property (nonatomic) struct __IOSurface { }*stillImageOriginalSurface;
@property (nonatomic) unsigned long long stillImageOriginalSurfaceSize;
@property (nonatomic, copy) id /* block */ stillImageRequestEnqueuedBlock;
@property (nonatomic, retain) UIImage *stillImageUnfilteredPreviewImage;
@property (nonatomic) struct __IOSurface { }*stillImageUnfilteredPreviewSurface;
@property (nonatomic, readonly) UIImage *thumbnailImage;
@property (nonatomic, copy) NSString *timelapseDestinationPath;
@property (getter=isTransient, nonatomic) bool transient;

- (void).cxx_destruct;
- (id)avalancheUUID;
- (void)dealloc;
- (id)effectFilter;
- (id)init;
- (bool)isFinalResponse;
- (bool)isTransient;
- (void)releaseCachedImages;
- (void)setAvalancheUUID:(id)arg1;
- (void)setEffectFilter:(id)arg1;
- (void)setFinalResponse:(bool)arg1;
- (void)setStillImageCompletionBlock:(id /* block */)arg1;
- (void)setStillImageFilteredPreviewImage:(id)arg1;
- (void)setStillImageFilteredPreviewSurface:(struct __IOSurface { }*)arg1;
- (void)setStillImageJPEGData:(id)arg1;
- (void)setStillImageJob:(id)arg1;
- (void)setStillImageOriginalImage:(id)arg1;
- (void)setStillImageOriginalSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setStillImageOriginalSurface:(struct __IOSurface { }*)arg1;
- (void)setStillImageOriginalSurfaceSize:(unsigned long long)arg1;
- (void)setStillImageRequestEnqueuedBlock:(id /* block */)arg1;
- (void)setStillImageUnfilteredPreviewImage:(id)arg1;
- (void)setStillImageUnfilteredPreviewSurface:(struct __IOSurface { }*)arg1;
- (void)setTimelapseDestinationPath:(id)arg1;
- (void)setTransient:(bool)arg1;
- (id /* block */)stillImageCompletionBlock;
- (id)stillImageFilteredPreviewImage;
- (struct __IOSurface { }*)stillImageFilteredPreviewSurface;
- (id)stillImageJPEGData;
- (id)stillImageJob;
- (id)stillImageMetadata;
- (id)stillImageOriginalImage;
- (struct opaqueCMSampleBuffer { }*)stillImageOriginalSampleBuffer;
- (struct __IOSurface { }*)stillImageOriginalSurface;
- (unsigned long long)stillImageOriginalSurfaceSize;
- (id /* block */)stillImageRequestEnqueuedBlock;
- (id)stillImageUnfilteredPreviewImage;
- (struct __IOSurface { }*)stillImageUnfilteredPreviewSurface;
- (id)thumbnailImage;
- (id)timelapseDestinationPath;

@end
