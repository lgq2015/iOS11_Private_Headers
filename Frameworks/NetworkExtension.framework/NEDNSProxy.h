/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEDNSProxy : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _enabled;
    NEDNSProxyProviderProtocol * _protocol;
}

@property (getter=isEnabled) bool enabled;
@property (copy) NEDNSProxyProviderProtocol *protocol;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEnabled;
- (id)protocol;
- (void)setEnabled:(bool)arg1;
- (void)setProtocol:(id)arg1;

@end
