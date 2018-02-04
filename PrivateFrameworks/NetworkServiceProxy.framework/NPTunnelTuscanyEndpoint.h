/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPTunnelTuscanyEndpoint : NWEndpoint {
    NSArray * _hosts;
    NSData * _hostsData;
}

@property (readonly) NSArray *hosts;
@property (readonly) NSData *hostsData;

+ (id)encodeHosts:(id)arg1;
+ (unsigned int)endpointType;
+ (bool)supportsResolverCallback;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyHostsWithPort:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedData;
- (id)hosts;
- (id)hostsData;
- (id)initWithCoder:(id)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)initWithHosts:(id)arg1;
- (void)resolveEndpointWithCompletionHandler:(id /* block */)arg1;

@end
