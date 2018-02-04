/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUServiceGridItemManager : HFItemManager {
    NSArray * _cachedSortedRoomIdentifiers;
    NSArray * _cachedSortedRooms;
    id /* block */  _itemProvidersCreator;
    bool  _shouldGroupByRoom;
    bool  _shouldShowSectionHeaders;
}

@property (nonatomic, readonly) long long actionSetSectionIndex;
@property (nonatomic, retain) NSArray *cachedSortedRoomIdentifiers;
@property (nonatomic, retain) NSArray *cachedSortedRooms;
@property (nonatomic, copy) id /* block */ itemProvidersCreator;
@property (nonatomic) bool shouldGroupByRoom;
@property (nonatomic) bool shouldShowSectionHeaders;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (unsigned long long)_numberOfSections;
- (id /* block */)_roomComparator;
- (id)_roomIdentifierForItem:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_sortedRoomIdentifiers;
- (id)_sortedRooms;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (void)_willUpdateSections;
- (long long)actionSetSectionIndex;
- (id)cachedSortedRoomIdentifiers;
- (id)cachedSortedRooms;
- (id)currentSectionIdentifiers;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(bool)arg2 itemProvidersCreator:(id /* block */)arg3;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(bool)arg2 shouldShowSectionHeaders:(bool)arg3 itemProvidersCreator:(id /* block */)arg4;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 shouldGroupByRoom:(bool)arg3 shouldShowSectionHeaders:(bool)arg4 itemProvidersCreator:(id /* block */)arg5;
- (id /* block */)itemProvidersCreator;
- (void)setCachedSortedRoomIdentifiers:(id)arg1;
- (void)setCachedSortedRooms:(id)arg1;
- (void)setItemProvidersCreator:(id /* block */)arg1;
- (void)setShouldGroupByRoom:(bool)arg1;
- (void)setShouldShowSectionHeaders:(bool)arg1;
- (bool)shouldGroupByRoom;
- (bool)shouldShowSectionHeaders;

@end
