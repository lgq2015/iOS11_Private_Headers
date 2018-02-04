/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFinishSetupAssistantOptInController : NSObject <BYFollowUpFlowControlling, VTUIEnrollTrainingViewControllerDelegate> {
    id /* block */  _completion;
    VTUIEnrollTrainingViewController * _enrollmentController;
    BFFFinishSetupAssistantOptInController * _selfReference;
    bool  _willOfferVoiceTrigger;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)finishSetupAssistantOptInController;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)continueSetup;
- (id)init;
- (void)setCompletion:(id /* block */)arg1;
- (void)showLearnMore;
- (void)skipSetup;
- (id)viewControllerWithCompletion:(id /* block */)arg1;

@end
