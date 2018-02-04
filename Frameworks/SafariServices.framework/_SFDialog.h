/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDialog : NSObject {
    bool  _completed;
}

@property (nonatomic, readonly, copy) NSArray *additionalCancellationExemptions;
@property (nonatomic, readonly) bool canceledOnCommittedNavigation;
@property (nonatomic, readonly) bool canceledOnProvisionalNavigation;
@property (nonatomic, readonly) bool completionHandlerBlocksWebProcess;
@property (nonatomic, readonly) long long presentationStyle;

+ (id)_dialogWithTitle:(id)arg1 message:(id)arg2 primaryAction:(id)arg3 secondaryAction:(id)arg4 applicationModal:(bool)arg5 completionHandler:(id /* block */)arg6;
+ (id)authenticationDialogWithAuthenticationChallenge:(id)arg1 committedURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)blockedPopupWindowDialogWithCompletionHandler:(id /* block */)arg1;
+ (id)continuePrintingDialogWithTitle:(id)arg1 message:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)dialogWithWebUIAlert:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)downloadBlockedDialogWithFileType:(long long)arg1 initiatingURL:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)formSubmissionDialogWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)genericErrorDialogWithTitle:(id)arg1 message:(id)arg2 applicationModal:(bool)arg3;
+ (id)javaScriptAlertDialogWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)javaScriptConfirmDialogWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)javaScriptPromptDialogWithMessage:(id)arg1 defaultText:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)mailNavigationDialogWithCompletionHandler:(id /* block */)arg1;
+ (id)noFeedAppDialogWithCompletionHandler:(id /* block */)arg1;
+ (id)pageLoadErrorWithMessage:(id)arg1;
+ (id)printBlockedDialogWithCompletionHandler:(id /* block */)arg1;
+ (id)redirectDialogWithMessage:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)saveBasicAuthenticationPasswordDialog:(bool)arg1 presentsAsActionSheet:(bool)arg2 completionHandler:(id /* block */)arg3;
+ (id)telephonyNavigationDialogWithCompletionHandler:(id /* block */)arg1;
+ (id)userMediaPermissionDialogWithHost:(id)arg1 devices:(id)arg2 completionHandler:(id /* block */)arg3;

- (id)additionalCancellationExemptions;
- (bool)canceledOnCommittedNavigation;
- (bool)canceledOnProvisionalNavigation;
- (void)completeWithResponse:(id)arg1;
- (bool)completionHandlerBlocksWebProcess;
- (void)didCompleteWithResponse:(id)arg1;
- (id)newDialogViewRepresentation;
- (id)newViewControllerRepresentationWithCompletionHandler:(id /* block */)arg1;
- (long long)presentationStyle;

@end
