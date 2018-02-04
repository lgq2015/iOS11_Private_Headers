/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DATrustHandler : NSObject {
    <DATrustHandlerDelegate> * _delegate;
    NSMutableDictionary * _haveWarnedAboutCertDict;
}

@property (nonatomic) <DATrustHandlerDelegate> *delegate;
@property (nonatomic, retain) NSMutableDictionary *haveWarnedAboutCertDict;

- (void).cxx_destruct;
- (int)_actionForTrust:(struct __SecTrust { }*)arg1 host:(id)arg2 service:(id)arg3;
- (id)_serverSuffixesToAlwaysFail;
- (id)delegate;
- (void)handleTrust:(struct __SecTrust { }*)arg1 forHost:(id)arg2 forAccount:(id)arg3 withCompletionBlock:(id /* block */)arg4;
- (bool)handleTrustChallenge:(id)arg1 forAccount:(id)arg2;
- (bool)handleTrustChallenge:(id)arg1 forAccount:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)haveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (id)haveWarnedAboutCertDict;
- (id)initWithDelegate:(id)arg1;
- (bool)resetCertWarnings;
- (void)setDelegate:(id)arg1;
- (void)setHaveWarnedAboutCert:(id)arg1 forHost:(id)arg2;
- (void)setHaveWarnedAboutCertDict:(id)arg1;

@end
