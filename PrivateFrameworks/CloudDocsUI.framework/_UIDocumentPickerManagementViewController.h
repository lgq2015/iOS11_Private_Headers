/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
 */

@interface _UIDocumentPickerManagementViewController : _UIContainerHuggingTableViewController {
    NSArray * _allPickers;
    NSArray * _fileTypes;
    unsigned long long  _mode;
}

@property (nonatomic, retain) NSArray *allPickers;
@property (nonatomic, retain) NSArray *fileTypes;
@property (nonatomic) unsigned long long mode;

- (void).cxx_destruct;
- (void)_doneButtonPressed;
- (void)_updateContentSize;
- (id)allPickers;
- (id)fileTypes;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileTypes:(id)arg1 mode:(unsigned long long)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (unsigned long long)mode;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setAllPickers:(id)arg1;
- (void)setFileTypes:(id)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)switchToggled:(id)arg1;
- (bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
