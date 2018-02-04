/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCloudSharedPostCommentViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate> {
    NSString * _albumName;
    NSMutableArray * _attachments;
    NSArray * _backgroundConstraints;
    UIView * _backgroundView;
    <PUCloudSharedPostCommentViewControllerDelegate> * _commentDelegate;
    id /* block */  _completionHandler;
    PUCloudSharedBackdropView * _containerView;
    struct { 
        unsigned int hasDidCancelComment : 1; 
        unsigned int hasDidSendComment : 1; 
    }  _delegateFlags;
    NSArray * _dialogConstraints;
    UIView * _dialogView;
    PUStackView * _imageStackView;
    bool  _isNewAlbum;
    UIColor * _placeholderColor;
    NSString * _placeholderText;
    long long  _selectedAlbumIndex;
    UIColor * _separatorColor;
    UITableView * _tableView;
    UILabel * _textPlaceholderLabel;
    UITextView * _textView;
}

@property (nonatomic) <PUCloudSharedPostCommentViewControllerDelegate> *commentDelegate;
@property (nonatomic, readonly) NSString *commentText;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isNewAlbum;
@property (nonatomic, copy) NSString *placeholderText;
@property (nonatomic) long long selectedAlbumIndex;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addBackgroundViewConstraintsInView:(id)arg1;
- (void)_addDialogConstraintsInView:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (id)_constraintsForBackgroundView:(id)arg1 inContainerView:(id)arg2;
- (id)_contentView;
- (id)_placeholderColor;
- (void)_postAction:(id)arg1;
- (id)_separatorColor;
- (void)_updateKeyboard;
- (void)addImage:(id)arg1;
- (id)commentDelegate;
- (id)commentText;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)initWithAlbumName:(id)arg1 isCreateAlbum:(bool)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isNewAlbum;
- (void)loadView;
- (id)navigationItem;
- (id)placeholderText;
- (long long)selectedAlbumIndex;
- (void)setCommentDelegate:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setIsNewAlbum:(bool)arg1;
- (void)setPlaceholderText:(id)arg1;
- (void)setSelectedAlbumIndex:(long long)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

@end
