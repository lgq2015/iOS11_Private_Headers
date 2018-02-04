/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPv4Route : NSObject <NEConfigurationLegacySupport, NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString * _destinationAddress;
    NSString * _destinationSubnetMask;
    NSString * _gatewayAddress;
}

@property (readonly) NSString *destinationAddress;
@property (readonly) NSString *destinationSubnetMask;
@property (copy) NSString *gatewayAddress;

+ (id)defaultRoute;
+ (void)initGlobals;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyLegacyDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (id)destinationAddress;
- (id)destinationSubnetMask;
- (void)encodeWithCoder:(id)arg1;
- (id)gatewayAddress;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinationAddress:(id)arg1 subnetMask:(id)arg2;
- (bool)isDefaultRoute;
- (void)setGatewayAddress:(id)arg1;

@end
