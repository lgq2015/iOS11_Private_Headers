/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMOwnerAccount_ios : FMOwnerAccount {
    ACAccount * _account;
}

@property (nonatomic, retain) ACAccount *account;

- (void).cxx_destruct;
- (id)account;
- (void)accountChanged;
- (id)dataclassProperties;
- (void)dealloc;
- (id)firstName;
- (id)hostNameOfType:(long long)arg1;
- (id)init;
- (void)initializeAccount;
- (id)lastName;
- (id)personId;
- (void)setAccount:(id)arg1;
- (id)tokenOfType:(long long)arg1;
- (id)username;

@end
