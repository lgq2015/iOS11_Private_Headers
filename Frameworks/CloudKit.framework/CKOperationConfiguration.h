/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationConfiguration : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalRequestHTTPHeaders;
    bool  _allowsBackgroundNetworking;
    bool  _allowsCellularAccess;
    CKContainer * _container;
    bool  _hasAdditionalRequestHTTPHeaders;
    bool  _hasAllowsBackgroundNetworking;
    bool  _hasAllowsCellularAccess;
    bool  _hasContainer;
    bool  _hasLongLived;
    bool  _hasPreferAnonymousRequests;
    bool  _hasQualityOfService;
    bool  _hasSourceApplicationBundleIdentifier;
    bool  _hasSourceApplicationSecondaryIdentifier;
    bool  _hasTimeoutIntervalForRequest;
    bool  _hasTimeoutIntervalForResource;
    bool  _longLived;
    bool  _preferAnonymousRequests;
    long long  _qualityOfService;
    NSString * _sourceApplicationBundleIdentifier;
    NSString * _sourceApplicationSecondaryIdentifier;
    double  _timeoutIntervalForRequest;
    double  _timeoutIntervalForResource;
}

@property (nonatomic, retain) NSDictionary *additionalRequestHTTPHeaders;
@property (nonatomic) bool allowsBackgroundNetworking;
@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, retain) CKContainer *container;
@property (nonatomic) bool hasAdditionalRequestHTTPHeaders;
@property (nonatomic) bool hasAllowsBackgroundNetworking;
@property (nonatomic) bool hasAllowsCellularAccess;
@property (nonatomic) bool hasContainer;
@property (nonatomic) bool hasLongLived;
@property (nonatomic) bool hasPreferAnonymousRequests;
@property (nonatomic) bool hasQualityOfService;
@property (nonatomic) bool hasSourceApplicationBundleIdentifier;
@property (nonatomic) bool hasSourceApplicationSecondaryIdentifier;
@property (nonatomic) bool hasTimeoutIntervalForRequest;
@property (nonatomic) bool hasTimeoutIntervalForResource;
@property (getter=isLongLived, nonatomic) bool longLived;
@property (nonatomic) bool preferAnonymousRequests;
@property (nonatomic) long long qualityOfService;
@property (nonatomic, retain) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, retain) NSString *sourceApplicationSecondaryIdentifier;
@property (nonatomic) double timeoutIntervalForRequest;
@property (nonatomic) double timeoutIntervalForResource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalRequestHTTPHeaders;
- (bool)allowsBackgroundNetworking;
- (bool)allowsCellularAccess;
- (id)container;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAdditionalRequestHTTPHeaders;
- (bool)hasAllowsBackgroundNetworking;
- (bool)hasAllowsCellularAccess;
- (bool)hasContainer;
- (bool)hasLongLived;
- (bool)hasPreferAnonymousRequests;
- (bool)hasQualityOfService;
- (bool)hasSourceApplicationBundleIdentifier;
- (bool)hasSourceApplicationSecondaryIdentifier;
- (bool)hasTimeoutIntervalForRequest;
- (bool)hasTimeoutIntervalForResource;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isLongLived;
- (bool)preferAnonymousRequests;
- (long long)qualityOfService;
- (id)resolveAgainstGenericConfiguration:(id)arg1;
- (void)setAdditionalRequestHTTPHeaders:(id)arg1;
- (void)setAllowsBackgroundNetworking:(bool)arg1;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setContainer:(id)arg1;
- (void)setHasAdditionalRequestHTTPHeaders:(bool)arg1;
- (void)setHasAllowsBackgroundNetworking:(bool)arg1;
- (void)setHasAllowsCellularAccess:(bool)arg1;
- (void)setHasContainer:(bool)arg1;
- (void)setHasLongLived:(bool)arg1;
- (void)setHasPreferAnonymousRequests:(bool)arg1;
- (void)setHasQualityOfService:(bool)arg1;
- (void)setHasSourceApplicationBundleIdentifier:(bool)arg1;
- (void)setHasSourceApplicationSecondaryIdentifier:(bool)arg1;
- (void)setHasTimeoutIntervalForRequest:(bool)arg1;
- (void)setHasTimeoutIntervalForResource:(bool)arg1;
- (void)setLongLived:(bool)arg1;
- (void)setPreferAnonymousRequests:(bool)arg1;
- (void)setQualityOfService:(long long)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setSourceApplicationSecondaryIdentifier:(id)arg1;
- (void)setTimeoutIntervalForRequest:(double)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)sourceApplicationSecondaryIdentifier;
- (double)timeoutIntervalForRequest;
- (double)timeoutIntervalForResource;

@end
