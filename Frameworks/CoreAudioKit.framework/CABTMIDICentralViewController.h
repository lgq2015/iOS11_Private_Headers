/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CABTMIDICentralViewController : UITableViewController <BTLEConnectionTable, UITableViewDataSource, UITableViewDelegate> {
    UIBarButtonItem * cancelButton;
    AMSBTLEConnectionManager * connectionManager;
    NSTimer * connectionTimer;
    bool  didCleanup;
    UIBarButtonItem * editButton;
    UIBarButtonItem * forgetButton;
    bool  inEditingMode;
    UIActivityIndicatorView * indicator;
    NSMutableArray * peripheralList;
    UIBarButtonItem * previousLeftItem;
    UIBarButtonItem * previousRightItem;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)cancelAction:(id)arg1;
- (void)centralTimerFired:(id)arg1;
- (void)cleanup;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)editAction:(id)arg1;
- (void)forgetAction:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)peripheralAtIndex:(unsigned long long)arg1;
- (unsigned long long)peripheralCount;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setUIEnabled:(bool)arg1;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)title;
- (void)updateButtonsToMatchTableState;
- (void)updatePeripheralTable;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
