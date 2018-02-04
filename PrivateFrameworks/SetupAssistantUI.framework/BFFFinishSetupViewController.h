/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFFinishSetupViewController : FLExtensionViewController <BFFFinishSetupFlowHosting, UINavigationControllerDelegate> {
    NSMutableSet * _completedFlowIdentifiers;
    id /* block */  _completion;
    NSMutableArray * _flowIdentifiers;
    FLFollowUpAction * _followUpAction;
    UINavigationController * _navigationController;
    UIViewController * _newRootViewController;
    id /* block */  _overrideFlowControllerGenerator;
    bool  _setupInProgress;
    NSMutableSet * _skippedFlowIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_keyValueDictionaryForURL:(id)arg1;
+ (id)_orderedFlowIdentifiersFromFlowIdentifiers:(id)arg1;

- (void).cxx_destruct;
- (void)_complete;
- (void)_didSatisfyInitializationForFlowController:(id)arg1;
- (void)_didSatisfyPreconditionsForFlowController:(id)arg1;
- (void)_ensureNavigationControllerWithViewController:(id)arg1;
- (id)_flowControllerForFlowIdentifier:(id)arg1;
- (id)_flowControllerForNextFlowIdentifier;
- (void)_flowDidFinishForIdentifiers:(id)arg1 result:(unsigned long long)arg2;
- (void)_performExtendedInitializationForFlowController:(id)arg1;
- (bool)_presentPreconditionViewControllerIfNecessaryForFlowController:(id)arg1;
- (void)_pushViewControllerOntoNavigationController:(id)arg1;
- (void)_startNextFlowIdentifier;
- (bool)didCompleteFlowInFinishSetup:(id)arg1;
- (bool)didSkipFlowInFinishSetup:(id)arg1;
- (void)loadView;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(bool)arg3;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
- (void)processFollowUpItem:(id)arg1 selectedAction:(id)arg2 completion:(id /* block */)arg3;
- (void)processURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setOverrideFlowControllerGenerator:(id /* block */)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
