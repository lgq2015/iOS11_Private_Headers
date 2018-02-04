/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFTelephonyNavigationMitigationPolicy : NSObject {
    long long  _classification;
    NSDate * _dateUserLastDeclined;
    <_SFDialogPresenting> * _dialogPresenter;
}

@property (nonatomic) <_SFDialogPresenting> *dialogPresenter;

+ (double)test_suspiciousClassificationExpirationDuration;

- (void).cxx_destruct;
- (void)_checkIfSuspiciousClassificationHasExpiredAndTransitionIfNeeded;
- (void)_handleInput:(long long)arg1;
- (id)dialogPresenter;
- (void)handleNavigationToURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)policyAppliesToURL:(id)arg1;
- (void)setDialogPresenter:(id)arg1;
- (void)userAcceptedCallPrompt;
- (void)userDeclinedCallPrompt;

@end
