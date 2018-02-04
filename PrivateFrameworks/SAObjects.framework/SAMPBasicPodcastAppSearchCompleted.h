/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPBasicPodcastAppSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *podcastCollections;
@property (nonatomic, copy) NSArray *podcastStations;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)basicPodcastAppSearchCompleted;
+ (id)basicPodcastAppSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)podcastCollections;
- (id)podcastStations;
- (bool)requiresResponse;
- (void)setPodcastCollections:(id)arg1;
- (void)setPodcastStations:(id)arg1;

@end
