/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSetQueue : SADomainCommand

@property (nonatomic, copy) NSString *assetInfo;
@property (nonatomic) bool dryRun;
@property (nonatomic, copy) NSArray *filters;
@property (nonatomic, copy) NSArray *hashedRouteUIDs;
@property (nonatomic, retain) SAMPCollection *mediaItems;
@property (nonatomic, copy) NSString *recommendationId;
@property (nonatomic) bool shouldOverrideManuallyCuratedUpNext;
@property (nonatomic) bool shouldReloadQueue;
@property (nonatomic) bool shouldShuffle;
@property (nonatomic, copy) NSArray *sort;
@property (nonatomic, copy) NSNumber *startPlaying;

+ (id)setQueue;
+ (id)setQueueWithDictionary:(id)arg1 context:(id)arg2;

- (id)assetInfo;
- (bool)dryRun;
- (id)encodedClassName;
- (id)filters;
- (id)groupIdentifier;
- (id)hashedRouteUIDs;
- (id)mediaItems;
- (bool)mutatingCommand;
- (id)recommendationId;
- (bool)requiresResponse;
- (void)setAssetInfo:(id)arg1;
- (void)setDryRun:(bool)arg1;
- (void)setFilters:(id)arg1;
- (void)setHashedRouteUIDs:(id)arg1;
- (void)setMediaItems:(id)arg1;
- (void)setRecommendationId:(id)arg1;
- (void)setShouldOverrideManuallyCuratedUpNext:(bool)arg1;
- (void)setShouldReloadQueue:(bool)arg1;
- (void)setShouldShuffle:(bool)arg1;
- (void)setSort:(id)arg1;
- (void)setStartPlaying:(id)arg1;
- (bool)shouldOverrideManuallyCuratedUpNext;
- (bool)shouldReloadQueue;
- (bool)shouldShuffle;
- (id)sort;
- (id)startPlaying;

@end
