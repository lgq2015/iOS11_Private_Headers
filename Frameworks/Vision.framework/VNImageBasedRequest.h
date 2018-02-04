/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal> {
    NSArray * _inputFaceObservations;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _regionOfInterest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *inputFaceObservations;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } regionOfInterest;
@property (readonly) Class superclass;

+ (void)recordDefaultOptionsInDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1;
- (void)applyConfigurationOfRequest:(id)arg1;
- (bool)getOptionalValidatedInputFaceObservations:(id*)arg1 clippedToRegionOfInterest:(bool)arg2 error:(id*)arg3;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)inputFaceObservations;
- (bool)isFullCoverageRegionOfInterest;
- (id)observationsCacheKey;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterest;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setInputFaceObservations:(id)arg1;
- (void)setRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)validateConfigurationAndReturnError:(id*)arg1;
- (id)validatedInputFaceObservationsClippedToRegionOfInterest:(bool)arg1 error:(id*)arg2;

@end
