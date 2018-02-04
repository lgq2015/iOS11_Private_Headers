/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKExplanationViewController : PKViewController <PKPaymentSetupPrivacyFooterViewDelegate> {
    long long  _context;
    PKExplanationView * _explanationView;
    <PKExplanationViewControllerDelegate> * _explanationViewControllerDelegate;
    bool  _showCancelButton;
    bool  _showDoneButton;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) PKExplanationView *explanationView;
@property (nonatomic) <PKExplanationViewControllerDelegate> *explanationViewControllerDelegate;
@property (nonatomic) bool showCancelButton;
@property (nonatomic) bool showDoneButton;

- (void).cxx_destruct;
- (void)_cancelPressed;
- (void)_dismissViewController;
- (void)_donePressed;
- (long long)context;
- (id)explanationView;
- (id)explanationViewControllerDelegate;
- (id)init;
- (id)initWithContext:(long long)arg1;
- (void)loadView;
- (id)pkui_navigationBarTintColor;
- (bool)pkui_prefersNavigationBarShadowHidden;
- (void)privacyFooterLinkTapped:(id)arg1;
- (void)setExplanationViewControllerDelegate:(id)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (void)setShowDoneButton:(bool)arg1;
- (bool)showCancelButton;
- (bool)showDoneButton;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
