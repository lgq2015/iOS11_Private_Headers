/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFNetworkController : NSObject <MFDiagnosticsGenerator, RadiosPreferencesDelegate> {
    bool  _alternateAdviceState;
    NSMutableSet * _backgroundWifiClients;
    NSMutableSet * _calls;
    bool  _data;
    NSString * _dataIndicator;
    bool  _dns;
    unsigned int  _flags;
    bool  _hasCellDataCapability;
    bool  _hasWiFiCapability;
    int  _interface;
    bool  _isRoamingAllowed;
    bool  _isWiFiEnabled;
    NSLock * _lock;
    NSMutableArray * _observers;
    NSObject<OS_dispatch_queue> * _prefsQueue;
    RadiosPreferences * _radiosPreferences;
    struct __SCNetworkReachability { } * _reachability;
    struct __CFRunLoop { } * _rl;
    struct __SCDynamicStore { } * _store;
    struct __CFRunLoopSource { } * _store_source;
    int  _symptomsToken;
    struct __CTServerConnection { } * _telephony;
    NSThread * _thread;
    struct __SCPreferences { } * _wiFiPreferences;
    void * _wifiManager;
}

@property (nonatomic, readonly) AWDMailNetworkDiagnosticsReport *awdNetworkDiagnosticReport;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MFObservable *networkObservable;
@property (readonly) Class superclass;
@property (nonatomic) void*wifiManager;
@property (nonatomic, readonly) MFObservable *wifiObservable;

+ (id)networkAssertionWithIdentifier:(id)arg1;
+ (id)sharedInstance;

- (void)_checkKeys:(id)arg1 forStore:(struct __SCDynamicStore { }*)arg2;
- (void)_handleNotification:(id)arg1 info:(id)arg2 forConnection:(struct __CTServerConnection { }*)arg3;
- (void)_handleWiFiNotification:(unsigned int)arg1;
- (void)_inititializeWifiManager;
- (bool)_isNetworkUp_nts;
- (id)_networkAssertionWithIdentifier:(id)arg1;
- (struct { int x1; int x2; })_pollDataAndCallStatus_nts;
- (void)_setDataStatus_nts:(id)arg1;
- (void)_setFlags:(unsigned int)arg1 forReachability:(struct __SCNetworkReachability { }*)arg2;
- (void)_setUpTelephony_nts;
- (void)_setupSymptons;
- (bool)_simulationOverrideForType:(unsigned long long)arg1 actualValue:(bool)arg2;
- (void)_tearDownTelephony_nts;
- (void)_updateWifiClientType;
- (void)addBackgroundWifiClient:(id)arg1;
- (id)addNetworkObserverBlock:(id /* block */)arg1 queue:(id)arg2;
- (void)airplaneModeChanged;
- (id)awdNetworkDiagnosticReport;
- (id)copyDiagnosticInformation;
- (int)dataStatus;
- (void)dealloc;
- (bool)hasAlternateAdvice;
- (bool)inAirplaneMode;
- (id)init;
- (void)invalidate;
- (bool)is3GConnection;
- (bool)is4GConnection;
- (bool)isDataAvailable;
- (bool)isFatPipe;
- (bool)isNetworkUp;
- (bool)isOnWWAN;
- (id)networkObservable;
- (void)removeBackgroundWifiClient:(id)arg1;
- (void)removeNetworkObserver:(id)arg1;
- (void)setWifiManager:(void*)arg1;
- (void*)wifiManager;
- (id)wifiObservable;

@end
