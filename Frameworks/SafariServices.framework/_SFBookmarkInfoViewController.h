/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFBookmarkInfoViewController : _SFPopoverSizingTableViewController <UITableViewDataSource, UITableViewDelegate, _SFBookmarkTextEntryTableViewControllerDelegate> {
    bool  _addingBookmark;
    bool  _addingToFavorites;
    _SFBookmarkTextEntryTableViewCell * _addressCell;
    WebBookmark * _bookmark;
    WebBookmarkCollection * _collection;
    <_SFBookmarkInfoViewControllerDelegate> * _delegate;
    bool  _didSelectFolder;
    unsigned long long  _editingField;
    bool  _folderPickerExpanded;
    NSArray * _folders;
    _SFSiteIconView * _iconImageView;
    WebBookmark * _parentBookmark;
    bool  _saveWhenDismissed;
    long long  _selectedFolderIndex;
    UITextField * _textFieldToRestoreFirstResponder;
    _SFBookmarkTextEntryTableViewCell * _titleCell;
}

@property (nonatomic, retain) WebBookmark *bookmark;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFBookmarkInfoViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addActionsForTextFields;
- (void)_bookmarksDidReload:(id)arg1;
- (bool)_canEditFieldsInCurrentViewController;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_cellInset;
- (struct CGPoint { double x1; double x2; })_centerForIconView;
- (void)_createCellsIfNeeded;
- (void)_didBeginEditingTextField:(id)arg1;
- (void)_didChangeEditingTextField:(id)arg1;
- (void)_editField:(unsigned long long)arg1;
- (id)_iconForViewCellGivenBookmark:(id)arg1;
- (void)_reloadFolderInfoForced:(bool)arg1;
- (void)_removeActionsForTextFields;
- (void)_returnWasPressedInTextField:(id)arg1;
- (void)_saveButtonPressed;
- (void)_setFolderPickerExpanded:(bool)arg1 animated:(bool)arg2;
- (id)_titleCell;
- (void)_updateCellValues;
- (void)_updateIconViewFrame;
- (void)_updateSaveButton;
- (void)_valuesChanged;
- (id)backgroundColorUsingTranslucentAppearance:(bool)arg1;
- (id)bookmark;
- (void)bookmarkTextEntryTableViewController:(id)arg1 dismissedWithText:(id)arg2;
- (bool)bookmarkTextEntryTableViewControllerShouldUseTranslucentAppearance:(id)arg1;
- (bool)canSaveChanges;
- (void)cancel;
- (void)dealloc;
- (id)delegate;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (bool)hasTranslucentAppearance;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(bool)arg3;
- (id)initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(bool)arg3 toFavorites:(bool)arg4 willBeDisplayedModally:(bool)arg5;
- (id)initWithBookmarkForFavorites:(id)arg1 inCollection:(id)arg2 addingBookmark:(bool)arg3;
- (bool)isEditingField;
- (void)loadView;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)reloadData;
- (void)saveChanges;
- (void)setBookmark:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setParent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (bool)titleCellHasText;
- (void)updateBookmarkIcon;
- (void)updateTranslucentAppearance;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
