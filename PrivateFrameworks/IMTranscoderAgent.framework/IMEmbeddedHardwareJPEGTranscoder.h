/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
 */

@interface IMEmbeddedHardwareJPEGTranscoder : NSObject {
    bool  _canHardwareScaleImage;
    NSData * _imageData;
    struct __CFDictionary { } * _imageProperties;
    struct __IOSurface { } * _ioSurfaceRef;
    bool  _stripImageMetadata;
    double  _targetJPEGCompressionValue;
}

@property (nonatomic) bool stripImageMetadata;
@property (nonatomic) double targetJPEGCompressionValue;

- (bool)_decodeImageToIOSurface;
- (bool)_isJPEGImage:(struct CGImageSource { }*)arg1;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 imageSource:(struct CGImageSource { }*)arg2;
- (bool)scaleImageToFitLargestDimension:(id)arg1 outputData:(id*)arg2;
- (void)setStripImageMetadata:(bool)arg1;
- (void)setTargetJPEGCompressionValue:(double)arg1;
- (bool)stripImageMetadata;
- (double)targetJPEGCompressionValue;

@end
