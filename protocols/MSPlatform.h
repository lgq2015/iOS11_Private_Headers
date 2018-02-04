/* made by EzioChiu.
 */

@protocol MSPlatform <NSObject>

@required

- (NSString *)OSString;
- (NSString *)UDID;
- (NSString *)appBundleInfoString;
- (NSString *)authTokenForPersonID:(NSString *)arg1;
- (NSURL *)baseURLForPersonID:(NSString *)arg1;
- (NSString *)fullNameFromFirstName:(NSString *)arg1 lastName:(NSString *)arg2;
- (NSString *)hardwareString;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(NSString *)arg3 args:(char *)arg4;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(NSString *)arg6 args:(char *)arg7;
- (NSString *)pathMediaStreamDir;
- (bool)policyMayDownload;
- (bool)policyMayUpload;
- (Class)publisherPluginClass;
- (Class)sharingPluginClass;
- (bool)shouldLogAtLevel:(int)arg1;
- (NSDictionary *)socketOptions;
- (Class)subscriberPluginClass;
- (MSMediaStreamDaemon *)theDaemon;

@optional

- (NSURL *)contentURLForPersonID:(NSString *)arg1;
- (Class)deletePluginClass;
- (void)didDetectUnrecoverableCondition;
- (bool)isPerformanceLoggingEnabled;
- (bool)policyMaySendDelete;
- (NSData *)pushToken;
- (NSData *)pushTokenForPersonID:(NSString *)arg1;
- (bool)shouldEnableNewFeatures;

@end
