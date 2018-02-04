/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsEvent : NSObject {
    NSString * _eventType;
    bool  _shouldSuppressDSIDHeader;
    bool  _shouldSuppressUserInfo;
}

@property (nonatomic, readonly, retain) NSString *eventType;
@property (nonatomic, readonly) bool shouldSuppressDSIDHeader;
@property (nonatomic, readonly) bool shouldSuppressUserInfo;

+ (id)_globalCanaryLock;
+ (id)globalEventCanary;
+ (void)setGlobalEventCanary:(id)arg1;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationOfBody;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1;
- (id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 externalValues:(id)arg2;
- (void)appendPropertiesToBody:(id)arg1;
- (id)decorateReportingURL:(id)arg1;
- (id)eventType;
- (bool)isBlacklistedByConfiguration:(id)arg1;
- (bool)isFieldBlacklistEnabled;
- (id)millisecondsFromTimeInterval:(double)arg1;
- (bool)requiresDiagnosticSendingPermission;
- (bool)shouldSuppressDSIDHeader;
- (bool)shouldSuppressUserInfo;
- (double)timeIntervalFromMilliseconds:(id)arg1;

@end
