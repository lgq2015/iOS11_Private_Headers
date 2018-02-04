/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSListItemsController : PSListController {
    bool  _deferItemSelection;
    PSSpecifier * _lastSelectedSpecifier;
    bool  _restrictionList;
    id  _retainedTarget;
    long long  _rowToSelect;
}

- (void).cxx_destruct;
- (void)_addStaticText:(id)arg1;
- (void)didLock;
- (bool)isRestrictionList;
- (id)itemsFromDataSource;
- (id)itemsFromParent;
- (void)listItemSelected:(id)arg1;
- (void)prepareSpecifiersMetadata;
- (void)scrollToSelectedCell;
- (void)setIsRestrictionList:(bool)arg1;
- (void)setRowToSelect;
- (void)setValueForSpecifier:(id)arg1 defaultValue:(id)arg2;
- (id)specifiers;
- (void)suspend;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
