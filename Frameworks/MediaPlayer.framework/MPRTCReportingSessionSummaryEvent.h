/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRTCReportingSessionSummaryEvent : MPRTCReportingEvent {
    double  _assetLoadDuration;
    NSError * _assetLoadError;
    long long  _blockingSecureKeyLoadCount;
    double  _blockingSecureKeyLoadDuration;
    long long  _endReasonType;
    bool  _hadBlockingTracklistLoad;
    long long  _interfaceTypeChangeCount;
    double  _maximumSecureKeyLoadDuration;
    NSNumber * _perceivedTotalStartupTime;
    NSError * _playbackEndError;
    NSError * _secureKeyError;
    long long  _secureKeyLoadCount;
    NSString * _siriSessionIdentifier;
    long long  _startInterfaceType;
    long long  _startupState;
    double  _tracklistLoadDuration;
    NSError * _tracklistLoadError;
}

@property (nonatomic) double assetLoadDuration;
@property (nonatomic, copy) NSError *assetLoadError;
@property (nonatomic) long long blockingSecureKeyLoadCount;
@property (nonatomic) double blockingSecureKeyLoadDuration;
@property (nonatomic) long long endReasonType;
@property (nonatomic) bool hadBlockingTracklistLoad;
@property (nonatomic) long long interfaceTypeChangeCount;
@property (nonatomic) double maximumSecureKeyLoadDuration;
@property (nonatomic, copy) NSNumber *perceivedTotalStartupTime;
@property (nonatomic, copy) NSError *playbackEndError;
@property (nonatomic, copy) NSError *secureKeyError;
@property (nonatomic) long long secureKeyLoadCount;
@property (nonatomic, copy) NSString *siriSessionIdentifier;
@property (nonatomic) long long startInterfaceType;
@property (nonatomic) long long startupState;
@property (nonatomic) double tracklistLoadDuration;
@property (nonatomic, copy) NSError *tracklistLoadError;

- (void).cxx_destruct;
- (double)assetLoadDuration;
- (id)assetLoadError;
- (long long)blockingSecureKeyLoadCount;
- (double)blockingSecureKeyLoadDuration;
- (long long)endReasonType;
- (bool)hadBlockingTracklistLoad;
- (long long)interfaceTypeChangeCount;
- (double)maximumSecureKeyLoadDuration;
- (id)newRTCReportingPayloadDictionary;
- (id)perceivedTotalStartupTime;
- (id)playbackEndError;
- (unsigned short)rtcReportingCategory;
- (id)secureKeyError;
- (long long)secureKeyLoadCount;
- (void)setAssetLoadDuration:(double)arg1;
- (void)setAssetLoadError:(id)arg1;
- (void)setBlockingSecureKeyLoadCount:(long long)arg1;
- (void)setBlockingSecureKeyLoadDuration:(double)arg1;
- (void)setEndReasonType:(long long)arg1;
- (void)setHadBlockingTracklistLoad:(bool)arg1;
- (void)setInterfaceTypeChangeCount:(long long)arg1;
- (void)setMaximumSecureKeyLoadDuration:(double)arg1;
- (void)setPerceivedTotalStartupTime:(id)arg1;
- (void)setPlaybackEndError:(id)arg1;
- (void)setSecureKeyError:(id)arg1;
- (void)setSecureKeyLoadCount:(long long)arg1;
- (void)setSiriSessionIdentifier:(id)arg1;
- (void)setStartInterfaceType:(long long)arg1;
- (void)setStartupState:(long long)arg1;
- (void)setTracklistLoadDuration:(double)arg1;
- (void)setTracklistLoadError:(id)arg1;
- (id)siriSessionIdentifier;
- (long long)startInterfaceType;
- (long long)startupState;
- (double)tracklistLoadDuration;
- (id)tracklistLoadError;

@end
