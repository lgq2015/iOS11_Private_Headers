/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FASharedSubscriptionSpecifierProvider : NSObject {
    ACAccount * _appleAccount;
    <FASharedSubscriptionSpecifierProviderDelegeate> * _delegate;
    bool  _isLoadingSpecifiers;
    NSOperationQueue * _networkActivityQueue;
    PSListController * _presenter;
    FASharedServicesResponse * _sharedSubscriptionResponse;
    NSArray * _specifiers;
    PSSpecifier * _spinnerCell;
    bool  _updateSubsriptionSpecifiers;
}

@property (nonatomic) <FASharedSubscriptionSpecifierProviderDelegeate> *delegate;
@property (nonatomic, copy) NSArray *specifiers;

- (void).cxx_destruct;
- (void)_handleSubscriptionListResponse:(id)arg1;
- (void)_loadSubscriptionServices;
- (void)_serviceSpecifierWasTapped:(id)arg1;
- (id)_sharedSubscriptionGroupSpecifier;
- (id)_valueForServiceSpecifier:(id)arg1;
- (id)delegate;
- (id)initWithAppleAccount:(id)arg1 presenter:(id)arg2;
- (void)reloadSpecifiers;
- (void)setDelegate:(id)arg1;
- (void)setSpecifiers:(id)arg1;
- (id)specifiers;

@end
