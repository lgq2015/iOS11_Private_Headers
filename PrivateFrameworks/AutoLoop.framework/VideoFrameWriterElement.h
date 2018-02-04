/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface VideoFrameWriterElement : NSObject {
    long long  _frameNumber;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameTime;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (nonatomic) long long frameNumber;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } frameTime;
@property (nonatomic) struct __CVBuffer { }*pixelBuffer;

- (void)DeallocPixBuffer;
- (void)dealloc;
- (long long)frameNumber;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameTime;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setFrameNumber:(long long)arg1;
- (void)setFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setPixelBuffer:(struct __CVBuffer { }*)arg1;

@end
