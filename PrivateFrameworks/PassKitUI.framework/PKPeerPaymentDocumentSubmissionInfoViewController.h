/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPeerPaymentDocumentSubmissionInfoViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate, PKPeerPaymentDocumentSubmissionControllerDelegate, PKPeerPaymentDocumentSubmissionViewControllerResponder> {
    long long  _context;
    PKPeerPaymentDocumentSubmissionController * _controller;
    long long  _currentSide;
    long long  _currentState;
    NSTimer * _timerDismissAfterSuccess;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)captureController:(id)arg1 didChangeStateTo:(long long)arg2;
- (void)captureController:(id)arg1 requestsDismissCurrentViewControllerAnimated:(bool)arg2;
- (void)captureController:(id)arg1 requestsPresentViewController:(id)arg2 animated:(bool)arg3;
- (void)didSelectSetupLater;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (void)explanationViewDidSelectSetupLater:(id)arg1;
- (id)initWithController:(id)arg1 context:(long long)arg2;
- (id)secondaryButton;
- (void)updateUIWithState:(long long)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
