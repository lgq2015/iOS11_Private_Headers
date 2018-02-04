/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCReportingPlaybackEventSource : NSObject {
    long long  _equivalencySourceAdamID;
    double  _eventDuration;
    NSString * _featureName;
    NSString * _householdID;
    <MPCReportingIdentityPropertiesLoading> * _identityPropertiesLoader;
    MPModelGenericObject * _itemGenericObject;
    NSData * _jingleTimedMetadata;
    NSString * _lyricsID;
    MPModelPlayEvent * _modelPlayEvent;
    unsigned long long  _overrideItemType;
    NSNumber * _privateListeningEnabled;
    NSData * _recommendationData;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    bool  _shouldReportPlayEventsToStore;
    NSNumber * _siriInitiated;
    NSData * _trackInfo;
}

@property (nonatomic) long long equivalencySourceAdamID;
@property (nonatomic) double eventDuration;
@property (nonatomic, copy) NSString *featureName;
@property (nonatomic, copy) NSString *householdID;
@property (nonatomic, retain) <MPCReportingIdentityPropertiesLoading> *identityPropertiesLoader;
@property (nonatomic, retain) MPModelGenericObject *itemGenericObject;
@property (nonatomic, copy) NSData *jingleTimedMetadata;
@property (nonatomic, copy) NSString *lyricsID;
@property (nonatomic, retain) MPModelPlayEvent *modelPlayEvent;
@property (nonatomic) unsigned long long overrideItemType;
@property (getter=isPrivateListeningEnabled, nonatomic, copy) NSNumber *privateListeningEnabled;
@property (nonatomic, copy) NSData *recommendationData;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic) bool shouldReportPlayEventsToStore;
@property (getter=isSiriInitiated, nonatomic, copy) NSNumber *siriInitiated;
@property (nonatomic, copy) NSData *trackInfo;

- (void).cxx_destruct;
- (long long)equivalencySourceAdamID;
- (double)eventDuration;
- (id)featureName;
- (id)householdID;
- (id)identityPropertiesLoader;
- (id)init;
- (id)initWithAVItem:(id)arg1;
- (id)isPrivateListeningEnabled;
- (id)isSiriInitiated;
- (id)itemGenericObject;
- (id)jingleTimedMetadata;
- (id)lyricsID;
- (id)modelPlayEvent;
- (unsigned long long)overrideItemType;
- (id)recommendationData;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (void)setEquivalencySourceAdamID:(long long)arg1;
- (void)setEventDuration:(double)arg1;
- (void)setFeatureName:(id)arg1;
- (void)setHouseholdID:(id)arg1;
- (void)setIdentityPropertiesLoader:(id)arg1;
- (void)setItemGenericObject:(id)arg1;
- (void)setJingleTimedMetadata:(id)arg1;
- (void)setLyricsID:(id)arg1;
- (void)setModelPlayEvent:(id)arg1;
- (void)setOverrideItemType:(unsigned long long)arg1;
- (void)setPrivateListeningEnabled:(id)arg1;
- (void)setRecommendationData:(id)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setShouldReportPlayEventsToStore:(bool)arg1;
- (void)setSiriInitiated:(id)arg1;
- (void)setTrackInfo:(id)arg1;
- (bool)shouldReportPlayEventsToStore;
- (id)trackInfo;

@end
