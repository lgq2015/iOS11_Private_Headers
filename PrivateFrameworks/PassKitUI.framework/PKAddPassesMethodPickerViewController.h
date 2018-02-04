/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKAddPassesMethodPickerViewController : UITableViewController {
    double  _boundsWidth;
    bool  _cameraAvailable;
}

- (long long)_addPassMethodForIndexPath:(id)arg1;
- (void)dealloc;
- (void)doneTapped:(id)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillLayoutSubviews;

@end
