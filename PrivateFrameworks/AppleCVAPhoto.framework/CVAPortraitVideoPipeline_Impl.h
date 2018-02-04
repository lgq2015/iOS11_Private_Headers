/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
 */

@interface CVAPortraitVideoPipeline_Impl : NSObject <CVADisparityPostprocessingVideoPipeline, CVAMattingVideoPipeline, CVAPortraitVideoPipeline> {
    struct __CVPixelBufferPool { } * _canonicalDisparityPixelBufferPool;
    <CVADisparityPostprocessingCompletionDelegate> * _disparityPostprocessingCompletionDelegate;
    struct unique_ptr<cva::FocusStateMachine, std::__1::default_delete<cva::FocusStateMachine> > { 
        struct __compressed_pair<cva::FocusStateMachine *, std::__1::default_delete<cva::FocusStateMachine> > { 
            struct FocusStateMachine {} *__first_; 
        } __ptr_; 
    }  _focusStateMachine;
    struct unique_ptr<cva::FusionImage, std::__1::default_delete<cva::FusionImage> > { 
        struct __compressed_pair<cva::FusionImage *, std::__1::default_delete<cva::FusionImage> > { 
            struct FusionImage {} *__first_; 
        } __ptr_; 
    }  _fusionImage;
    <CVAMattingCompletionDelegate> * _mattingCompletionDelegate;
    NSObject<OS_dispatch_queue> * _notificationQueue;
    <CVAPortraitCompletionDelegate> * _portraitCompletionDelegate;
    struct Preferences { 
        bool drawFocusMachineState; 
        int overlayShiftOnRendering; 
        int retainLastRelativeShift; 
        int noiseBits; 
        int fNumber_tenths; 
    }  _preferences;
    <CVAVideoPipelinePropertiesSPI> * _properties;
    float  _referenceLensPosition_um;
    struct unique_ptr<SdofStateMachine, std::__1::default_delete<SdofStateMachine> > { 
        struct __compressed_pair<SdofStateMachine *, std::__1::default_delete<SdofStateMachine> > { 
            struct SdofStateMachine {} *__first_; 
        } __ptr_; 
    }  _sdofIntensityStateMachine;
    struct unique_ptr<StageLightStateMachine, std::__1::default_delete<StageLightStateMachine> > { 
        struct __compressed_pair<StageLightStateMachine *, std::__1::default_delete<StageLightStateMachine> > { 
            struct StageLightStateMachine {} *__first_; 
        } __ptr_; 
    }  _stageLightStateMachine;
    VideoMattingMetal * _vmAccelerator;
    struct DynamicMetaParams { 
        float mattingCoeffUpdateRate; 
        float mattingCoeffUpdateRateFast; 
        float mattingCoeffColorStd; 
        float mattingCoeffColorStdFast; 
    }  _vmDynamicMetaParams;
    struct VideoMattingDynamicParams { 
        float updateRate; 
        float deltaCanonicalDisparity; 
        float alphaCoeffFilterColorStd; 
        float alphaGuidedFilterEps; 
        float alphaGammaExponent; 
        float focusCanonicalDisparity; 
        float backgroundCanonicalDisparity; 
        float thresholdHardness; 
        struct array<float, 3> { 
            float __elems_[3]; 
        } gravity; 
    }  _vmDynamicParams;
    struct VideoPostprocessingParams { 
        bool useFaceAsFocus; 
        float faceSizeRatioInFocus; 
        bool fillLargeHolesWithBackground; 
        float disparityIntervalInHoleSearch; 
        float backgroundFillMarginFromValidDisparity_px; 
        bool useTemporalRejection; 
    }  _vmPostprocessingParams;
    struct VideoMattingStaticParams { 
        unsigned int colorWidth; 
        unsigned int colorHeight; 
        unsigned int shiftWidth; 
        unsigned int shiftHeight; 
        unsigned int alphaWidth; 
        unsigned int alphaHeight; 
        unsigned int kernelSize; 
        unsigned int nScale; 
        float referenceShift; 
        float guidedFilterUnconfidentWeight; 
        float guidedFilterMinDistToDeweight; 
        float alphaMaxLaplacian; 
        float alphaContrastExponent; 
        float shiftFilterColorStd; 
        float shiftFilterUpdateRate; 
        float maxShiftFillingInconsistency; 
        float maxShiftFillingDistFromFg; 
        unsigned int maxDistToPushShiftEdgesFwd; 
        unsigned int maxDistToPushShiftEdgesRev; 
        int shiftPushingBgToFgShiftDifference; 
    }  _vmStaticParams;
    VideoRelightingMetal * _vrAccelerator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property <CVADisparityPostprocessingCompletionDelegate> *disparityPostprocessingCompletionDelegate;
@property (readonly) unsigned long long hash;
@property <CVAMattingCompletionDelegate> *mattingCompletionDelegate;
@property <CVAPortraitCompletionDelegate> *portraitCompletionDelegate;
@property (readonly) Class superclass;
@property (nonatomic, copy) <CVAVideoPipelineProperties> *videoPipelineProperties;

+ (void)drawCanonicalDisparity:(struct __CVBuffer { }*)arg1 onColor:(struct __CVBuffer { }*)arg2 focusMachineState:(int)arg3;
+ (int)pixelBufferPoolCreateWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned int)arg3 pool:(struct __CVPixelBufferPool {}**)arg4;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)disparityPostprocessingCompletionDelegate;
- (int)extractMatteWithRequest:(id)arg1;
- (int)extractMatteWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 mattingCompletionHandler:(id /* block */)arg3;
- (id)initWithProperties:(id)arg1;
- (id)internal_extractMatteWithRequest:(id)arg1 disparityPostprocessingResult:(id)arg2 usePostprocessedDisparity:(bool)arg3 gravity:(struct CVAVector { double x1; double x2; double x3; })arg4 mattingCompletionHandler:(id /* block */)arg5 isFinalStage:(bool)arg6 status:(int*)arg7;
- (int)internal_fixFocusPositionWithDisparityPostprocessingRequest:(id)arg1;
- (id)internal_postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 isFinalStage:(bool)arg3 status:(int*)arg4;
- (void)internal_relightWithRequest:(id)arg1 faceModel:(id)arg2 mattingResult:(id)arg3 status:(int*)arg4;
- (void)internal_renderStageLightWithRequest:(id)arg1 mattingResult:(id)arg2 portraitCompletionHandler:(id /* block */)arg3 status:(int*)arg4;
- (void)internal_renderWithRequest:(id)arg1 mattingResult:(id)arg2 portraitCompletionHandler:(id /* block */)arg3 status:(int*)arg4;
- (id)mattingCompletionDelegate;
- (id)portraitCompletionDelegate;
- (int)postprocessDisparityWithRequest:(id)arg1;
- (int)postprocessDisparityWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2;
- (int)renderWithRequest:(id)arg1;
- (int)renderWithRequest:(id)arg1 disparityPostprocessingCompletionHandler:(id /* block */)arg2 mattingCompletionHandler:(id /* block */)arg3 portraitCompletionHandler:(id /* block */)arg4;
- (void)setDisparityPostprocessingCompletionDelegate:(id)arg1;
- (void)setMattingCompletionDelegate:(id)arg1;
- (void)setPortraitCompletionDelegate:(id)arg1;
- (void)setVideoPipelineProperties:(id)arg1;
- (void)validateDisparityPostprocessingRequest:(id)arg1;
- (void)validateMattingRequest:(id)arg1;
- (void)validatePortraitRequest:(id)arg1;
- (id)videoPipelineProperties;

@end
