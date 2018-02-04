/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXImageDecodingTools : NSObject {
    NSOperationQueue * _decodingQueue;
    CALayer * _rootLayer;
}

@property (nonatomic, retain) NSOperationQueue *decodingQueue;
@property (nonatomic, retain) CALayer *rootLayer;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (struct __CFString { }*)contentTypeForImageData:(id)arg1;
- (bool)dataIsAnimatedImage:(id)arg1;
- (id)decodeImage:(struct CGImage { }*)arg1;
- (id)decodingQueue;
- (id)imageFromData:(id)arg1;
- (id)imageFromData:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)init;
- (id)loadAnimatedImageFromImageData:(id)arg1;
- (void)loadImageFromImageData:(id)arg1 completion:(id /* block */)arg2;
- (struct CGImage { }*)newImageByDecodingImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (id)rootLayer;
- (void)setDecodingQueue:(id)arg1;
- (void)setRootLayer:(id)arg1;

@end