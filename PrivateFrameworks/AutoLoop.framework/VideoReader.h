/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface VideoReader : NSObject {
    struct opaqueCMSampleBuffer { } * _lastFrame;
    unsigned int  _pixelFormatOptions;
    bool  _readAheadEnable;
    struct opaqueCMSampleBuffer { } * _readaheadBuf;
    NSCondition * _readaheadLock;
    int  _readaheadState;
    AVAsset * asset;
    AVAssetReader * assetReader;
    NSArray * formatDescriptions;
    float  fps;
    bool  fullRangeVideo;
    unsigned int  imageHeight;
    unsigned int  imageWidth;
    NSError * lastError;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  lastPresentationTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  minFrameDuration;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  preferredTransform;
    float  readLength;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  readLengthT;
    float  readStart;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  readStartT;
    int  timeScale;
    float  trackLength;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  trackLengthT;
    AVAssetReaderOutput * trackOutput;
    float  trackStart;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  trackStartT;
    AVAssetTrack * videoTrack;
}

@property (readonly) AVAsset *asset;
@property (readonly) AVAssetReader *assetReader;
@property (readonly) NSArray *formatDescriptions;
@property (readonly) float fps;
@property (readonly) bool fullRangeVideo;
@property (readonly) unsigned int imageHeight;
@property (readonly) unsigned int imageWidth;
@property (readonly) NSError *lastError;
@property struct opaqueCMSampleBuffer { }*lastFrame;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } lastPresentationTime;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minFrameDuration;
@property unsigned int pixelFormatOptions;
@property (readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } preferredTransform;
@property (setter=setReadAheadEnable:) bool readAheadEnable;
@property float readLength;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } readLengthT;
@property float readStart;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } readStartT;
@property struct opaqueCMSampleBuffer { }*readaheadBuf;
@property (retain) NSCondition *readaheadLock;
@property int readaheadState;
@property (readonly) int timeScale;
@property (readonly) float trackLength;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } trackLengthT;
@property (readonly) AVAssetReaderOutput *trackOutput;
@property (readonly) float trackStart;
@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } trackStartT;
@property (readonly) AVAssetTrack *videoTrack;

- (void).cxx_destruct;
- (id)asset;
- (id)assetReader;
- (int)buildAssetReader;
- (void)dealloc;
- (void)fireReadahead;
- (id)formatDescriptions;
- (float)fps;
- (bool)fullRangeVideo;
- (int)getFrame:(struct CGImage {}**)arg1;
- (int)getFrameAsSampleBuf:(struct opaqueCMSampleBuffer {}**)arg1;
- (int)getFrameAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 exactTime:(bool)arg2 frame:(struct opaqueCMSampleBuffer {}**)arg3;
- (unsigned int)imageHeight;
- (unsigned int)imageWidth;
- (id)initFromFile:(id)arg1;
- (id)initWithAsset:(id)arg1;
- (id)lastError;
- (struct opaqueCMSampleBuffer { }*)lastFrame;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lastPresentationTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minFrameDuration;
- (struct opaqueCMSampleBuffer { }*)nextSampleBuf;
- (unsigned int)pixelFormatOptions;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })preferredTransform;
- (bool)readAheadEnable;
- (float)readLength;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })readLengthT;
- (float)readStart;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })readStartT;
- (struct opaqueCMSampleBuffer { }*)readaheadBuf;
- (id)readaheadLock;
- (int)readaheadState;
- (int)reset;
- (void)setLastFrame:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setPixelFormatOptions:(unsigned int)arg1;
- (void)setReadAheadEnable:(bool)arg1;
- (void)setReadLength:(float)arg1;
- (void)setReadLengthT:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setReadStart:(float)arg1;
- (void)setReadStartT:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setReadaheadBuf:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)setReadaheadLock:(id)arg1;
- (void)setReadaheadState:(int)arg1;
- (int)skipFrames:(unsigned int)arg1;
- (int)timeScale;
- (float)trackLength;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })trackLengthT;
- (id)trackOutput;
- (float)trackStart;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })trackStartT;
- (id)videoTrack;

@end
