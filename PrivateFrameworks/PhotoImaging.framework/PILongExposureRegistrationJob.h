/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

@interface PILongExposureRegistrationJob : NURenderJob {
    struct { 
        struct { 
            long long x; 
            long long y; 
        } origin; 
        struct { 
            long long width; 
            long long height; 
        } size; 
    }  _guideExtent;
    VNImageHomographicAlignmentObservation * _observation;
    CIImage * _stillImage;
}

@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } guideExtent;
@property (nonatomic, retain) VNImageHomographicAlignmentObservation *observation;
@property (nonatomic, retain) CIImage *stillImage;

- (void).cxx_destruct;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })guideExtent;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (id)observation;
- (bool)prepare:(out id*)arg1;
- (id)registrationRequest;
- (bool)render:(out id*)arg1;
- (id)result;
- (id)scalePolicy;
- (void)setGuideExtent:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setObservation:(id)arg1;
- (void)setStillImage:(id)arg1;
- (id)stillImage;
- (bool)wantsCompleteStage;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;
- (bool)wantsRenderScaleClampedToNativeScale;

@end
