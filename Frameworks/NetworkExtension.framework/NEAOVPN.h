/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEAOVPN : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    NSString * _activeInterfaceProtocolKey;
    bool  _allowAllCaptiveNetworkPlugins;
    bool  _allowCaptiveWebSheet;
    NSDictionary * _allowedCaptiveNetworkPlugins;
    bool  _enabled;
    NSDictionary * _interfaceProtocolMapping;
    NSDictionary * _serviceExceptions;
    bool  _toggleEnabled;
}

@property (copy) NSString *activeInterfaceProtocolKey;
@property (getter=isAllowAllCaptiveNetworkPlugins) bool allowAllCaptiveNetworkPlugins;
@property (getter=isAllowCaptiveWebSheet) bool allowCaptiveWebSheet;
@property (copy) NSDictionary *allowedCaptiveNetworkPlugins;
@property (getter=isEnabled) bool enabled;
@property (copy) NSDictionary *interfaceProtocolMapping;
@property (copy) NSDictionary *serviceExceptions;
@property (getter=isToggleEnabled) bool toggleEnabled;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activeInterfaceProtocolKey;
- (id)allowedCaptiveNetworkPlugins;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)interfaceProtocolMapping;
- (bool)isAllowAllCaptiveNetworkPlugins;
- (bool)isAllowCaptiveWebSheet;
- (bool)isEnabled;
- (bool)isToggleEnabled;
- (id)serviceExceptions;
- (void)setActiveInterfaceProtocolKey:(id)arg1;
- (void)setAllowAllCaptiveNetworkPlugins:(bool)arg1;
- (void)setAllowCaptiveWebSheet:(bool)arg1;
- (void)setAllowedCaptiveNetworkPlugins:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setInterfaceProtocolMapping:(id)arg1;
- (void)setServiceExceptions:(id)arg1;
- (void)setToggleEnabled:(bool)arg1;

@end
