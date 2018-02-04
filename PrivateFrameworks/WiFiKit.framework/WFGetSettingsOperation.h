/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFGetSettingsOperation : WFOperation {
    NSOperationQueue * _keychainQueue;
    struct __SCPreferences { } * _prefs;
    NSArray * _settings;
    NSString * _ssid;
}

@property (nonatomic, retain) NSOperationQueue *keychainQueue;
@property (nonatomic) struct __SCPreferences { }*prefs;
@property (nonatomic, retain) NSArray *settings;
@property (nonatomic, copy) NSString *ssid;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithNetworkProfile:(id)arg1;
- (id)initWithSSID:(id)arg1;
- (id)keychainQueue;
- (struct __SCPreferences { }*)prefs;
- (void)setKeychainQueue:(id)arg1;
- (void)setPrefs:(struct __SCPreferences { }*)arg1;
- (void)setSettings:(id)arg1;
- (void)setSsid:(id)arg1;
- (id)settings;
- (id)ssid;
- (void)start;

@end
