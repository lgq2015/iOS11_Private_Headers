/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge {
    long long  _failureCount;
    bool  _hasPassword;
    NSString * _password;
    <NSURLAuthenticationChallengeSender> * _sender;
    NSString * _user;
    bool  _userNameIsEditable;
}

@property long long failureCount;
@property bool hasPassword;
@property (retain) NSString *password;
@property <NSURLAuthenticationChallengeSender> *sender;
@property (retain) NSString *user;
@property bool userNameIsEditable;

- (void)dealloc;
- (long long)failureCount;
- (bool)hasPassword;
- (id)init;
- (id)password;
- (id)sender;
- (void)setFailureCount:(long long)arg1;
- (void)setHasPassword:(bool)arg1;
- (void)setPassword:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setUser:(id)arg1;
- (void)setUserNameIsEditable:(bool)arg1;
- (id)user;
- (bool)userNameIsEditable;
- (bool)userNameIsEmail;

@end
