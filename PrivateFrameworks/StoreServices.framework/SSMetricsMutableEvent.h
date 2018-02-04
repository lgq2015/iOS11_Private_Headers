/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMetricsMutableEvent : SSMetricsEvent <NSMutableCopying> {
    NSMutableDictionary * _mutableBody;
    bool  _shouldSuppressUserInfo;
}

@property (nonatomic, retain) NSNumber *accountIdentifier;
@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic, retain) NSNumber *baseVersion;
@property (nonatomic, readonly, copy) NSDictionary *bodyDictionary;
@property (nonatomic, retain) NSString *canaryIdentifier;
@property (nonatomic, retain) NSNumber *clientVersion;
@property (nonatomic, retain) NSString *connection;
@property (nonatomic, retain) NSString *eventType;
@property (nonatomic, retain) NSNumber *eventVersion;
@property (nonatomic, retain) NSString *hostApplicationIdentifier;
@property double originalTime;
@property (nonatomic, retain) NSNumber *previousClientVersion;
@property (nonatomic) bool shouldSuppressDSIDHeader;
@property (nonatomic) bool shouldSuppressUserInfo;
@property (nonatomic, retain) NSString *topic;
@property (nonatomic, retain) NSString *userAgent;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (void)addPropertiesWithDictionary:(id)arg1;
- (void)appendPropertiesToBody:(id)arg1;
- (id)applicationIdentifier;
- (id)baseVersion;
- (id)bodyDictionary;
- (id)canaryIdentifier;
- (id)clientVersion;
- (id)connection;
- (id)debugDescription;
- (id)decorateReportingURL:(id)arg1;
- (id)eventType;
- (id)eventVersion;
- (id)hostApplicationIdentifier;
- (id)init;
- (id)initWithBodyDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)originalTime;
- (id)previousClientVersion;
- (id)propertyForBodyKey:(id)arg1;
- (void)setAccountIdentifier:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setBaseVersion:(id)arg1;
- (void)setCanaryIdentifier:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setEventVersion:(id)arg1;
- (void)setHostApplicationIdentifier:(id)arg1;
- (void)setOriginalTime:(double)arg1;
- (void)setOriginalTimeUsingDate:(id)arg1;
- (void)setPreviousClientVersion:(id)arg1;
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;
- (void)setShouldSuppressUserInfo:(bool)arg1;
- (void)setTopic:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (bool)shouldSuppressUserInfo;
- (id)topic;
- (id)userAgent;

@end
