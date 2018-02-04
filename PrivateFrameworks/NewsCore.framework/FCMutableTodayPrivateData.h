/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCMutableTodayPrivateData : FCTodayPrivateData <FCMutableTodayPrivateData>

@property (nonatomic, readonly, copy) NSSet *autoFavoriteTagIDs;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) <FCDerivedPersonalizationData><NSCoding> *derivedPersonalizationData;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableDictionary *dictionary;
@property (nonatomic, readonly, copy) NSString *feldsparID;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSSet *mutedTagIDs;
@property (nonatomic, readonly, copy) NSNumber *onboardingVersion;
@property (nonatomic, readonly, copy) NSSet *purchasedTagIDs;
@property (nonatomic, readonly, copy) NSArray *rankedPersonalSubscribedTagIDs;
@property (nonatomic, readonly, copy) NSDictionary *recentlyReadHistoryItems;
@property (nonatomic, readonly, copy) NSArray *recentlySeenHistoryItems;
@property (readonly) Class superclass;

- (void)_deleteObjectsForOldKeys;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setAutoFavoriteTagIDs:(id)arg1;
- (void)setDerivedPersonalizationData:(id)arg1;
- (void)setFeldsparID:(id)arg1;
- (void)setMutedTagIDs:(id)arg1;
- (void)setOnboardingVersion:(id)arg1;
- (void)setPurchasedTagIDs:(id)arg1;
- (void)setRankedPersonalSubscribedTagIDs:(id)arg1;
- (void)setRecentlyReadHistoryItems:(id)arg1;
- (void)setRecentlySeenHistoryItems:(id)arg1;

@end