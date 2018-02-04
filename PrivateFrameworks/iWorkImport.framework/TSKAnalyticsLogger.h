/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKAnalyticsLogger : NSObject {
    NSString * _baseDomain;
    NSString * _cachedFullDomain;
    bool  _cachedWillLogAnalytics;
    bool  _logApplicationName;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _minOSXVersion;
    struct { 
        long long majorVersion; 
        long long minorVersion; 
        long long patchVersion; 
    }  _miniOSVersion;
    bool  _recalculateDomain;
    bool  _recalculateWillLog;
    bool  _requireExplicitFinish;
    long long  _samplingPercentage;
    bool  _shouldSummarize;
}

@property (nonatomic, copy) NSString *baseDomain;
@property (nonatomic, copy) NSString *cachedFullDomain;
@property (nonatomic) bool cachedWillLogAnalytics;
@property (nonatomic, readonly) bool canLogAnalytics;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic) bool logApplicationName;
@property (nonatomic) struct { long long x1; long long x2; long long x3; } minOSXVersion;
@property (nonatomic) struct { long long x1; long long x2; long long x3; } miniOSVersion;
@property (nonatomic) bool recalculateDomain;
@property (nonatomic) bool recalculateWillLog;
@property (nonatomic) bool requireExplicitFinish;
@property (nonatomic) long long samplingPercentage;
@property (nonatomic) bool shouldSummarize;
@property (nonatomic, readonly) bool willLogAnalytics;

+ (void)logDistributionValue:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logDistributionValue:(double)arg1 forKey:(id)arg2 inDomain:(id)arg3 logApplicationName:(bool)arg4;
+ (void)logScalarValue:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3;
+ (void)logScalarValue:(long long)arg1 forKey:(id)arg2 inDomain:(id)arg3 logApplicationName:(bool)arg4;
+ (id)loggerWithDomain:(id)arg1;

- (void).cxx_destruct;
- (id)baseDomain;
- (id)cachedFullDomain;
- (bool)cachedWillLogAnalytics;
- (bool)canLogAnalytics;
- (id)domain;
- (void)finishMessage;
- (id)init;
- (id)initWithDomain:(id)arg1;
- (bool)logApplicationName;
- (void)logDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)logScalarValue:(long long)arg1 forKey:(id)arg2;
- (struct { long long x1; long long x2; long long x3; })minOSXVersion;
- (struct { long long x1; long long x2; long long x3; })miniOSVersion;
- (void)p_finishMessage;
- (void)p_logASLMessageWithDistributionValue:(double)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithScalarValue:(long long)arg1 forKey:(id)arg2;
- (void)p_logASLMessageWithValueString:(char *)arg1 forKey:(id)arg2;
- (id)p_qualifiedStringForKey:(id)arg1;
- (void)p_startMessage;
- (bool)recalculateDomain;
- (bool)recalculateWillLog;
- (bool)requireExplicitFinish;
- (long long)samplingPercentage;
- (void)setBaseDomain:(id)arg1;
- (void)setCachedFullDomain:(id)arg1;
- (void)setCachedWillLogAnalytics:(bool)arg1;
- (void)setLogApplicationName:(bool)arg1;
- (void)setMinOSXVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setMiniOSVersion:(struct { long long x1; long long x2; long long x3; })arg1;
- (void)setRecalculateDomain:(bool)arg1;
- (void)setRecalculateWillLog:(bool)arg1;
- (void)setRequireExplicitFinish:(bool)arg1;
- (void)setSamplingPercentage:(long long)arg1;
- (void)setShouldSummarize:(bool)arg1;
- (bool)shouldSummarize;
- (void)startMessage;
- (bool)willLogAnalytics;

@end
