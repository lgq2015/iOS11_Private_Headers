/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUTableViewController : UITableViewController <HUResizableCellDelegate> {
    NSHashTable * _childViewControllersAtViewWillAppearTime;
    NSHashTable * _childViewControllersAtViewWillDisappearTime;
    NSMapTable * _installedChildViewControllersKeyedByCell;
    bool  _viewLayingOut;
}

@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillAppearTime;
@property (nonatomic, retain) NSHashTable *childViewControllersAtViewWillDisappearTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *installedChildViewControllersKeyedByCell;
@property (readonly) Class superclass;
@property (getter=isViewLayingOut, nonatomic) bool viewLayingOut;

- (void).cxx_destruct;
- (id)childViewControllersAtViewWillAppearTime;
- (id)childViewControllersAtViewWillDisappearTime;
- (void)contentSizeCategoryDidChange;
- (void)didUpdateRequiredHeightForCell:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (id)installedChildViewControllersKeyedByCell;
- (bool)isViewLayingOut;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setChildViewControllersAtViewWillAppearTime:(id)arg1;
- (void)setChildViewControllersAtViewWillDisappearTime:(id)arg1;
- (void)setInstalledChildViewControllersKeyedByCell:(id)arg1;
- (void)setViewLayingOut:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
