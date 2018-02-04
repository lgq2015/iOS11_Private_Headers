/* made by EzioChiu
   Image: /System/Library/Frameworks/MetalKit.framework/MetalKit
 */

@interface MTKOffscreenDrawable : NSObject <CAMetalDrawable> {
    <MTLDevice> * _device;
    unsigned long long  _drawableID;
    CAMetalLayer * _layer;
    unsigned long long  _pixelFormat;
    double  _presentedTime;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    <MTLTexture> * _texture;
    bool  _textureDirty;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <MTLDevice> *device;
@property (nonatomic, readonly) unsigned long long drawableID;
@property (readonly) unsigned long long hash;
@property (readonly) CAMetalLayer *layer;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic, readonly) double presentedTime;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (readonly) <MTLTexture> *texture;

- (void).cxx_destruct;
- (void)addPresentedHandler:(id /* block */)arg1;
- (id)device;
- (unsigned long long)drawableID;
- (id)initWithDevice:(id)arg1 pixelFormat:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 drawableID:(unsigned long long)arg4;
- (id)layer;
- (unsigned long long)pixelFormat;
- (void)present;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (double)presentedTime;
- (void)setDevice:(id)arg1;
- (void)setPixelFormat:(unsigned long long)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)texture;

@end
