/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEditUserItemManager : HFItemManager <HUUserItemManager> {
    HFItem * _allowEditingFooterItem;
    HFItem * _allowEditingItem;
    HFItem * _allowRemoteAccessFooterItem;
    HFItem * _allowRemoteAccessItem;
    HMHome * _homeForUser;
    HFItem * _localAccessItem;
    HFItem * _pendingAccessoriesItem;
    HFItem * _removeItem;
}

@property (nonatomic, retain) HFItem *allowEditingFooterItem;
@property (nonatomic, retain) HFItem *allowEditingItem;
@property (nonatomic, retain) HFItem *allowRemoteAccessFooterItem;
@property (nonatomic, retain) HFItem *allowRemoteAccessItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *homeForUser;
@property (nonatomic, retain) HFItem *localAccessItem;
@property (nonatomic, retain) HFItem *pendingAccessoriesItem;
@property (nonatomic, retain) HFItem *removeItem;
@property (nonatomic, retain) HFUserItem *sourceItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMUser *user;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (bool)_hasPendingAccessories;
- (bool)_hasResidentDevice;
- (id)_homeFuture;
- (bool)_isEditingAllowedForUser:(id)arg1;
- (bool)_isRemoteAccessAllowedForUser:(id)arg1;
- (bool)_isUserOwner:(id)arg1;
- (id)allowEditingFooterItem;
- (id)allowEditingItem;
- (id)allowRemoteAccessFooterItem;
- (id)allowRemoteAccessItem;
- (id)homeForUser;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithHome:(id)arg1 userItem:(id)arg2 delegate:(id)arg3;
- (id)localAccessItem;
- (id)pendingAccessoriesItem;
- (id)removeItem;
- (id)reuseIdentifierForFooterViewInSection:(unsigned long long)arg1;
- (void)setAllowEditingFooterItem:(id)arg1;
- (void)setAllowEditingItem:(id)arg1;
- (void)setAllowRemoteAccessFooterItem:(id)arg1;
- (void)setAllowRemoteAccessItem:(id)arg1;
- (void)setHomeForUser:(id)arg1;
- (void)setLocalAccessItem:(id)arg1;
- (void)setPendingAccessoriesItem:(id)arg1;
- (void)setRemoveItem:(id)arg1;
- (id)user;

@end
