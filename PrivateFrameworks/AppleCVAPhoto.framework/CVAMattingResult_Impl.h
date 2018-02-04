/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAMattingResult_Impl : NSObject <CVAMattingResult> {
    struct __CVBuffer { } * _alphaMattePixelBuffer;
    <CVADisparityPostprocessingResult> * _disparityPostprocessingResult;
}

@property (readonly) struct __CVBuffer { }*alphaMattePixelBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <CVADisparityPostprocessingResult> *disparityPostprocessingResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)alphaMattePixelBuffer;
- (void)dealloc;
- (id)disparityPostprocessingResult;
- (id)initWithDisparityPostprocessingResult:(id)arg1 alphaMattePixelBuffer:(struct __CVBuffer { }*)arg2;

@end
