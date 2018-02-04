/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKSyncedAccount : NSObject {
    NSString * _accountId;
    NSString * _displayName;
    NSArray * _emailAddresses;
    unsigned long long  _resendInterval;
    bool  _resendRequested;
    bool  _shouldArchive;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic) unsigned long long resendInterval;
@property (nonatomic) bool resendRequested;
@property (nonatomic) bool shouldArchive;

- (void).cxx_destruct;
- (id)accountId;
- (id)displayName;
- (id)emailAddresses;
- (id)init;
- (id)initWithAccount:(id)arg1;
- (unsigned long long)resendInterval;
- (bool)resendRequested;
- (void)setAccountId:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setResendInterval:(unsigned long long)arg1;
- (void)setResendRequested:(bool)arg1;
- (void)setShouldArchive:(bool)arg1;
- (bool)shouldArchive;

@end
