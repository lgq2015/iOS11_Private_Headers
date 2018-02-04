/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKSecondFactorCodeEntryContentViewController : UIViewController <AKSecondFactorCodeEntry, CAAnimationDelegate> {
    NSArray * _activeConstraints;
    AKAppleIDAuthenticationContext * _authenticationContext;
    AKCodeEntryView * _codeGeneratorView;
    AKBasicLoginContentViewController * _titleHeaderViewController;
}

@property (nonatomic, retain) NSArray *activeConstraints;
@property (nonatomic, retain) AKAppleIDAuthenticationContext *authenticationContext;
@property (nonatomic, retain) AKCodeEntryView *codeGeneratorView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *generatedCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *reason;
@property (readonly) Class superclass;
@property (nonatomic, retain) AKBasicLoginContentViewController *titleHeaderViewController;

- (void).cxx_destruct;
- (void)_configureCodeGenView;
- (void)_configureTitleHeaderView;
- (void)_updateFontContstraints:(id)arg1;
- (id)activeConstraints;
- (id)authenticationContext;
- (void)clearSecondFactorEntry;
- (id)codeGeneratorView;
- (void)dealloc;
- (id)generatedCode;
- (void)jiggleAView;
- (void)loadView;
- (id)reason;
- (void)setActiveConstraints:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setCodeGeneratorView:(id)arg1;
- (void)setPasscodeFieldDisabled:(bool)arg1;
- (void)setReason:(id)arg1;
- (void)setTitleHeaderViewController:(id)arg1;
- (id)titleHeaderViewController;
- (void)updateViewConstraints;
- (void)viewDidAppear:(bool)arg1;

@end
