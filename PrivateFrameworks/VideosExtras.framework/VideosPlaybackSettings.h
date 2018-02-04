/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideosExtras.framework/VideosExtras
 */

@interface VideosPlaybackSettings : NSObject {
    bool  _cellularDataEnabled;
    MPMediaItem * _item;
    NSDate * _lastRunDate;
    unsigned long long  _networkStatus;
    struct VideosPlaybackSettingsOverridenSettings { 
        unsigned long long networkStatus; 
        unsigned long long playbackQuality; 
    }  _overriddenSettings;
    unsigned long long  _playbackQuality;
    int  _videosPreferencesNotifyToken;
    bool  _videosPreferenecsNotifyTokenIsValid;
}

@property (getter=isCellularDataEnabled, nonatomic) bool cellularDataEnabled;
@property (getter=areCloudPurchasesEnabled, nonatomic, readonly) bool cloudPurchasesEnabled;
@property (nonatomic, retain) MPMediaItem *item;
@property (nonatomic, copy) NSDate *lastRunDate;
@property (nonatomic) unsigned long long networkStatus;
@property (nonatomic) unsigned long long playbackQuality;

+ (id)sharedSettings;

- (void).cxx_destruct;
- (void)_networkReachabilityChanged:(id)arg1;
- (void)_populateLastRunFromSettings;
- (void)_populateNetworkValue;
- (void)_populateSettings;
- (unsigned long long)_qualityForString:(id)arg1;
- (void)_registerObserverForSettingsChange;
- (bool)areCloudPurchasesEnabled;
- (void)clearsCurrentSession;
- (bool)clearsCurrentSessionWithMediaItem:(id)arg1;
- (void)dealloc;
- (bool)firstRunRentalImport;
- (bool)hasANetworkConnection;
- (bool)hasNetworkConditionsForPlayback;
- (id)init;
- (bool)isCellularDataEnabled;
- (id)item;
- (id)lastRunDate;
- (bool)networkHasConditionsForPlayback:(unsigned long long)arg1;
- (unsigned long long)networkStatus;
- (unsigned long long)networkStatusForNetworkType:(long long)arg1;
- (void)overridePlaybackSettings:(unsigned long long)arg1 forMediaItem:(id)arg2;
- (void)overridePlaybackSettings:(unsigned long long)arg1 forMediaItem:(id)arg2 withNetworkStatus:(unsigned long long)arg3;
- (unsigned long long)playbackQuality;
- (unsigned long long)playbackQualityForMediaItem:(id)arg1;
- (unsigned long long)playbackQualityForMediaItem:(id)arg1 withNetworkStatus:(unsigned long long)arg2;
- (bool)playbackSettingsOverriddenForMediaItem:(id)arg1;
- (void)populateLastRunDate;
- (void)setCellularDataEnabled:(bool)arg1;
- (void)setFirstRunRentalImport:(bool)arg1;
- (void)setItem:(id)arg1;
- (void)setLastRunDate:(id)arg1;
- (void)setNetworkStatus:(unsigned long long)arg1;
- (void)setPlaybackQuality:(unsigned long long)arg1;

@end
