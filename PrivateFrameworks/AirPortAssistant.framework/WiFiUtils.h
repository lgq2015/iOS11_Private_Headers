/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface WiFiUtils : NSObject {
    bool  _joinInProgress;
    NSMutableDictionary * _missingBSSIDCounts;
    double  _periodicScanInterval;
    int  _periodicScanType;
    bool  _scanInProgress;
    bool  _scanOnlyWhenAppActive;
    NSTimer * _scanTimer;
    bool  _scanningActive;
    NSDictionary * _unmergedScanInfoDict;
    NSObject<OS_dispatch_semaphore> * _wifiBusy;
    struct WiFiShimContext { } * _wifiShim;
}

@property (nonatomic, retain) NSTimer *_scanTimer;
@property (nonatomic) double periodicScanInterval;
@property (nonatomic) int periodicScanType;

+ (int)barsForRSSI:(int)arg1;
+ (id)copyFilteredNetworks:(id)arg1 ignoreOptions:(int)arg2;
+ (id)getNetworkPassword:(id)arg1;
+ (bool)network:(id)arg1 shouldBeIgnored:(int)arg2;
+ (bool)networkIsApple:(id)arg1 productID:(unsigned int*)arg2;
+ (bool)networkIsSecure:(id)arg1 secMode:(int*)arg2 isEnterprise:(bool*)arg3;
+ (id)scanInfoAirPortUniqueIdentifier:(id)arg1;
+ (unsigned int)scanInfoAppleProductID:(id)arg1;
+ (id)scanInfoBSSIDStr:(id)arg1;
+ (bool)scanInfoCanJoin2_4GHzNetworks:(id)arg1;
+ (bool)scanInfoCanJoin5GHzNetworks:(id)arg1;
+ (int)scanInfoDeviceKind:(id)arg1;
+ (id)scanInfoFriendlyName:(id)arg1;
+ (bool)scanInfoIs5GHz:(id)arg1;
+ (bool)scanInfoIsAirPlayDevice:(id)arg1;
+ (bool)scanInfoIsAudioDevice:(id)arg1;
+ (bool)scanInfoIsDWDSCapable:(id)arg1 isDWDSEnabled:(bool*)arg2;
+ (bool)scanInfoIsGuestNetwork:(id)arg1;
+ (bool)scanInfoIsIBSS:(id)arg1;
+ (bool)scanInfoIsInSoftReset:(id)arg1;
+ (bool)scanInfoIsMFIAirPlayDevice:(id)arg1;
+ (bool)scanInfoIsSTAOnly:(id)arg1;
+ (bool)scanInfoIsUnconfigured:(id)arg1;
+ (bool)scanInfoIsiAPOverWiFiDevice:(id)arg1;
+ (id)scanInfoManufacturerName:(id)arg1;
+ (id)scanInfoModelName:(id)arg1;
+ (id)scanInfoNetworkName:(id)arg1;
+ (id)scanInfoStringFromAppleDeviceIE:(id)arg1 forType:(long long)arg2;
+ (unsigned int)scanInfoSubAppleProductID:(id)arg1;
+ (bool)scanInfoSupportsACPConfigV1:(id)arg1;
+ (bool)scanInfoSupportsMFIConfigV1:(id)arg1;
+ (bool)scanInfoSupportsSpruce:(id)arg1;
+ (bool)scanInfoTestBitFromAppleDeviceIE:(id)arg1 forType:(long long)arg2;
+ (id)sharedInstance;
+ (id)sharedInstanceRef;
+ (void)sharedInstanceRelease;
+ (bool)stringArray:(id)arg1 containsBSSID:(id)arg2;

- (int)_asyncWiFiScan:(id)arg1 wifiType:(int)arg2 merge:(bool)arg3 maxAge:(unsigned long long)arg4 isPeriodic:(bool)arg5;
- (id)_scanTimer;
- (void)activateScanning:(bool)arg1;
- (bool)airPortIsOn;
- (int)asyncWiFiScan:(id)arg1 wifiType:(int)arg2 merge:(bool)arg3 maxAge:(unsigned long long)arg4;
- (void)asyncWiFiScanThread:(id)arg1;
- (void)cancelAsync;
- (void)clearScanCache;
- (int)clearScanCacheSync;
- (int)closeWiFi;
- (void)dealloc;
- (int)disassociateSync;
- (bool)getAutoJoinState;
- (id)getCurrentAssociationInfo;
- (id)getCurrentAssociationInfoOrNil;
- (id)getCurrentAssociationScanInfo;
- (id)getIfList;
- (id)getLinkStatus;
- (id)getNetworkPasswordForNetworkNamed:(id)arg1;
- (id)getPreferredNetworks:(bool)arg1;
- (id)init;
- (bool)isCurrentlyAssociatedToAnInfrastructureNetwork:(bool*)arg1;
- (bool)isJoinInProgress;
- (bool)isScanInProgress;
- (bool)isScanningActive;
- (int)joinNetworkWithNameAsync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (void)joinNetworkWithNameThread:(id)arg1;
- (int)joinNetworkWithScanInfoAsync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (int)joinNetworkWithScanInfoSync:(id)arg1 password:(id)arg2 rememberChoice:(int)arg3;
- (void)joinNetworkWithScanInfoThread:(id)arg1;
- (void)mergeScanResults:(id)arg1 ageOut:(bool)arg2;
- (id)mergedScanInfoArray;
- (int)openWiFi;
- (double)periodicScanInterval;
- (int)periodicScanType;
- (id)resetScanInfosOfType:(int)arg1;
- (id)scanInfoForMACAddress:(id)arg1;
- (id)scanInfoForName:(id)arg1 wifiType:(int)arg2;
- (void)scanTimerCallback:(id)arg1;
- (int)setAutoJoinState:(bool)arg1;
- (void)setJoinInProgress:(bool)arg1;
- (void)setPeriodicScanInterval:(double)arg1;
- (void)setPeriodicScanType:(int)arg1;
- (void)setScanInProgress:(bool)arg1;
- (void)setScanOnlyWhenAppActive:(bool)arg1;
- (void)setUnmergedScanInfoDict:(id)arg1;
- (void)set_scanTimer:(id)arg1;
- (void)triggerScan;
- (id)unconfiguredScanInfosOfType:(int)arg1;
- (id)unmergedScanInfoArray;
- (id)unmergedScanInfoDict;

@end
