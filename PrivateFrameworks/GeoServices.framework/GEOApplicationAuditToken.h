/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOApplicationAuditToken : NSObject <NSSecureCoding> {
    NSString * _proxiedBundleId;
    NSString * _resolvedBundleId;
    NSData * _tokenData;
}

@property (nonatomic, readonly) NSString *proxiedBundleId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_bundleIdForAuditToken;
- (id)backingTokenData;
- (id)bundleId;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAuditTokenData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProxiedApplicationBundleId:(id)arg1;
- (id)initWithXPCConnection:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)proxiedBundleId;

@end
