/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface CannedRawVideoCapture : NSObject <CannedVideoFrameFeeder> {
    int  _allFrameCount;
    double  _allFrameRate;
    NSArray * _allResolutions;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _attributeMutex;
    struct __sFILE { char *x1; int x2; int x3; short x4; short x5; struct __sbuf { char *x_6_1_1; int x_6_1_2; } x6; int x7; void *x8; int (*x9)(); int (*x10)(); int (*x11)(); int (*x12)(); struct __sbuf { char *x_13_1_1; int x_13_1_2; } x13; struct __sFILEX {} *x14; int x15; unsigned char x16[3]; unsigned char x17[1]; struct __sbuf { char *x_18_1_1; int x_18_1_2; } x18; int x19; long long x20; } * _currentInputFile;
    struct __CVPixelBufferPool { } * _currentPixelBufferPool;
    NSDictionary * _currentResolution;
    int  _height;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _inputMutex;
    struct __CVPixelBufferPool { } * _rotatedPixelBufferPool;
    VideoScaler * _videoScaler;
    int  _width;
}

@property (nonatomic) int allFrameCount;
@property (nonatomic) double allFrameRate;
@property (nonatomic, retain) NSArray *allResolutions;
@property (nonatomic, retain) NSDictionary *currentResolution;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) int height;
@property (readonly) Class superclass;
@property (nonatomic, retain) VideoScaler *videoScaler;
@property (nonatomic) int width;

- (int)allFrameCount;
- (double)allFrameRate;
- (id)allResolutions;
- (struct __CVBuffer { }*)createPixelBufferForFrameIndex:(int)arg1;
- (id)currentResolution;
- (void)dealloc;
- (void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
- (int)height;
- (id)initWithPath:(id)arg1;
- (int)initializeFrameResolutionArrayFromFolder:(id)arg1;
- (int)rotatePixelBuffer:(struct __CVBuffer { }*)arg1 andStoreTo:(struct __CVBuffer {}**)arg2;
- (void)setAllFrameCount:(int)arg1;
- (void)setAllFrameRate:(double)arg1;
- (void)setAllResolutions:(id)arg1;
- (void)setCurrentResolution:(id)arg1;
- (void)setHeight:(int)arg1;
- (void)setVideoScaler:(id)arg1;
- (void)setWidth:(int)arg1;
- (int)setWidth:(int)arg1 height:(int)arg2;
- (id)videoScaler;
- (int)width;

@end
