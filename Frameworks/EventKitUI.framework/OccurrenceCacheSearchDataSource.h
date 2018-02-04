/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface OccurrenceCacheSearchDataSource : OccurrenceCacheDataSource {
    NSMutableArray * _processingCachedDays;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _resultsLock;
    EKOccurrenceCacheSearch * _search;
}

- (void).cxx_destruct;
- (id)_cachedDays;
- (void)_setCachedDaysAndNotify:(id)arg1;
- (long long)countOfOccurrencesAtDayIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithEventStore:(id)arg1 calendars:(id)arg2;
- (void)invalidate;
- (void)invalidateCachedOccurrences;
- (void)searchWithTerm:(id)arg1;
- (void)stopSearching;
- (bool)supportsFakeTodaySection;
- (bool)supportsInvitations;

@end
