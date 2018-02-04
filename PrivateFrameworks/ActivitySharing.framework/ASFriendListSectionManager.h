/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASFriendListSectionManager : NSObject {
    NSSet * _allFriends;
    ASClient * _client;
    NSCache * _displayContextToSortedSectionsCache;
    ASFriendListQuery * _friendListQuery;
    long long  _friendQueryRetries;
    bool  _hasReceivedFriendListQueryResult;
    bool  _hasReceivedMeQueryResult;
    HKHealthStore * _healthStore;
    HKActivitySummaryQuery * _meQuery;
    long long  _meQueryRetries;
    FIUIModel * _model;
    FIUIClientToken * _modelQueryToken;
    NSObject<OS_dispatch_queue> * _readWriteQueue;
    bool  _shouldGenerateDemoData;
    FIUIWorkoutDataProvider * _workoutDataProvider;
}

- (void).cxx_destruct;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_calendarDayChangedNotification:(id)arg1;
- (id)_copyFriends;
- (void)_createFakeFriends;
- (id)_createSectionsForFriends:(id)arg1 withDisplayContext:(id)arg2;
- (id)_datesToShowSnapshotsForFriend:(id)arg1 startingFromCurrentDateComponents:(id)arg2;
- (void)_enumerateVisibleDaysForFriends:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)_filterFriends:(id)arg1 withActiveFriendshipAtEndOfDay:(id)arg2;
- (id)_filterFriends:(id)arg1 withSnapshotDataAtCacheIndex:(id)arg2;
- (id)_filterFriends:(id)arg1 withWheelchairUseAtCacheIndex:(id)arg2;
- (id)_friendWithUUID:(id)arg1 fromFriends:(id)arg2;
- (bool)_isWheelchairUserDisplayModeValidForFriends:(id)arg1 filter:(long long)arg2;
- (void)_postFriendsListChangedNotification;
- (void)_queue_handleActivitySummaryUpdate:(id)arg1;
- (void)_queue_handleMyWorkoutsUpdate;
- (id)_queue_me;
- (void)_queue_restartQueryAfterErrorCount:(long long)arg1 withBlock:(id /* block */)arg2;
- (void)_queue_startFriendsQuery;
- (void)_queue_startMeQuery;
- (void)_queue_stopQueries;
- (void)_queue_updateWithNewData;
- (id)_sectionForDataVisibilityConditionalUsingBlock:(id /* block */)arg1;
- (id)_sortFriends:(id)arg1 forDisplayMode:(long long)arg2 cacheIndex:(id)arg3;
- (void)_startQueries;
- (void)_startQueriesIfRequired;
- (void)_stopQueries;
- (id)allActiveFriendsAsRecipients;
- (id)allDestinationsForActiveOrPendingFriends;
- (void)dealloc;
- (void)enumerateValidDisplayModesForFilter:(long long)arg1 usingBlock:(id /* block */)arg2;
- (void)fetchActivitySharingDataIfTimeSinceLastFetchIsGreaterThan:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (id)friendWithUUID:(id)arg1;
- (bool)hasAnyFriendsSetup;
- (bool)hasInitializedFriendData;
- (bool)hasReachedMaxNumberOfFriends;
- (id)init;
- (id)initWithModel:(id)arg1 andWorkoutDataProvider:(id)arg2;
- (id)me;
- (unsigned long long)numberOfFriendsWithInvitesAwaitingResponseFromMe;
- (long long)numberOfNewFriendsAllowed;
- (id)sectionForFriendsHidingDataFromMe;
- (id)sectionForFriendsInvitedByMe;
- (id)sectionForFriendsInvitingMe;
- (id)sectionForFriendsMyDataIsHiddenFrom;
- (id)sectionForFriendsWithNoHiding;
- (id)sectionsForDisplayContext:(id)arg1;

@end
