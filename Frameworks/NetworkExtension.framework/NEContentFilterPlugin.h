/* made by EzioChiu
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEContentFilterPlugin : NSObject <NEConfigurationValidating, NEPrettyDescription, NSCopying, NSSecureCoding> {
    bool  _filterBrowsers;
    bool  _filterSockets;
    NSData * _identityReference;
    NSString * _organization;
    NSData * _passwordReference;
    NSString * _pluginType;
    NSString * _serverAddress;
    NSString * _username;
    NSDictionary * _vendorConfiguration;
}

@property bool filterBrowsers;
@property bool filterSockets;
@property (copy) NSData *identityReference;
@property (copy) NSString *organization;
@property (copy) NSData *passwordReference;
@property (retain) NSString *pluginType;
@property (copy) NSString *serverAddress;
@property (copy) NSString *username;
@property (copy) NSDictionary *vendorConfiguration;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (bool)filterBrowsers;
- (bool)filterSockets;
- (id)identityReference;
- (id)initWithCoder:(id)arg1;
- (id)initWithPluginType:(id)arg1;
- (id)organization;
- (id)passwordReference;
- (id)pluginType;
- (id)serverAddress;
- (void)setFilterBrowsers:(bool)arg1;
- (void)setFilterSockets:(bool)arg1;
- (void)setIdentityReference:(id)arg1;
- (void)setOrganization:(id)arg1;
- (void)setPasswordReference:(id)arg1;
- (void)setPluginType:(id)arg1;
- (void)setServerAddress:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)setVendorConfiguration:(id)arg1;
- (id)username;
- (id)vendorConfiguration;

@end
