/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioManagedStation : NSManagedObject

@property (nonatomic, retain) NSData *adData;
@property (nonatomic) long long adamID;
@property (nonatomic, copy) NSURL *artworkURL;
@property (nonatomic, copy) NSData *artworkURLData;
@property (nonatomic, copy) NSString *coreSeedName;
@property (nonatomic, copy) NSDictionary *debugDictionary;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool editEnabled;
@property (nonatomic, retain) NSArray *editableFields;
@property (getter=isFeatured, nonatomic) bool featured;
@property (getter=isGatewayVideoAdEnabled, nonatomic) bool gatewayVideoAdEnabled;
@property (nonatomic) bool hasSkipRules;
@property (nonatomic) unsigned long long impressionThreshold;
@property (nonatomic) bool isExplicit;
@property (nonatomic) bool likesEnabled;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long persistentID;
@property (getter=isPremiumPlacement, nonatomic) bool premiumPlacement;
@property (getter=isPreview, nonatomic, readonly) bool preview;
@property (getter=isPreviewOnly, nonatomic) bool previewOnly;
@property (nonatomic) bool requiresSubscription;
@property (nonatomic, retain) NSArray *seedTracks;
@property (nonatomic, copy) NSString *shareToken;
@property (getter=isShared, nonatomic) bool shared;
@property (getter=isSharingEnabled, nonatomic) bool sharingEnabled;
@property (nonatomic) bool skipEnabled;
@property (nonatomic) int skipFrequency;
@property (nonatomic, copy) NSString *skipIdentifier;
@property (nonatomic) double skipInterval;
@property (nonatomic, copy) NSArray *skipTimestamps;
@property (nonatomic) long long songMixType;
@property (nonatomic) int sortOrder;
@property (getter=isSponsored, nonatomic) bool sponsored;
@property (nonatomic, copy) NSString *stationDescription;
@property (nonatomic, copy) NSString *stationHash;
@property (nonatomic) long long stationID;
@property (nonatomic, copy) NSString *stationStringID;
@property (nonatomic, retain) NSURL *streamURL;
@property (getter=isSubscribed, nonatomic) bool subscribed;
@property (nonatomic) int subscriberCount;
@property (nonatomic, copy) NSArray *trackPlaybackDescriptorQueue;
@property (nonatomic) bool virtualPlayEnabled;

+ (id)defaultPropertiesToFetch;

- (id)adData;
- (long long)adamID;
- (id)additionalReferencedTrackDescriptors;
- (id)artworkURL;
- (id)artworkURLData;
- (id)coreSeedName;
- (id)debugDictionary;
- (id)dictionaryRepresentation;
- (bool)editEnabled;
- (id)editableFields;
- (id)feedbackDictionaryRepresentation;
- (bool)hasSkipRules;
- (unsigned long long)impressionThreshold;
- (bool)isExplicit;
- (bool)isFeatured;
- (bool)isGatewayVideoAdEnabled;
- (bool)isPremiumPlacement;
- (bool)isPreview;
- (bool)isPreviewOnly;
- (bool)isShared;
- (bool)isSharingEnabled;
- (bool)isSponsored;
- (bool)isSubscribed;
- (bool)likesEnabled;
- (id)name;
- (long long)persistentID;
- (bool)requiresSubscription;
- (id)seedTracks;
- (void)setAdData:(id)arg1;
- (void)setAdamID:(long long)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setArtworkURLData:(id)arg1;
- (void)setCoreSeedName:(id)arg1;
- (void)setDebugDictionary:(id)arg1;
- (void)setEditEnabled:(bool)arg1;
- (void)setEditableFields:(id)arg1;
- (void)setFeatured:(bool)arg1;
- (void)setGatewayVideoAdEnabled:(bool)arg1;
- (void)setHasSkipRules:(bool)arg1;
- (void)setImpressionThreshold:(unsigned long long)arg1;
- (void)setIsExplicit:(bool)arg1;
- (void)setLikesEnabled:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setPersistentID:(long long)arg1;
- (void)setPremiumPlacement:(bool)arg1;
- (void)setPreviewOnly:(bool)arg1;
- (void)setRequiresSubscription:(bool)arg1;
- (void)setSeedTracks:(id)arg1;
- (void)setShareToken:(id)arg1;
- (void)setShared:(bool)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (void)setSkipEnabled:(bool)arg1;
- (void)setSkipFrequency:(int)arg1;
- (void)setSkipIdentifier:(id)arg1;
- (void)setSkipInterval:(double)arg1;
- (void)setSkipTimestamps:(id)arg1;
- (void)setSongMixType:(long long)arg1;
- (void)setSortOrder:(int)arg1;
- (void)setSponsored:(bool)arg1;
- (void)setStationDescription:(id)arg1;
- (void)setStationHash:(id)arg1;
- (void)setStationID:(long long)arg1;
- (void)setStationStringID:(id)arg1;
- (void)setStreamCertificateURL:(id)arg1;
- (void)setStreamKeyURL:(id)arg1;
- (void)setStreamURL:(id)arg1;
- (void)setSubscribed:(bool)arg1;
- (void)setSubscriberCount:(int)arg1;
- (void)setTrackPlaybackDescriptorQueue:(id)arg1;
- (void)setVirtualPlayEnabled:(bool)arg1;
- (id)shareToken;
- (bool)skipEnabled;
- (int)skipFrequency;
- (id)skipIdentifier;
- (double)skipInterval;
- (id)skipTimestamps;
- (long long)songMixType;
- (int)sortOrder;
- (id)stationDescription;
- (id)stationHash;
- (long long)stationID;
- (id)stationStringID;
- (id)streamCertificateURL;
- (id)streamKeyURL;
- (id)streamURL;
- (int)subscriberCount;
- (id)trackPlaybackDescriptorQueue;
- (bool)virtualPlayEnabled;

@end
