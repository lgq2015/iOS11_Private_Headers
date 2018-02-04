/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity
 */

@interface W5NetworkStatus : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _isAppleReachable;
    NSArray * _primaryDNSAddresses;
    NSArray * _primaryIPv4Addresses;
    NSString * _primaryIPv4InterfaceName;
    NSString * _primaryIPv4Router;
    NSString * _primaryIPv4ServiceID;
    NSString * _primaryIPv4ServiceName;
    NSArray * _primaryIPv6Addresses;
    NSString * _primaryIPv6InterfaceName;
    NSString * _primaryIPv6Router;
    NSString * _primaryIPv6ServiceID;
    NSString * _primaryIPv6ServiceName;
}

@property (nonatomic) unsigned int isAppleReachable;
@property (nonatomic, copy) NSArray *primaryDNSAddresses;
@property (nonatomic, copy) NSArray *primaryIPv4Addresses;
@property (nonatomic, copy) NSString *primaryIPv4InterfaceName;
@property (nonatomic, copy) NSString *primaryIPv4Router;
@property (nonatomic, copy) NSString *primaryIPv4ServiceID;
@property (nonatomic, copy) NSString *primaryIPv4ServiceName;
@property (nonatomic, copy) NSArray *primaryIPv6Addresses;
@property (nonatomic, copy) NSString *primaryIPv6InterfaceName;
@property (nonatomic, copy) NSString *primaryIPv6Router;
@property (nonatomic, copy) NSString *primaryIPv6ServiceID;
@property (nonatomic, copy) NSString *primaryIPv6ServiceName;

+ (bool)supportsSecureCoding;

- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (unsigned int)isAppleReachable;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNetworkStatus:(id)arg1;
- (id)primaryDNSAddresses;
- (id)primaryIPv4Addresses;
- (id)primaryIPv4InterfaceName;
- (id)primaryIPv4Router;
- (id)primaryIPv4ServiceID;
- (id)primaryIPv4ServiceName;
- (id)primaryIPv6Addresses;
- (id)primaryIPv6InterfaceName;
- (id)primaryIPv6Router;
- (id)primaryIPv6ServiceID;
- (id)primaryIPv6ServiceName;
- (void)setIsAppleReachable:(unsigned int)arg1;
- (void)setPrimaryDNSAddresses:(id)arg1;
- (void)setPrimaryIPv4Addresses:(id)arg1;
- (void)setPrimaryIPv4InterfaceName:(id)arg1;
- (void)setPrimaryIPv4Router:(id)arg1;
- (void)setPrimaryIPv4ServiceID:(id)arg1;
- (void)setPrimaryIPv4ServiceName:(id)arg1;
- (void)setPrimaryIPv6Addresses:(id)arg1;
- (void)setPrimaryIPv6InterfaceName:(id)arg1;
- (void)setPrimaryIPv6Router:(id)arg1;
- (void)setPrimaryIPv6ServiceID:(id)arg1;
- (void)setPrimaryIPv6ServiceName:(id)arg1;

@end
