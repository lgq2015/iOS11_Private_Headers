/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
 */

@interface MCUIInfoListController : PSListController {
    NSString * _continueButtonTitle;
    <MCUIInfoListDelegate> * _delegate;
    NSArray * _info;
    NSString * _navTitle;
}

@property (nonatomic, retain) NSString *continueButtonTitle;
@property (nonatomic) <MCUIInfoListDelegate> *delegate;
@property (nonatomic, copy) NSArray *info;
@property (nonatomic, retain) NSString *navTitle;

- (void).cxx_destruct;
- (void)_cancelButtonClicked;
- (void)_installButtonClicked;
- (void)_setupNavBar:(bool)arg1;
- (void)_tellDelegateWeWantToContinue:(bool)arg1;
- (id)continueButtonTitle;
- (id)delegate;
- (id)info;
- (id)navTitle;
- (void)setContinueButtonTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setNavTitle:(id)arg1;
- (id)specifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
