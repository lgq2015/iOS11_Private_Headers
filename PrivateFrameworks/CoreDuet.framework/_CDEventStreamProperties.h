/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDEventStreamProperties : NSObject {
    NSString * _keyPathString;
    bool  canBeShared;
    bool  canBeSpeculative;
    bool  canPersistOnStorage;
    bool  canSendToServer;
    NSString * dataProtectionClass;
    long long  deResolitionPolicy;
    NSString * descriptionString;
    long long  eventsPerPeriod;
    bool  futureEvent;
    bool  hasStats;
    bool  isHistorical;
    bool  isInstant;
    NSString * knowledgeBaseName;
    double  maxLatency;
    NSString * name;
    double  period;
    long long  pollingPeriod;
    bool  setupOnDemand;
    long long  sharingPolicy;
    long long  statisticsType;
    double  temporalPrecision;
    double  timeToLive;
    long long  totalSizeLimit;
    long long  valueType;
}

@property (nonatomic, readonly) bool canBeShared;
@property (nonatomic, readonly) bool canBeSpeculative;
@property (nonatomic, readonly) bool canPersistOnStorage;
@property (nonatomic, readonly) bool canSendToServer;
@property (nonatomic, readonly) NSString *dataProtectionClass;
@property (nonatomic, readonly) long long deResolitionPolicy;
@property (nonatomic, readonly) NSString *descriptionString;
@property (nonatomic, readonly) long long eventsPerPeriod;
@property (nonatomic, readonly) bool futureEvent;
@property (nonatomic, readonly) bool hasStats;
@property (nonatomic, readonly) bool isHistorical;
@property (nonatomic, readonly) bool isInstant;
@property (nonatomic, readonly) NSString *keyPathString;
@property (nonatomic, readonly) NSString *knowledgeBaseName;
@property (nonatomic, readonly) double maxLatency;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double period;
@property (nonatomic, readonly) long long pollingPeriod;
@property (nonatomic, readonly) bool setupOnDemand;
@property (nonatomic, readonly) long long sharingPolicy;
@property (nonatomic, readonly) long long statisticsType;
@property (nonatomic, readonly) double temporalPrecision;
@property (nonatomic, readonly) double timeToLive;
@property (nonatomic, readonly) long long totalSizeLimit;
@property (nonatomic, readonly) long long valueType;

+ (id)eventStreamPropertiesFromDictionary:(id)arg1;

- (void).cxx_destruct;
- (bool)canBeShared;
- (bool)canBeSpeculative;
- (bool)canPersistOnStorage;
- (bool)canSendToServer;
- (id)dataProtectionClass;
- (long long)deResolitionPolicy;
- (id)description;
- (id)descriptionString;
- (long long)eventsPerPeriod;
- (bool)futureEvent;
- (bool)hasStats;
- (id)initFromDictionary:(id)arg1;
- (bool)isHistorical;
- (bool)isInstant;
- (id)keyPathString;
- (id)knowledgeBaseName;
- (double)maxLatency;
- (id)name;
- (double)period;
- (long long)pollingPeriod;
- (bool)setupOnDemand;
- (long long)sharingPolicy;
- (long long)statisticsType;
- (double)temporalPrecision;
- (double)timeToLive;
- (long long)totalSizeLimit;
- (long long)valueType;

@end
