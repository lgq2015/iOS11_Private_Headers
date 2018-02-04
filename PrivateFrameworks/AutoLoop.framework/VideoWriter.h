/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface VideoWriter : NSObject {
    AVAssetWriter * _assetWriter;
    long long  _currFrameTime;
    long long  _frameIncr;
    NSObject<OS_dispatch_queue> * _frameWriteQueue;
    bool  _initFailed;
    AVAssetWriterInputPixelBufferAdaptor * _inputAdaptor;
    NSConditionLock * _inputLock;
    AVAssetWriterInput * _writerInput;
    long long  currFrame;
    float  fps;
    unsigned int  imgHeight;
    unsigned int  imgWidth;
    NSError * lastError;
    unsigned int  pixelFormat;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  preferredTransform;
    int  timeScale;
}

@property (retain) AVAssetWriter *assetWriter;
@property (readonly) long long currFrame;
@property long long currFrameTime;
@property (readonly) float fps;
@property long long frameIncr;
@property (retain) NSObject<OS_dispatch_queue> *frameWriteQueue;
@property (readonly) unsigned int imgHeight;
@property (readonly) unsigned int imgWidth;
@property bool initFailed;
@property (retain) AVAssetWriterInputPixelBufferAdaptor *inputAdaptor;
@property (retain) NSConditionLock *inputLock;
@property (readonly) NSError *lastError;
@property (readonly) unsigned int pixelFormat;
@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (readonly) int timeScale;
@property (retain) AVAssetWriterInput *writerInput;

- (void).cxx_destruct;
- (id)addFrame:(struct CGImage { }*)arg1;
- (id)addFrameAsPixelBuf:(struct __CVBuffer { }*)arg1;
- (id)addFrameAsPixelBuf:(struct __CVBuffer { }*)arg1 atFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)assetWriter;
- (struct __CVBuffer { }*)createPixelBuffer;
- (long long)currFrame;
- (long long)currFrameTime;
- (void)endSessionAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)endSessionInfer;
- (id)finish;
- (float)fps;
- (long long)frameIncr;
- (id)frameWriteQueue;
- (unsigned int)imgHeight;
- (unsigned int)imgWidth;
- (bool)initFailed;
- (id)initForPath:(const char *)arg1 fileType:(id)arg2 codecType:(id)arg3 imgWidth:(unsigned int)arg4 imgHeight:(unsigned int)arg5 fps:(float)arg6 pixFormat:(unsigned int)arg7 metadata:(id)arg8;
- (id)initForURL:(id)arg1 fileType:(id)arg2 codecType:(id)arg3 imgWidth:(unsigned int)arg4 imgHeight:(unsigned int)arg5 fps:(float)arg6 pixFormat:(unsigned int)arg7 metadata:(id)arg8;
- (id)initForURL:(id)arg1 fileType:(id)arg2 codecType:(id)arg3 imgWidth:(unsigned int)arg4 imgHeight:(unsigned int)arg5 fps:(float)arg6 timeScale:(int)arg7 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg8 pixFormat:(unsigned int)arg9 metadata:(id)arg10;
- (id)inputAdaptor;
- (id)inputLock;
- (id)lastError;
- (unsigned int)pixelFormat;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (void)setAssetWriter:(id)arg1;
- (void)setCurrFrameTime:(long long)arg1;
- (void)setFrameIncr:(long long)arg1;
- (void)setFrameWriteQueue:(id)arg1;
- (void)setInitFailed:(bool)arg1;
- (void)setInputAdaptor:(id)arg1;
- (void)setInputLock:(id)arg1;
- (void)setInputReady;
- (void)setWriterInput:(id)arg1;
- (int)timeScale;
- (id)writerInput;

@end
