/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUMoreListController : UIMoreListController {
    UITabBarItem * _tabBarItem;
}

- (long long)ITunesStoreUIBarStyle;
- (void)_badgeDidChangeNotification:(id)arg1;
- (void)_reloadPreviewOverlayVisibility;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tabBarItem;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(bool)arg1;

@end
