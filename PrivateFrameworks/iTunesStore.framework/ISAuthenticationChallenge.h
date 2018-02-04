/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISAuthenticationChallenge : NSObject {
    NSURLAuthenticationChallenge * _challenge;
    NSString * _localizedMessage;
    NSString * _localizedTitle;
}

@property (readonly) long long failureCount;
@property (readonly) bool hasPassword;
@property (retain) NSString *localizedMessage;
@property (retain) NSString *localizedTitle;
@property (readonly, retain) NSString *password;
@property (readonly) <NSURLAuthenticationChallengeSender> *sender;
@property (readonly, retain) NSString *user;
@property (readonly) bool userNameIsEditable;
@property (readonly) bool userNameIsEmail;

- (void)cancelAuthentication;
- (void)dealloc;
- (long long)failureCount;
- (bool)hasPassword;
- (id)initWithAuthenticationChallenge:(id)arg1;
- (id)localizedMessage;
- (id)localizedTitle;
- (id)password;
- (id)sender;
- (void)setLocalizedMessage:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)useCredential:(id)arg1;
- (id)user;
- (bool)userNameIsEditable;
- (bool)userNameIsEmail;

@end
