/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUICarrierSpaceOptInSplashScreen : BFFSplashController {
    id /* block */  _continueButtonAction;
    PSListController * _listController;
}

@property (nonatomic, copy) id /* block */ continueButtonAction;
@property (nonatomic) PSListController *listController;

- (void).cxx_destruct;
- (id /* block */)continueButtonAction;
- (void)continueButtonPressed;
- (id)initWithParent:(id)arg1;
- (id)listController;
- (void)setContinueButtonAction:(id /* block */)arg1;
- (void)setListController:(id)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
