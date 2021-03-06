/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAMattingRequest : NSObject {
    struct __CVBuffer { } * _destinationAlphaMattePixelBuffer;
    CVADisparityPostprocessingRequest * _disparityPostprocessingRequest;
}

@property (readonly) struct __CVBuffer { }*destinationAlphaMattePixelBuffer;
@property (readonly) CVADisparityPostprocessingRequest *disparityPostprocessingRequest;

- (void).cxx_destruct;
- (void)dealloc;
- (struct __CVBuffer { }*)destinationAlphaMattePixelBuffer;
- (id)disparityPostprocessingRequest;
- (id)initWithDisparityPostprocessingRequest:(id)arg1 destinationAlphaMattePixelBuffer:(struct __CVBuffer { }*)arg2;

@end
