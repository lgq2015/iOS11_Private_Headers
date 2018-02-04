/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSWiFiManager : NSObject {
    bool  _wiFiEnabled;
    struct __SCPreferences { } * _wifiPreferences;
}

@property (getter=isWiFiEnabled, nonatomic) bool wiFiEnabled;

+ (id)sharedWiFiManager;

- (bool)_getWiFiEnabledFromPrefs;
- (id)_processIdentifier;
- (void)_wifiCallBack:(unsigned int)arg1;
- (void)dealloc;
- (id)init;
- (bool)isWiFiEnabled;
- (void)setWiFiEnabled:(bool)arg1;

@end
