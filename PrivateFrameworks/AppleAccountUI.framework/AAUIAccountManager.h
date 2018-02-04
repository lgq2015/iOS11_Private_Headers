/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
 */

@interface AAUIAccountManager : NSObject {
    ACAccountStore * _accountStore;
    id  _accountStoreDidChangeObserver;
    struct NSDictionary { Class x1; } * _accounts;
    <AAUIAccountManagerDelegate> * _delegate;
}

@property (nonatomic, readonly) ACAccountStore *accountStore;
@property (nonatomic, copy) NSDictionary *accounts;
@property (nonatomic) <AAUIAccountManagerDelegate> *delegate;

- (void).cxx_destruct;
- (struct NSDictionary { Class x1; }*)_delegate_accountsForAccountManager;
- (id)accountStore;
- (struct NSDictionary { Class x1; }*)accounts;
- (void)beginObservingAccountStoreDidChangeNotification;
- (void)dealloc;
- (id)delegate;
- (id)grandSlamAccountForService:(id)arg1;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (void)setAccounts:(struct NSDictionary { Class x1; }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopObservingAccountStoreDidChangeNotification;

@end
