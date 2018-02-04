/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVADisparityPostprocessingResult_Impl : NSObject <CVADisparityPostprocessingResult> {
    float  _backgroundDisparityRatio;
    float  _backgroundDisparitySum;
    float  _backgroundDisparitySumVariance;
    float  _backgroundSeparationLikelihood;
    struct __CVBuffer { } * _canonicalDisparityPixelBuffer;
    float  _closeCanonicalDisparityAverage;
    float  _deltaCanonicalDisparity;
    float  _erodedForegroundRatio;
    NSArray * _faceCanonicalDisparityAverage;
    NSArray * _faceInvalidDisparityRatio;
    float  _focusDisparity;
    float  _foregroundRatio;
    float  _invalidDisparityRatio;
    float  _invalidDisparityRatioVariance;
    struct __CVBuffer { } * _postprocessedDisparityPixelBuffer;
}

@property (readonly) float backgroundDisparityRatio;
@property (readonly) float backgroundDisparitySum;
@property (readonly) float backgroundDisparitySumVariance;
@property (readonly) float backgroundSeparationLikelihood;
@property (readonly) struct __CVBuffer { }*canonicalDisparityPixelBuffer;
@property (readonly) float closeCanonicalDisparityAverage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) float deltaCanonicalDisparity;
@property (readonly, copy) NSString *description;
@property (readonly) float erodedForegroundRatio;
@property (readonly) NSArray *faceCanonicalDisparityAverage;
@property (readonly) NSArray *faceInvalidDisparityRatio;
@property (readonly) float focusDisparity;
@property (readonly) float foregroundRatio;
@property (readonly) unsigned long long hash;
@property (readonly) float invalidDisparityRatio;
@property (readonly) float invalidDisparityRatioVariance;
@property (readonly) struct __CVBuffer { }*postprocessedDisparityPixelBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)backgroundDisparityRatio;
- (float)backgroundDisparitySum;
- (float)backgroundDisparitySumVariance;
- (float)backgroundSeparationLikelihood;
- (struct __CVBuffer { }*)canonicalDisparityPixelBuffer;
- (float)closeCanonicalDisparityAverage;
- (void)dealloc;
- (float)deltaCanonicalDisparity;
- (float)erodedForegroundRatio;
- (id)faceCanonicalDisparityAverage;
- (id)faceInvalidDisparityRatio;
- (float)focusDisparity;
- (float)foregroundRatio;
- (id)initWithPostprocessedDisparityBuffer:(struct __CVBuffer { }*)arg1 canonicalDisparityPixelBuffer:(struct __CVBuffer { }*)arg2 focusCanonicalDisparity:(float)arg3 backgroundDisparitySum:(float)arg4 backgroundDisparitySumVariance:(float)arg5 backgroundDisparityRatio:(float)arg6 invalidDisparityRatio:(float)arg7 invalidDisparityRatioVariance:(float)arg8 deltaCanonicalDisparity:(float)arg9 backgroundSeparationLikelihood:(float)arg10 closeCanonicalDisparityAverage:(float)arg11 faceCanonicalDisparityAverage:(id)arg12 faceInvalidDisparityRatio:(id)arg13 foregroundRatio:(float)arg14 erodedForegroundRatio:(float)arg15;
- (float)invalidDisparityRatio;
- (float)invalidDisparityRatioVariance;
- (struct __CVBuffer { }*)postprocessedDisparityPixelBuffer;

@end
