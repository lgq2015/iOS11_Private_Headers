/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUEditLocationViewController : HUItemTableViewController <HFHomeManagerObserver, HUAddPeopleViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, HUWallpaperPickerViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextFieldDelegate, UITextViewDelegate> {
    <HUEditLocationViewControllerAddLocationDelegate> * _addLocationDelegate;
    unsigned long long  _context;
    HUEditableTextViewCell * _detailNotesCell;
    NSString * _editedName;
    NSString * _editedNotes;
    HFHomeBuilder * _homeBuilder;
    HUEditLocationItemManager * _homeItemManager;
    HUEditableTextCell * _nameCell;
    <HUEditLocationViewControllerPresentationDelegate> * _presentationDelegate;
    UIBarButtonItem * _savedButtonBarItem;
    HUHomeUsersCollectionViewController * _usersViewController;
}

@property (nonatomic) <HUEditLocationViewControllerAddLocationDelegate> *addLocationDelegate;
@property (nonatomic, readonly) unsigned long long context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) HUEditableTextViewCell *detailNotesCell;
@property (nonatomic, retain) NSString *editedName;
@property (nonatomic, retain) NSString *editedNotes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HFHomeBuilder *homeBuilder;
@property (nonatomic) HUEditLocationItemManager *homeItemManager;
@property (nonatomic) HUEditableTextCell *nameCell;
@property (nonatomic) <HUEditLocationViewControllerPresentationDelegate> *presentationDelegate;
@property (nonatomic, retain) UIBarButtonItem *savedButtonBarItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HUHomeUsersCollectionViewController *usersViewController;

- (void).cxx_destruct;
- (void)addButtonPressed:(id)arg1;
- (id)addLocationDelegate;
- (void)addPeopleViewControllerDidFinish:(id)arg1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)childViewControllersToPreload;
- (unsigned long long)context;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (id)detailNotesCell;
- (void)doneButtonPressed:(id)arg1;
- (id)editedName;
- (id)editedNotes;
- (id)homeBuilder;
- (id)homeItemManager;
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3;
- (id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3 context:(unsigned long long)arg4;
- (id)nameCell;
- (id)presentationDelegate;
- (id)savedButtonBarItem;
- (void)setAddLocationDelegate:(id)arg1;
- (void)setDetailNotesCell:(id)arg1;
- (void)setEditedName:(id)arg1;
- (void)setEditedNotes:(id)arg1;
- (void)setHomeItemManager:(id)arg1;
- (void)setNameCell:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setSavedButtonBarItem:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldManageTextFieldForItem:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)updateWallpaper:(id)arg1 image:(id)arg2;
- (id)usersViewController;
- (void)viewDidLoad;
- (void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3;
- (void)wallpaperEditingDidCancel:(id)arg1;
- (void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3;

@end
