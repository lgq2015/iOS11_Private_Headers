/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNDetectRectanglesRequest : VNImageBasedRequest {
    float  _maximumAspectRatio;
    unsigned long long  _maximumObservations;
    float  _minimumAspectRatio;
    float  _minimumConfidence;
    float  _minimumSize;
    float  _quadratureTolerance;
    unsigned long long  _requiredVersion;
}

@property (nonatomic) float maximumAspectRatio;
@property (nonatomic) unsigned long long maximumObservations;
@property (nonatomic) float minimumAspectRatio;
@property (nonatomic) float minimumConfidence;
@property (nonatomic) float minimumSize;
@property (nonatomic) float quadratureTolerance;
@property (setter=setRequiredVersion:, nonatomic) unsigned long long requiredVersion;

- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithCompletionHandler:(id /* block */)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (float)maximumAspectRatio;
- (unsigned long long)maximumObservations;
- (float)minimumAspectRatio;
- (float)minimumConfidence;
- (float)minimumSize;
- (id)observationsCacheKey;
- (float)quadratureTolerance;
- (unsigned long long)requiredVersion;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setMaximumAspectRatio:(float)arg1;
- (void)setMaximumObservations:(unsigned long long)arg1;
- (void)setMinimumAspectRatio:(float)arg1;
- (void)setMinimumConfidence:(float)arg1;
- (void)setMinimumSize:(float)arg1;
- (void)setQuadratureTolerance:(float)arg1;
- (void)setRequiredVersion:(unsigned long long)arg1;

@end
