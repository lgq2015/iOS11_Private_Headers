/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudAvailabilityController : NSObject <HSCloudAvailability, ICEnvironmentMonitorObserver, RadiosPreferencesDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _canShowCloudDownloadButtons;
    bool  _canShowCloudMusic;
    bool  _canShowCloudVideo;
    struct __CTServerConnection { } * _ctServerConnection;
    bool  _hasProperNetworkConditionsToShowCloudMedia;
    bool  _isAirplaneModeActive;
    bool  _isAutoDownloadOnCellularAllowed;
    bool  _isCellularDataActive;
    bool  _isNetworkReachable;
    bool  _isShowingAllMusic;
    bool  _isShowingAllVideo;
    bool  _isUpdateInProgress;
    bool  _isWiFiEnabled;
    unsigned long long  _networkReachabilityObservationCount;
    long long  _networkType;
    int  _preferencesChangedNotifyToken;
    bool  _preferencesChangedNotifyTokenIsValid;
    RadiosPreferences * _radiosPreferences;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (bool)_hasCellularCapability;
- (bool)_hasWiFiCapability;
- (bool)_isAutoDownloadOnCellularAllowed;
- (void)_onQueue_beginObservingReachabilityChanges;
- (void)_onQueue_endObservingReachabilityChanges;
- (void)_onQueue_updateCanShowCloudDownloadButtonsWithNotification:(bool)arg1;
- (void)_onQueue_updateCanShowCloudTracksWithNotification:(bool)arg1;
- (void)_setNewIsNetworkReachable:(bool)arg1 networkType:(long long)arg2;
- (bool)_uncachedIsAutoDownloadOnCellularAllowed;
- (bool)_uncachedIsShowingAllMusic;
- (bool)_uncachedIsShowingAllVideo;
- (void)_wifiEnabledDidChangeNotification:(id)arg1;
- (void)airplaneModeChanged;
- (void)beginObservingNetworkReachability;
- (bool)canShowCloudDownloadButtons;
- (bool)canShowCloudMusic;
- (bool)canShowCloudVideo;
- (void)dealloc;
- (void)endObservingNetworkReachability;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (bool)hasProperNetworkConditionsToPlayMedia;
- (bool)hasProperNetworkConditionsToShowCloudMedia;
- (id)init;
- (bool)isCellularDataRestricted;
- (bool)isCellularDataRestrictedForMusic;
- (bool)isCellularDataRestrictedForStoreApps;
- (bool)isCellularDataRestrictedForVideos;
- (bool)isNetworkReachable;
- (bool)shouldProhibitActionsForCurrentNetworkConditions;
- (bool)shouldProhibitMusicActionForCurrentNetworkConditions;
- (bool)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (bool)shouldProhibitVideosActionForCurrentNetworkConditions;

@end
