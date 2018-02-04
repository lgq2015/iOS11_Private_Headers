/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMSystemProxySettingsFetcher : NSObject {
    id  _delegate;
    NSString * _host;
    unsigned short  _port;
    NSString * _proxyAccount;
    NSString * _proxyHost;
    NSString * _proxyPassword;
    unsigned short  _proxyPort;
    long long  _proxyProtocol;
}

@property (nonatomic, copy) NSString *_host;
@property (nonatomic) unsigned short _port;
@property (nonatomic, copy) NSString *_proxyAccount;
@property (nonatomic, copy) NSString *_proxyHost;
@property (nonatomic, copy) NSString *_proxyPassword;
@property (nonatomic) unsigned short _proxyPort;
@property (nonatomic) long long _proxyProtocol;
@property id delegate;

- (void)_callAccountSettingsDelegateMethod;
- (void)_callProxySettingsDelegateMethod;
- (void)_getProxyAccountAndPasswordFromKeychain;
- (id)_host;
- (unsigned short)_port;
- (id)_proxyAccount;
- (id)_proxyHost;
- (id)_proxyPassword;
- (unsigned short)_proxyPort;
- (long long)_proxyProtocol;
- (void)_takeProxySettingsFromDictionary:(struct __CFDictionary { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3;
- (id)initWithProxyProtocol:(long long)arg1 proxyHost:(id)arg2 proxyPort:(unsigned short)arg3 delegate:(id)arg4;
- (void)retrieveProxyAccountSettings;
- (void)retrieveProxySettings;
- (void)setDelegate:(id)arg1;
- (void)set_host:(id)arg1;
- (void)set_port:(unsigned short)arg1;
- (void)set_proxyAccount:(id)arg1;
- (void)set_proxyHost:(id)arg1;
- (void)set_proxyPassword:(id)arg1;
- (void)set_proxyPort:(unsigned short)arg1;
- (void)set_proxyProtocol:(long long)arg1;

@end
