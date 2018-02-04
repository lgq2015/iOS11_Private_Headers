/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSExpandableListGroupController : NSObject <PSSpecifierGroupController> {
    long long  _collaspeAfterCount;
    PSSpecifier * _groupSpecifier;
    PSListController * _listController;
    bool  _showAll;
    PSSpecifier * _showAllSpecifier;
    NSMutableArray * _specifiers;
    PSSpecifier * _spinnerSpecifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_groupIndex;
- (void)addSpecifiers:(id)arg1;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2 collapseAfterCount:(long long)arg3;
- (void)reloadSpecifier:(id)arg1;
- (void)reloadSpecifiers;
- (void)removeAllSpecifiers;
- (void)showAll;
- (id)showAllSpecifier;
- (id)specifiers;
- (id)spinnerSpecifier;

@end
