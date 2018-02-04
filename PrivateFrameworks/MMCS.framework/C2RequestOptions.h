/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
 */

@interface C2RequestOptions : NSObject {
    unsigned char  __allowsExpensiveAccess;
    unsigned char  __allowsPowerNapScheduling;
    NSString * __appleIDContextSessionIdentifier;
    NSString * __sourceApplicationBundleIdentifier;
    NSString * __sourceApplicationSecondaryIdentifier;
    double  __timeoutIntervalForRequest;
    double  __timeoutIntervalForResource;
    NSString * _identifier;
    unsigned char  _outOfProcess;
    unsigned char  _outOfProcessDiscretionary;
    NSString * _outOfProcessPoolName;
    long long  _qualityOfService;
    NSDictionary * _resolvedEndpointsWithHostname;
    unsigned char  _tlsPinning;
}

@property (nonatomic) unsigned char _allowsExpensiveAccess;
@property (nonatomic) unsigned char _allowsPowerNapScheduling;
@property (nonatomic, copy) NSString *_appleIDContextSessionIdentifier;
@property (nonatomic, copy) NSString *_sourceApplicationBundleIdentifier;
@property (nonatomic, copy) NSString *_sourceApplicationSecondaryIdentifier;
@property (nonatomic) double _timeoutIntervalForRequest;
@property (nonatomic) double _timeoutIntervalForResource;
@property (nonatomic, readonly) double emptySessionExpiryInSeconds;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned char outOfProcess;
@property (nonatomic) unsigned char outOfProcessDiscretionary;
@property (nonatomic, copy) NSString *outOfProcessPoolName;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, retain) NSDictionary *resolvedEndpointsWithHostname;
@property (nonatomic) unsigned char tlsPinning;

+ (double)defaultEmptySessionExpiryInSeconds;
+ (id)stringForQualityOfService:(long long)arg1;

- (void).cxx_destruct;
- (unsigned char)_allowsExpensiveAccess;
- (unsigned char)_allowsPowerNapScheduling;
- (id)_appleIDContextSessionIdentifier;
- (id)_sourceApplicationBundleIdentifier;
- (id)_sourceApplicationSecondaryIdentifier;
- (double)_timeoutIntervalForRequest;
- (double)_timeoutIntervalForResource;
- (id)copy;
- (id)copyAndDecorateRequest:(id)arg1;
- (id)decorateTask:(id)arg1;
- (id)defaultSessionConfiguration;
- (double)emptySessionExpiryInSeconds;
- (id)identifier;
- (id)init;
- (unsigned char)outOfProcess;
- (unsigned char)outOfProcessDiscretionary;
- (id)outOfProcessPoolName;
- (long long)qualityOfService;
- (id)resolvedEndpointsWithHostname;
- (id)sessionConfiguration;
- (id)sessionConfigurationName;
- (void)setIdentifier:(id)arg1;
- (void)setOutOfProcess:(unsigned char)arg1;
- (void)setOutOfProcessDiscretionary:(unsigned char)arg1;
- (void)setOutOfProcessPoolName:(id)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setResolvedEndpointsWithHostname:(id)arg1;
- (void)setTlsPinning:(unsigned char)arg1;
- (void)set_allowsExpensiveAccess:(unsigned char)arg1;
- (void)set_allowsPowerNapScheduling:(unsigned char)arg1;
- (void)set_appleIDContextSessionIdentifier:(id)arg1;
- (void)set_sourceApplicationBundleIdentifier:(id)arg1;
- (void)set_sourceApplicationSecondaryIdentifier:(id)arg1;
- (void)set_timeoutIntervalForRequest:(double)arg1;
- (void)set_timeoutIntervalForResource:(double)arg1;
- (unsigned char)tlsPinning;

@end
