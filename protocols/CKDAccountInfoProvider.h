/* made by EzioChiu.
 */

@protocol CKDAccountInfoProvider <NSObject>

@required

- (bool)accountWantsPushRegistration;
- (NSBundle *)applicationBundle;
- (NSURL *)baseURLForServerType:(long long)arg1 partitionType:(long long)arg2;
- (NSString *)bundleID;
- (bool)canAccessAccount;
- (bool)canAuthWithCloudKit;
- (void)cloudKitAuthTokenWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (CKDServerConfiguration *)config;
- (CKContainerID *)containerID;
- (NSString *)containerScopedUserID;
- (NSString *)deviceName;
- (NSString *)dsid;
- (CKAccountOverrideInfo *)fakeAccountInfo;
- (void)fetchConfigurationForOperation:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CKDServerConfiguration *, NSError *, void*
- (void)fetchContainerScopedUserIDForOperation:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchDeviceIDForOperation:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)fetchPrivateURLForServerType:(void *)arg1 operation:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: long long, CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)fetchPublicURLForServerType:(void *)arg1 operation:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: long long, CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSError *, void*
- (void)fetchServerEnvironmentForOperation:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CKDOperation *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (NSString *)hardwareID;
- (void)iCloudAuthTokenWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (bool)isAnonymousAccount;
- (bool)isCarryAccount;
- (bool)isUnitTestingAccount;
- (bool)isiCloudDevEnvironmentAccount;
- (NSString *)languageCode;
- (CKDMescalSession *)mescalSession;
- (NSString *)regionCode;
- (void)renewCloudKitAuthTokenWithReason:(void *)arg1 shouldForce:(void *)arg2 failedToken:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)renewMescalSessionForRequest:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: CKDURLRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)renewiCloudAuthTokenWithReason:(void *)arg1 shouldForce:(void *)arg2 failedToken:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSString *, bool, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetMescalSession;
- (NSString *)serverPreferredPushEnvironment;
- (bool)shouldFailAllTasks;
- (NSString *)trafficContainerIdentifier;

@optional

- (NSDictionary *)additionalHeaderValues;
- (void)noteFailedNetworkRequest;
- (void)noteFailedProtocolRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(long long)arg1;
- (void)noteTimeSpentInNetworking:(double)arg1;

@end
