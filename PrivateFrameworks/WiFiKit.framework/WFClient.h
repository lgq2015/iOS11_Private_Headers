/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFClient : NSObject {
    bool  _WAPIEnabled;
    unsigned long long  _airplaneModeBehavior;
    bool  _askToJoinEnabled;
    NSRunLoop * _callbackRunLoop;
    NSThread * _callbackThread;
    bool  _diagnosticsModeEnabled;
    bool  _extraLoggingEnabled;
    WFHotspotInterface * _hotspotInterface;
    WFInterface * _interface;
    bool  _isKnownNetworkUIEnabled;
    struct __WiFiManagerClient { } * _manager;
    bool  _networkRestrictionActive;
    bool  _powered;
    NSNumber * _rssiThresholdNumber;
    bool  _showAllHS20Networks;
    bool  _userAutoJoinState;
    bool  _wiFiHealthUIDisabled;
}

@property (getter=isWAPIEnabled, nonatomic) bool WAPIEnabled;
@property (nonatomic) unsigned long long airplaneModeBehavior;
@property (nonatomic) bool askToJoinEnabled;
@property (retain) NSRunLoop *callbackRunLoop;
@property (retain) NSThread *callbackThread;
@property (getter=isDiagnosticsModeEnabled) bool diagnosticsModeEnabled;
@property bool extraLoggingEnabled;
@property (nonatomic, retain) WFHotspotInterface *hotspotInterface;
@property (nonatomic, retain) WFInterface *interface;
@property (nonatomic, readonly) bool isKnownNetworkUIEnabled;
@property struct __WiFiManagerClient { }*manager;
@property (getter=isNetworkRestrictionActive, nonatomic) bool networkRestrictionActive;
@property bool powered;
@property (retain) NSNumber *rssiThresholdNumber;
@property bool showAllHS20Networks;
@property (nonatomic) bool userAutoJoinState;
@property (getter=isWiFiHealthUIDisabled) bool wiFiHealthUIDisabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_askToJoinNotification:(unsigned int)arg1;
- (id)_copyCurrentNetworks;
- (id)_getGeoTagsForNetwork:(struct __WiFiNetwork { }*)arg1;
- (id)_getScoreForNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_logWiFiManagerPropertyChange:(id)arg1 value:(bool)arg2;
- (void)_managedConfigurationDidChange:(id)arg1;
- (void)_removeNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_setAutoJoinEnabled:(bool)arg1 forNetwork:(struct __WiFiNetwork { }*)arg2;
- (void)_setupDefaultInterfaceWithManager:(struct __WiFiManagerClient { }*)arg1;
- (void)_startCallbackThreadWithManager:(struct __WiFiManagerClient { }*)arg1;
- (void)_stopCallbackThreadWithManager:(struct __WiFiManagerClient { }*)arg1;
- (void)_trustNotificationWithID:(unsigned int)arg1 network:(struct __WiFiNetwork { }*)arg2 data:(id)arg3;
- (void)_updateAirplaneModeStickiness;
- (void)_updateAskToJoinEnabled;
- (void)_updateDebugProperties;
- (void)_updateNetwork:(struct __WiFiNetwork { }*)arg1;
- (void)_updateNetworkRestrictionActive;
- (void)_updatePowerState;
- (void)_updateWAPIEnabled;
- (void)_updateWithDeviceAttachment:(struct __WiFiDeviceClient { }*)arg1;
- (void)_userAutoJoinStateDidChange:(bool)arg1 info:(id)arg2;
- (unsigned long long)airplaneModeBehavior;
- (bool)askToJoinEnabled;
- (void)asyncMISDiscoveryState:(id /* block */)arg1;
- (void)asyncMISState:(id /* block */)arg1;
- (void)asyncPowered:(id /* block */)arg1;
- (void)asyncUserAutoJoinState:(id /* block */)arg1;
- (id)callbackRunLoop;
- (id)callbackThread;
- (void)dealloc;
- (bool)extraLoggingEnabled;
- (bool)hasShownSBPickerDontAsk;
- (id)hotspotInterface;
- (id)init;
- (id)interface;
- (bool)isDiagnosticsModeEnabled;
- (bool)isKnownNetworkUIEnabled;
- (bool)isNetworkRestrictionActive;
- (bool)isWAPIEnabled;
- (bool)isWiFiHealthUIDisabled;
- (struct __WiFiManagerClient { }*)manager;
- (bool)powered;
- (void)reloadConfiguration;
- (long long)rssiThreshold;
- (id)rssiThresholdNumber;
- (void)setAirplaneModeBehavior:(unsigned long long)arg1;
- (void)setAskToJoinEnabled:(bool)arg1;
- (void)setAutoJoinEnabled:(bool)arg1;
- (void)setCallbackRunLoop:(id)arg1;
- (void)setCallbackThread:(id)arg1;
- (void)setDiagnosticsModeEnabled:(bool)arg1;
- (void)setExtraLoggingEnabled:(bool)arg1;
- (void)setHasShownSBPickerDontAsk:(bool)arg1;
- (void)setHotspotInterface:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setMISDiscoveryState:(bool)arg1 immediateDisable:(bool)arg2;
- (void)setMISState:(bool)arg1;
- (void)setManager:(struct __WiFiManagerClient { }*)arg1;
- (void)setNetworkRestrictionActive:(bool)arg1;
- (void)setPowered:(bool)arg1;
- (void)setRssiThresholdNumber:(id)arg1;
- (void)setShowAllHS20Networks:(bool)arg1;
- (void)setUserAutoJoinState:(bool)arg1;
- (void)setWAPIEnabled:(bool)arg1;
- (void)setWiFiHealthUIDisabled:(bool)arg1;
- (bool)showAllHS20Networks;
- (bool)userAutoJoinState;

@end
