/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderPipelineVideoFrame : NSObject {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameTime;
    struct __CVBuffer { } * _pixelBuffer;
}

@property (readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } frameTime;
@property (readonly) struct __CVBuffer { }*pixelBuffer;

- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameTime;
- (id)initWithFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 pixelBuffer:(struct __CVBuffer { }*)arg2;
- (struct __CVBuffer { }*)pixelBuffer;

@end
