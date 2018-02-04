/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface CannedEncodedVideoCapture : NSObject <CannedVideoFrameFeeder> {
    int  _allFrameCount;
    double  _allFrameRate;
    AVAssetReader * _assetReader;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _attributeMutex;
    AVURLAsset * _compressedFileAsset;
    int  _frameCount;
    int  _height;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _inputMutex;
    NSString * _movieURLString;
    struct __CVPixelBufferPool { } * _pixelBufferPool;
    AVAssetReaderTrackOutput * _readerVideoTrackOutput;
    struct __CVPixelBufferPool { } * _rotatedPixelBufferPool;
    VideoScaler * _videoScaler;
    AVAssetTrack * _videoTrack;
    int  _width;
}

@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (nonatomic, retain) AVAssetReader *assetReader;
@property (nonatomic, retain) AVURLAsset *compressedFileAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int frameCount;
@property (readonly) unsigned long long hash;
@property (nonatomic) int height;
@property (nonatomic, retain) NSString *movieURLString;
@property (nonatomic, retain) AVAssetReaderTrackOutput *readerVideoTrackOutput;
@property (readonly) Class superclass;
@property (nonatomic, retain) VideoScaler *videoScaler;
@property (nonatomic, retain) AVAssetTrack *videoTrack;
@property (nonatomic) int width;

- (int)allFrameCount;
- (double)allFrameRate;
- (id)assetReader;
- (id)compressedFileAsset;
- (struct __CVBuffer { }*)createPixelBufferForFrameIndex:(int)arg1;
- (void)dealloc;
- (int)frameCount;
- (void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
- (int)height;
- (id)initWithPath:(id)arg1;
- (int)initialize;
- (int)initializeDecoder;
- (id)movieURLString;
- (id)readerVideoTrackOutput;
- (int)rotatePixelBuffer:(struct __CVBuffer { }*)arg1 andStoreTo:(struct __CVBuffer {}**)arg2;
- (void)setAllFrameCount:(int)arg1;
- (void)setAllFrameRate:(double)arg1;
- (void)setAssetReader:(id)arg1;
- (void)setCompressedFileAsset:(id)arg1;
- (void)setFrameCount:(int)arg1;
- (void)setHeight:(int)arg1;
- (void)setMovieURLString:(id)arg1;
- (void)setReaderVideoTrackOutput:(id)arg1;
- (void)setVideoScaler:(id)arg1;
- (void)setVideoTrack:(id)arg1;
- (void)setWidth:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2;
- (id)videoScaler;
- (id)videoTrack;
- (int)width;

@end
