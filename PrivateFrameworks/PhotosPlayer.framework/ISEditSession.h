/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
 */

@interface ISEditSession : NSObject {
    float  _audioVolume;
    AVAssetExportSession * _exportSession;
    id /* block */  _frameProcessor;
    CIImage * _inputImage;
    NSDictionary * _inputImageProperties;
    struct CGImageSource { } * _inputImageSource;
    unsigned int  _inputOrientation;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _inputVideoDuration;
    double  _inputVideoScale;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputVideoScaleRoundingError;
    bool  _isExporting;
    NSURL * _lastTemporaryVideoURL;
    CIImage * _outputImage;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _photoTime;
    CIContext * _renderContext;
    NSObject<OS_dispatch_queue> * _renderQueue;
    CIImage * _scaledOutputImage;
    NSObject<OS_dispatch_queue> * _stateQueue;
    long long  _subsampleFactor;
    CIImage * _subsampledInputImage;
    NSString * _temporaryDirectory;
    NSString * _uniqueIdentifier;
    AVAsset * _videoAsset;
}

@property float audioVolume;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property (copy) id /* block */ frameProcessor;
@property (readonly) CIImage *inputImage;
@property (readonly) unsigned int orientation;
@property (readonly) struct CGSize { double x1; double x2; } outputImageSize;
@property (readonly) struct CGSize { double x1; double x2; } outputVideoSize;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } photoTime;

+ (id)_createTemporaryDirectory;
+ (id)temporaryDirectory;

- (void).cxx_destruct;
- (bool)_canRenderAtPlaybackTime;
- (void)_cancelCurrentExportIfNeeded;
- (void)_exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_inputImage;
- (id)_inputImageProperties;
- (struct CGSize { double x1; double x2; })_inputImageSize;
- (unsigned int)_inputOrientation;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_inputVideoDuration;
- (double)_inputVideoScale;
- (struct CGSize { double x1; double x2; })_inputVideoSize;
- (id)_inputVideoTrack;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_inputVideoTransform;
- (id)_loadInputImage;
- (unsigned int)_loadInputImageOrientation;
- (id)_loadInputImageProperties;
- (id)_loadInputImageWithSubsampleFactor:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_loadInputVideoDuration;
- (id)_outputImage;
- (id)_outputImageProperties;
- (struct CGSize { double x1; double x2; })_outputImageSize;
- (id)_outputVideoMetadata;
- (struct CGSize { double x1; double x2; })_outputVideoSize;
- (struct CGSize { double x1; double x2; })_outputVideoSizeForScale:(double)arg1;
- (void)_prepareForPlaybackWithTargetSize:(struct CGSize { double x1; double x2; })arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)_processImage:(id)arg1 scale:(double)arg2 error:(id*)arg3;
- (void)_renderImageToURL:(id)arg1 fileType:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)_renderImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 completionHandler:(id /* block */)arg2;
- (void)_renderVideoToURL:(id)arg1 fileType:(id)arg2 targetSize:(struct CGSize { double x1; double x2; })arg3 volume:(float)arg4 completionHandler:(id /* block */)arg5;
- (id)_scaledInputImageForTargetScale:(double)arg1;
- (double)_targetScaleForTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (id)_temporaryURLOfType:(id)arg1;
- (id)_videoCompositionForTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (float)audioVolume;
- (void)cancel;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)exportToDestination:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)frameProcessor;
- (id)imageProperties;
- (id)init;
- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2 photoTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 photoOrientation:(unsigned int)arg4;
- (id)inputImage;
- (id)inputImageForRenderScale:(double)arg1;
- (unsigned int)orientation;
- (id)outputImage;
- (struct CGSize { double x1; double x2; })outputImageSize;
- (struct CGSize { double x1; double x2; })outputVideoSize;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })photoTime;
- (void)prepareForPlaybackWithTargetSize:(struct CGSize { double x1; double x2; })arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setAudioVolume:(float)arg1;
- (void)setFrameProcessor:(id /* block */)arg1;

@end
