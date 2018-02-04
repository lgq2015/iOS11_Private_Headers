/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface DCPreferences : NSUserDefaults

@property (nonatomic, retain) NSString *currentDataVersionNumber;
@property (nonatomic, retain) NSString *logLevel;
@property (nonatomic) bool traceLogsEnabled;
@property (nonatomic) bool xmlPropertyLists;

+ (id)preferences;

- (id)_authCookieKeyForService:(id)arg1;
- (void)_postDidChangeNotification;
- (id)_trustedCertDataKeyForService:(id)arg1;
- (id)authCookieForService:(id)arg1;
- (void)clearAllAuthCookiesAndTrustedCertData;
- (void)clearAuthCookieAndTrustedCertDataForService:(id)arg1;
- (id)currentDataVersionNumber;
- (id)logLevel;
- (void)setAuthCookie:(id)arg1 andTrustedCertData:(id)arg2 forService:(id)arg3;
- (void)setCurrentDataVersionNumber:(id)arg1;
- (void)setLogLevel:(id)arg1;
- (void)setTraceLogsEnabled:(bool)arg1;
- (void)setXmlPropertyLists:(bool)arg1;
- (bool)traceLogsEnabled;
- (id)trustedCertDataForService:(id)arg1;
- (bool)xmlPropertyLists;

@end
