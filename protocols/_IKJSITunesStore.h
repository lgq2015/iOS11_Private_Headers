/* made by EzioChiu.
 */

@protocol _IKJSITunesStore <IKJSITunesStore, JSExport>

@required

- (NSString *)DSID;
- (NSDictionary *)accountInfo;
- (void)authenticate:(NSDictionary *)arg1 :(JSValue *)arg2;
- (void)clearCookies;
- (id)cookie;
- (NSString *)cookieURL;
- (NSDictionary *)eligibilityForService:(NSDictionary *)arg1;
- (void)evaluateScripts:(NSArray *)arg1 :(JSValue *)arg2;
- (void)flushUnreportedEvents;
- (JSValue *)getBag;
- (void)getServiceEligibility:(NSDictionary *)arg1 :(JSValue *)arg2;
- (void)invalidateBag;
- (bool)isManagedAppleID;
- (void)loadStoreContent:(NSDictionary *)arg1 :(JSValue *)arg2;
- (id)makeStoreXMLHttpRequest;
- (NSString *)networkConnectionType;
- (void)recordEvent:(NSString *)arg1 :(NSDictionary *)arg2;
- (void)setCookie:(id)arg1;
- (void)setCookieURL:(NSString *)arg1;
- (void)setStorefront:(NSString *)arg1;
- (void)signOut;
- (NSString *)storefront;
- (void)updateServiceEligibility:(NSDictionary *)arg1;
- (NSString *)userAgent;

@end
