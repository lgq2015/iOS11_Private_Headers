/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface HTTPSASLClientSessionManager : NSObject {
    HTTPSASLClientSession * _clientSession;
    DCService * _service;
}

@property (nonatomic, retain) HTTPSASLClientSession *clientSession;
@property (nonatomic, retain) DCService *service;

+ (id)HTTPSASLClientSessionManagerForService:(id)arg1;

- (void).cxx_destruct;
- (bool)authenticateClientSessionWithError:(id*)arg1;
- (id)clientSession;
- (void)defaultsDidChange:(id)arg1;
- (id)initWithService:(id)arg1;
- (void)restoreCachedCookieAndCertDataFromPreferences;
- (id)service;
- (void)setClientSession:(id)arg1;
- (void)setService:(id)arg1;

@end
