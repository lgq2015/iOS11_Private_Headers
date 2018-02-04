/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VideoScaler : NSObject {
    struct __IOSurfaceAccelerator { } * _ioSurfaceAccelerator;
    char * _tempBuffer1;
    char * _tempBuffer2;
    unsigned long long  _tempBufferHeight;
    unsigned long long  _tempBufferWidth;
}

- (int)convertAndScalePixelBuffer:(struct __CVBuffer { }*)arg1 toWidth:(int)arg2 toHeight:(int)arg3 withPixelFormat:(unsigned int)arg4 usingPixelBufferPool:(struct __CVPixelBufferPool { }*)arg5 andStoreTo:(struct __CVBuffer {}**)arg6;
- (void)dealloc;
- (id)init;
- (int)rotatePixelBuffer:(struct __CVBuffer { }*)arg1 withPixelFormat:(unsigned int)arg2 usingPixelBufferPool:(struct __CVPixelBufferPool { }*)arg3 andStoreTo:(struct __CVBuffer {}**)arg4;

@end
