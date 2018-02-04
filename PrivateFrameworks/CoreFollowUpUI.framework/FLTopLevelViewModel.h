/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreFollowUpUI.framework/CoreFollowUpUI
 */

@interface FLTopLevelViewModel : NSObject <FLViewModel> {
    FLFollowUpController * _controller;
    id /* block */  _itemChangeObserver;
    int  _notifyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_refreshItemsWithExtensionToItemMap:(id)arg1 completion:(id /* block */)arg2;
- (id)allPendingItems;
- (bool)allPendingItemsContains:(id)arg1;
- (void)dealloc;
- (id)extensionToItemMapFromItems:(id)arg1;
- (id)groups;
- (id)initWithIdentifier:(id)arg1;
- (void)mapItemsToGroups:(id)arg1;
- (void)refreshItems:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshItemsForItem:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setItemChangeHandler:(id /* block */)arg1;

@end
