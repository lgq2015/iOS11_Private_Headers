/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNetworkReachability : NSObject {
    bool  _accessRestrictedBecauseOfAppVersion;
    bool  _accessRestrictedBecauseOfCountry;
    bool  _accessRestrictedBecauseOfDeviceAbandoned;
    bool  _accessRestrictedBecauseOfOSVersion;
    NSString * _currentCellularCarrierName;
    long long  _currentRadioAccessTechnology;
    FCReachability * _internetReachability;
    bool  _isCloudKitAccessAllowed;
    bool  _isNetworkReachable;
    bool  _isNetworkReachableViaCellular;
    bool  _isNetworkReachableViaWiFi;
    CTTelephonyNetworkInfo * _networkInfo;
    NSHashTable * _observers;
    long long  _offlineReason;
}

@property (nonatomic) bool accessRestrictedBecauseOfAppVersion;
@property (nonatomic) bool accessRestrictedBecauseOfCountry;
@property (nonatomic) bool accessRestrictedBecauseOfDeviceAbandoned;
@property (nonatomic) bool accessRestrictedBecauseOfOSVersion;
@property (nonatomic, readonly) NSString *cellularCarrierName;
@property (nonatomic, readonly) long long cellularRadioAccessTechnology;
@property (nonatomic, retain) NSString *currentCellularCarrierName;
@property (nonatomic) long long currentRadioAccessTechnology;
@property (nonatomic, retain) FCReachability *internetReachability;
@property (nonatomic) bool isCloudKitAccessAllowed;
@property (nonatomic, readonly) bool isCloudKitReachable;
@property (nonatomic, readonly) bool isNetworkOnlyReachableViaCellular;
@property (nonatomic) bool isNetworkReachable;
@property (nonatomic) bool isNetworkReachableViaCellular;
@property (nonatomic) bool isNetworkReachableViaWiFi;
@property (nonatomic, retain) CTTelephonyNetworkInfo *networkInfo;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) long long offlineReason;
@property (nonatomic, readonly) long long reachabilityStatus;

+ (id)sharedNetworkReachability;

- (void).cxx_destruct;
- (void)_accessRestrictionsChanged;
- (long long)_cellularRadioAccessTechnologyFromString:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_updateReachability;
- (bool)accessRestrictedBecauseOfAppVersion;
- (bool)accessRestrictedBecauseOfCountry;
- (bool)accessRestrictedBecauseOfDeviceAbandoned;
- (bool)accessRestrictedBecauseOfOSVersion;
- (void)addObserver:(id)arg1;
- (id)cellularCarrierName;
- (long long)cellularRadioAccessTechnology;
- (id)currentCellularCarrierName;
- (long long)currentRadioAccessTechnology;
- (void)dealloc;
- (id)init;
- (id)internetReachability;
- (bool)isCloudKitAccessAllowed;
- (bool)isCloudKitReachable;
- (bool)isNetworkOnlyReachableViaCellular;
- (bool)isNetworkReachable;
- (bool)isNetworkReachableViaCellular;
- (bool)isNetworkReachableViaWiFi;
- (id)networkInfo;
- (id)observers;
- (long long)offlineReason;
- (long long)reachabilityStatus;
- (void)removeObserver:(id)arg1;
- (void)setAccessRestrictedBecauseOfAppVersion:(bool)arg1;
- (void)setAccessRestrictedBecauseOfCountry:(bool)arg1;
- (void)setAccessRestrictedBecauseOfDeviceAbandoned:(bool)arg1;
- (void)setAccessRestrictedBecauseOfOSVersion:(bool)arg1;
- (void)setCurrentCellularCarrierName:(id)arg1;
- (void)setCurrentRadioAccessTechnology:(long long)arg1;
- (void)setInternetReachability:(id)arg1;
- (void)setIsCloudKitAccessAllowed:(bool)arg1;
- (void)setIsNetworkReachable:(bool)arg1;
- (void)setIsNetworkReachableViaCellular:(bool)arg1;
- (void)setIsNetworkReachableViaWiFi:(bool)arg1;
- (void)setNetworkInfo:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setOfflineReason:(long long)arg1;

@end
