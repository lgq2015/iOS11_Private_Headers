/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
 */

@interface CommunicationsFilterBlockListCache : NSObject {
    bool  _listIsEmpty;
    int  _notifyEmptyListToken;
    NSMutableArray * _recentItems;
}

- (void)_blockListChanged:(id)arg1;
- (long long)cachedResponseForItem:(id)arg1;
- (id)init;
- (void)removeItemFromCache:(id)arg1;
- (void)setResponse:(bool)arg1 forItem:(id)arg2;
- (void)syncListEmptyState;

@end
