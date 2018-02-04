/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCShareMemoViewController : UIActivityViewController {
    RCCompositionController * _compositionController;
}

@property (nonatomic, readonly) RCCompositionController *compositionController;

+ (id)_newPresentedPrepareAlertControllerForComposition:(id)arg1 dismissHandler:(id /* block */)arg2;
+ (id)_newPresentedPrepareFailureAlertControllerForComposition:(id)arg1;
+ (void)prepareToShareComposition:(id)arg1 ignoringInteraction:(bool)arg2 shouldContinuePreparingBlock:(id /* block */)arg3 preparedHandler:(id /* block */)arg4;
+ (void)presentInViewController:(id)arg1 composition:(id)arg2 ignoringInteraction:(bool)arg3 shouldContinuePreparingBlock:(id /* block */)arg4 preparedToPresentBlock:(id /* block */)arg5;
+ (id)unsupportedActivityTypes;

- (void).cxx_destruct;
- (id)compositionController;
- (id)initWithCompositionController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
