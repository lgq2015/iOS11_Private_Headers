/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFItemManagerDelegateUpdateRequest : NSObject {
    id /* block */  _applyChangesBlock;
    HFGroupedItemDiff * _changes;
    bool  _debug_wasPerformed;
    bool  _initialUpdate;
    id /* block */  _issueDelegateMessagesBlock;
}

@property (nonatomic, readonly, copy) id /* block */ applyChangesBlock;
@property (nonatomic, readonly) HFGroupedItemDiff *changes;
@property (nonatomic, readonly) bool debug_wasPerformed;
@property (getter=isInitialUpdate, nonatomic, readonly) bool initialUpdate;
@property (nonatomic, readonly, copy) id /* block */ issueDelegateMessagesBlock;

- (void).cxx_destruct;
- (id /* block */)applyChangesBlock;
- (id)changes;
- (bool)debug_wasPerformed;
- (id)description;
- (id)init;
- (id)initWithChanges:(id)arg1 isInitialUpdate:(bool)arg2 applyChangesBlock:(id /* block */)arg3 issueDelegateMessagesBlock:(id /* block */)arg4;
- (bool)isInitialUpdate;
- (id /* block */)issueDelegateMessagesBlock;
- (void)performWithOptions:(unsigned long long)arg1;

@end