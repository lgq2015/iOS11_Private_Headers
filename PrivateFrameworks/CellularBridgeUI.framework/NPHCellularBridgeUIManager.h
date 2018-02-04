/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
 */

@interface NPHCellularBridgeUIManager : NSObject {
    bool  LTEMayImpactService;
    UIViewController * _hostViewController;
    NSError * _persistentError;
    unsigned long long  _planFlows;
    bool  _planFlowsIdentified;
    NSArray * _proxyPlanItems;
    bool  _remotePlanItemsRequested;
    bool  shouldOfferRemotePlan;
    bool  shouldOfferSignupCompletion;
    bool  shouldOfferTrialPlan;
    bool  shouldShowAddNewRemotePlan;
}

@property (nonatomic, readonly) bool LTEMayImpactService;
@property (nonatomic, readonly) bool cellularPlanIsSetUp;
@property (nonatomic, readonly) bool shouldOfferRemotePlan;
@property (nonatomic, readonly) bool shouldOfferSignupCompletion;
@property (nonatomic, readonly) bool shouldOfferTrialPlan;
@property (nonatomic, readonly) bool shouldShowAddNewRemotePlan;

+ (void)_presentAirplaneModeOnAlertOnViewController:(id)arg1;
+ (void)_presentCellularRequiredModeAlertOnViewController:(id)arg1;
+ (void)_presentErrorTitle:(id)arg1 onViewController:(id)arg2 withActionTitle:(id)arg3 actionHandler:(id /* block */)arg4;
+ (void)_presentErrorTitled:(id)arg1 withMessage:(id)arg2 onViewController:(id)arg3;
+ (id)carrierName;
+ (id)carrierPhoneNumber;
+ (void)presentCellularError:(id)arg1 onViewController:(id)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)LTEMayImpactService;
- (void)_ctCellularPlanInfoDidChange:(id)arg1;
- (void)_ctCellularRemoteProvisioningDidBecomeAvailable:(id)arg1;
- (bool)_isPersistentError:(id)arg1;
- (void)_prePromptForUserConsentIfNecessary:(id /* block */)arg1;
- (void)_prePromptUserForConsentTextType:(long long)arg1 relevantPlanItem:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_setUpCellularPlanDirectWithCompletion:(id /* block */)arg1;
- (void)_setUpCellularPlanWithActivationCodeOnViewController:(id)arg1 withCompletion:(id /* block */)arg2 codelessActivationBlock:(id /* block */)arg3;
- (bool)cellularPlanIsSetUp;
- (id)cellularPlans;
- (id)cellularUseError;
- (long long)consentRequiredRelevantCellularPlanItem:(id*)arg1;
- (void)finishRemoteProvisioning;
- (id)init;
- (bool)isCarrierSetupFlowUnsupported;
- (bool)isCompanionSIMMissing;
- (id)selectedCellularPlan;
- (void)setUpCellularPlanOnViewController:(id)arg1 withCompletion:(id /* block */)arg2;
- (bool)shouldOfferRemotePlan;
- (bool)shouldOfferSignupCompletion;
- (bool)shouldOfferTrialPlan;
- (bool)shouldShowAddNewRemotePlan;
- (void)startRemoteProvisioning;
- (void)updateCellularPlansWithFetch:(bool)arg1;
- (id)userConsentMessageForConsentType:(long long)arg1 relevantPlanItem:(id)arg2;

@end
