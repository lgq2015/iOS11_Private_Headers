/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAnimatedImage : NSObject {
    double  _duration;
    unsigned long long  _frameCount;
    ISAnimatedImage * _is_animatedImage;
    unsigned long long  _loopCount;
    unsigned long long  _pixelHeight;
    unsigned long long  _pixelWidth;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) unsigned long long frameCount;
@property (nonatomic, readonly) ISAnimatedImage *is_animatedImage;
@property (nonatomic, readonly) unsigned long long loopCount;
@property (nonatomic, readonly) unsigned long long pixelHeight;
@property (nonatomic, readonly) unsigned long long pixelWidth;

+ (void)cancelAnimatedImageRequest:(long long)arg1;
+ (long long)requestAnimatedImageWithURL:(id)arg1 completion:(id /* block */)arg2;
+ (long long)requestAnimatedImageWithURL:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)_initializePropertiesWithAnimatedImage:(id)arg1;
- (double)duration;
- (unsigned long long)frameCount;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 cachingStrategy:(long long)arg2 useSharedDecoding:(bool)arg3;
- (id)is_animatedImage;
- (unsigned long long)loopCount;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;

@end
