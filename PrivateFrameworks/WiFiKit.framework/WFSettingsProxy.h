/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFSettingsProxy : NSObject <WFSettingsPersistable> {
    bool  _authenticated;
    NSString * _autoConfigureURL;
    bool  _autoConfigured;
    bool  _customProxy;
    NSDictionary * _items;
    NSString * _password;
    NSString * _port;
    NSString * _server;
    NSString * _username;
}

@property (nonatomic) bool authenticated;
@property (nonatomic, copy) NSString *autoConfigureURL;
@property (nonatomic) bool autoConfigured;
@property (nonatomic) bool customProxy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *items;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, copy) NSString *port;
@property (nonatomic, copy) NSString *server;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *username;

+ (id)defaultProxyConfiguration;
+ (id)offConfig;

- (void).cxx_destruct;
- (bool)authenticated;
- (id)autoConfigureURL;
- (bool)autoConfigured;
- (bool)customProxy;
- (id)description;
- (id)initDefaultConfig;
- (id)initWithAutoConfigureURL:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithManualServer:(id)arg1 port:(id)arg2 username:(id)arg3 password:(id)arg4;
- (id)items;
- (id)password;
- (id)port;
- (id)protocol;
- (id)server;
- (void)setAuthenticated:(bool)arg1;
- (void)setAutoConfigureURL:(id)arg1;
- (void)setAutoConfigured:(bool)arg1;
- (void)setCustomProxy:(bool)arg1;
- (void)setItems:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPort:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
