/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface AUMFiSetupController : AUSetupController {
    NSDictionary * _accessoryResponseDict;
    NSObject<OS_dispatch_semaphore> * _askUserForPasswordSemaphore;
    NSDictionary * _autoGuessRecommendationDict;
    NSString * _destinationNetworkPassword;
    bool  _destinationNetworkPasswordAccepted;
    NSString * _destinationNetworkSSID;
    NSDictionary * _destinationNetworkScanRecord;
    NSObject<OS_dispatch_semaphore> * _easyConfigConfigurationCompleteSemaphore;
    EasyConfigDevice * _easyConfigDevice;
    struct { 
        double secondsToGetLinkUpOnDestination; 
        int wifiJoinDestinationAPError; 
        unsigned char destinationNetworkPSKInKeychain; 
        unsigned char hitJoiningDestinationAPTimeout; 
        int rssiOfDestinationAP; 
        unsigned int snrOfDestinationAP; 
        unsigned int channelOfDestinationAP; 
    }  _easyConfigPostConfigMetrics;
    struct { 
        double startTime; 
        unsigned char userChangedFriendlyName; 
        unsigned char playPasswordSet; 
        unsigned char adminPasswordSet; 
        unsigned char destinationNetworkRecommendationUsed; 
        double secondsToGetLinkUpOnSWAP; 
        int wifiJoinSWAPError; 
        unsigned char hitJoiningTargetSWAPTimeout; 
        int rssiOfSWAP; 
        unsigned int snrOfSWAP; 
        unsigned int channelOfSWAP; 
    }  _easyConfigPreConfigMetrics;
    long long  _lastHeardEasyConfigProgressNotification;
    NSTimer * _linkUpOnDestinationNetworkTimer;
    NSObject<OS_dispatch_semaphore> * _linkUpOnTargetSWAPSemaphore;
    NSMutableSet * _mfiSetupDelegates;
    NSString * _postConfigTargetDeviceFriendlyName;
    bool  _postediAPAccessoryConfiguredNotification;
    bool  _promptedUserForDestinationWiFiPSK;
    bool  _setupEnded;
    NSDictionary * _setupOptionsDict;
    bool  _successfullyEstablishedLinkOnDestinationAP;
    bool  _successfullyEstablishedLinkOnTargetDeviceSWAP;
    NSDictionary * _targetMFiDeviceScanRecord;
    double  _timeDestinationAPJoinStarted;
    double  _timeSWAPJoinStarted;
    int  _waitingForLinkState;
}

@property (copy) NSString *destinationNetworkPassword;
@property (retain) NSTimer *linkUpOnDestinationNetworkTimer;
@property (nonatomic, readonly) NSMutableSet *setupDelegates;

+ (id)setupController;

- (void)_startEasyConfigWhenReady;
- (void)acquireDestinationNetworkPassword;
- (void)askUserForNetworkPassword:(id)arg1;
- (void)askUserForSetupCodeWithRetryStatus:(bool)arg1;
- (void)askUserForUncertified;
- (void)callbackAskUserForPasswordResult:(int)arg1 password:(id)arg2 remember:(int)arg3;
- (void)callbackAskUserForSetupCodeResult:(int)arg1 password:(id)arg2;
- (void)callbackAskUserForUncertifiedResult:(int)arg1;
- (int)cancelSetup;
- (void)createEasyConfigDeviceConfiguration;
- (void)dealloc;
- (id)destinationNetworkPassword;
- (int)endSetup:(int)arg1;
- (void)handleEasyConfigProgress:(id)arg1;
- (void)handleEasyConfigProgressAppliedConfigurationToDevice:(id)arg1;
- (void)handleEasyConfigProgressSearchingForPostConfigDevice:(id)arg1;
- (void)handleEasyConfigStopped:(id)arg1;
- (id)init;
- (void)invalidateLinkUpOnDestinationNetworkTimer;
- (void)joinDestinationAPDone:(id)arg1;
- (void)joinDestinationNetworkTimeoutFired:(id)arg1;
- (void)joinSWAPDone:(id)arg1;
- (int)joinTargetSWAP;
- (void)linkChangeNotification:(id)arg1;
- (void)linkUpOnDestinationAP:(id)arg1;
- (id)linkUpOnDestinationNetworkTimer;
- (void)linkUpOnSWAP:(id)arg1;
- (void)logCompletionStatus:(int)arg1;
- (int)sendProgressToUI:(int)arg1 withParamDict:(id)arg2;
- (int)sendSetupCompleteToUIWithResult:(int)arg1;
- (int)sendiAPOverWiFiDeviceConfiguredXPCMessage;
- (void)setDestinationNetworkPassword:(id)arg1;
- (void)setLinkUpOnDestinationNetworkTimer:(id)arg1;
- (id)setupDelegates;
- (int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)startEasyConfigWhenReady;
- (void)startListeningForEasyConfigDeviceStatusNotifications;
- (void)stopListeningToAllNotifications;
- (void)stopListeningToEasyConfigDeviceStatusNotifications;
- (id)targetBaseInfoDict;
- (int)updateSettingsAsync;

@end
