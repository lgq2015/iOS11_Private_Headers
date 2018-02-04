/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXDebugMemoriesViewController : UIViewController <MFMailComposeViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSArray * _sectionTitles;
    UISegmentedControl * _segmentedControl;
    NSDictionary * _sourceDictionary;
    PHMemory * _sourceMemory;
    NSDictionary * _tableContent;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_closeAction:(id)arg1;
- (id)_debugDictionary;
- (void)_sendByEmailAction:(id)arg1;
- (void)_setupWithDictionary:(id)arg1;
- (void)_switchLogsAction:(id)arg1;
- (id)initWithMemory:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end
