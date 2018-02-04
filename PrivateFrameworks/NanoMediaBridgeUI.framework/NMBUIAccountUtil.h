/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
 */

@interface NMBUIAccountUtil : NSObject {
    ACAccountStore * _accountStore;
    ACAccount * _idmsAccount;
    ACAccount * _itunesAccount;
    NSSManager * _nssManager;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) ACAccount *idmsAccount;
@property (nonatomic, retain) ACAccount *itunesAccount;
@property (nonatomic, retain) NSSManager *nssManager;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_attemptSignIn;
- (bool)_doesAccount:(id)arg1 matchAccount:(id)arg2;
- (bool)_doesAccount:(id)arg1 matchAccountDict:(id)arg2;
- (bool)_doesAccountWithAltDSID:(id)arg1 DSID:(id)arg2 username:(id)arg3 matchAccountWithAltDSID:(id)arg4 DSID:(id)arg5 username:(id)arg6;
- (id)_idmsAccountForCurrentAccount;
- (id)_itunesAccountNoAuth;
- (void)_sendITunesAccountToGizmoIfNecessary;
- (void)_signGizmoIntoITunesAccount;
- (id)_signInOptions;
- (id)accountStore;
- (id)idmsAccount;
- (id)itunesAccount;
- (id)nssManager;
- (void)sendITunesAccountToGizmoIfNecessary;
- (void)setAccountStore:(id)arg1;
- (void)setIdmsAccount:(id)arg1;
- (void)setItunesAccount:(id)arg1;
- (void)setNssManager:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (id)workQueue;

@end
