/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface _NTKCFaceDetailCustomPhotosViewController : UICollectionViewController {
    UIBarButtonItem * _addButton;
    NSArray * _defaultToolBarItems;
    <NTKCFaceDetailCustomPhotosViewControllerDelegate> * _delegate;
    UIBarButtonItem * _deleteButton;
    bool  _deleteConfirmed;
    UIBarButtonItem * _deselectAllButton;
    UIBarButtonItem * _doneButton;
    NSArray * _editingToolBarItems;
    NTKCompanionCustomPhotosEditor * _editor;
    bool  _externalImagesSet;
    NTKFace * _face;
    NTKBasePhotosFaceView * _faceView;
    bool  _inGallery;
    UIBarButtonItem * _saveButton;
    UIBarButtonItem * _selectAllButton;
    UIBarButtonItem * _selectButton;
    NSMutableIndexSet * _selectedIndexes;
    UIBarButtonItem * _spinnerButton;
}

@property (nonatomic) <NTKCFaceDetailCustomPhotosViewControllerDelegate> *delegate;
@property (nonatomic, retain) NTKCompanionCustomPhotosEditor *editor;
@property (nonatomic) bool externalImagesSet;
@property (nonatomic, retain) NTKFace *face;
@property (nonatomic, retain) NTKBasePhotosFaceView *faceView;
@property (nonatomic) bool inGallery;

- (void).cxx_destruct;
- (void)_addPressed;
- (bool)_allPhotosSelected;
- (id)_currentSelectAllButton;
- (void)_deletePressed;
- (void)_donePressed;
- (void)_savePressed;
- (void)_selectAllPhotos;
- (void)_selectAllPressed;
- (void)_selectPressed;
- (void)_updateButtons;
- (void)_updateButtonsForSelectionChanged;
- (void)_updateTitle;
- (bool)collectionView:(id)arg1 canMoveItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)editor;
- (bool)externalImagesSet;
- (id)face;
- (id)faceView;
- (bool)inGallery;
- (id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(bool)arg3 faceView:(id)arg4 externalImagesSet:(bool)arg5;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEditor:(id)arg1;
- (void)setExternalImagesSet:(bool)arg1;
- (void)setFace:(id)arg1;
- (void)setFaceView:(id)arg1;
- (void)setInGallery:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
