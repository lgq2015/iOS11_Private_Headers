/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface StepByStepController : AssistantCallbackController <AutoGuessSetup, StepByStepUIDelegateResult> {
    id  _delegate;
    NSDictionary * _restoreRecommendation;
    struct StepByStepContext { } * _stepByStepContext;
}

@property <StepByStepUIDelegate> *delegate;
@property (retain) NSDictionary *restoreRecommendation;

+ (id)stepByStepController;

- (int)cancelStepByStep;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)restoreRecommendation;
- (int)resume;
- (void)setDelegate:(id)arg1;
- (void)setRestoreRecommendation:(id)arg1;
- (int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)stepByStepNextStepResult:(int)arg1 withOptions:(id)arg2;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext { unsigned int x1; struct AssistantContext {} *x2; int x3; struct __CFDictionary {} *x4; int x5; id x6; struct _opaque_pthread_mutex_t { long long x_7_1_1; BOOL x_7_1_2[56]; } x7; void *x8; long long x9; }*)arg1;

@end
