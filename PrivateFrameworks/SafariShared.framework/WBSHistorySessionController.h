/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSHistorySessionController : NSObject {
    WBSHistorySessionIntervalCache * _intervalCache;
    NSMutableDictionary * _itemsBySession;
    NSArray * _orderedSessions;
    NSObject<OS_dispatch_queue> * _sessionCacheAccessQueue;
}

+ (id)sharedSessionController;

- (void).cxx_destruct;
- (void)_addItemToSessionCache:(id)arg1;
- (void)_clearSessionCache;
- (void)_dispatchHistorySessionsDidChangeNotification;
- (bool)_getKey:(id*)arg1 forDate:(double)arg2;
- (void)_historyItemsWereAdded:(id)arg1;
- (void)_historyItemsWereRemoved:(id)arg1;
- (void)_insertItem:(id)arg1 withSessionKey:(id)arg2;
- (void)_loadSessionCache;
- (id)_orderedSessionKeys;
- (void)_removeItemsFromSessionCache:(id)arg1;
- (void)_requestSessionKeyForDate:(id)arg1 withBlock:(id /* block */)arg2;
- (void)_timeZoneDidChange:(id)arg1;
- (void)dealloc;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)itemLastVisitedInSession:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)itemsLastVisitedInSession:(id)arg1;
- (unsigned long long)numberOfItemsVisitedInSession:(id)arg1;
- (unsigned long long)numberOfSessions;
- (id)orderedSessions;
- (id)sessionForItem:(id)arg1;

@end
