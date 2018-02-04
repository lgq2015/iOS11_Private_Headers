/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCharacterFrameBuffer : NSObject {
    unsigned int  _colorRenderbuffer;
    unsigned int  _defaultFBOName;
    int  _height;
    int  _width;
}

- (id)initWithLayer:(id)arg1;
- (void)invalidate;
- (void)present;
- (bool)resizeWithLayer:(id)arg1;
- (void)setupWithLayer:(id)arg1;
- (bool)validWithLayer:(id)arg1;

@end