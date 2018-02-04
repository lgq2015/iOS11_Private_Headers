/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNTrackingRequest : VNImageBasedRequest {
    VNDetectedObjectObservation * _inputObservation;
    bool  _lastFrame;
    unsigned long long  _trackingLevel;
}

@property (nonatomic, retain) VNDetectedObjectObservation *inputObservation;
@property (getter=isLastFrame, nonatomic) bool lastFrame;
@property (nonatomic) unsigned long long trackingLevel;

+ (unsigned long long)_trackingLevelEnumFromTrackingLevelOption:(id)arg1;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_newTrackerOptionsAndReturnError:(id*)arg1;
- (id)_resetTrackerIfNeeded:(id)arg1 trackerProvider:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (id)_trackingLevelOptionFromTrackingLevelEnum;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1;
- (id)initWithDetectedObjectObservation:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)inputObservation;
- (bool)internalPerformInContext:(id)arg1 error:(id*)arg2;
- (bool)isLastFrame;
- (id)newDefaultRequestInstance;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;
- (void)setInputObservation:(id)arg1;
- (void)setLastFrame:(bool)arg1;
- (void)setTrackingLevel:(unsigned long long)arg1;
- (id)trackerType;
- (unsigned long long)trackingLevel;
- (bool)warmUpRequestPerformer:(id)arg1 error:(id*)arg2;

@end
