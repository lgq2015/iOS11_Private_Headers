/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroMusicMenuViewController : MiroMemoryEditorBasePlayerViewController <MPMediaPickerControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    MiroMemory * _memory;
    bool  _observingAppWillResignActive;
    UITableView * _tableView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MiroMemory *memory;
@property (nonatomic) bool observingAppWillResignActive;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITableView *tableView;

- (void).cxx_destruct;
- (void)_addObserverForTextSizeDidChange;
- (bool)_has_iTunesMusic;
- (void)_removeObserverForTextSizeDidChange;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (id)memory;
- (bool)observingAppWillResignActive;
- (void)popFromNavigationController;
- (void)setMemory:(id)arg1;
- (void)setObservingAppWillResignActive:(bool)arg1;
- (void)setTableView:(id)arg1;
- (id)tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)userTextSizeDidChange;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
