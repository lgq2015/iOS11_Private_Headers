/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXAnimatedImageFrame : NSObject {
    SXAnimatedImageViewCache * _cache;
    double  _duration;
    struct CGImageSource { } * _imageSource;
    long long  _imageType;
    unsigned long long  _index;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) struct CGImageSource { }*imageSource;
@property (nonatomic, readonly) long long imageType;
@property (nonatomic, readonly) unsigned long long index;

- (void).cxx_destruct;
- (void)captureFrameProperties;
- (void)dealloc;
- (double)duration;
- (id)image;
- (struct CGImageSource { }*)imageSource;
- (long long)imageType;
- (unsigned long long)index;
- (id)initWithImageSource:(struct CGImageSource { }*)arg1 index:(unsigned long long)arg2 cache:(id)arg3 type:(long long)arg4;

@end
