/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUCommentsTableDataController : NSObject <PLCloudCommentsChangeObserver, PUPhotoCommentEntryViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    PHAsset * _asset;
    NSCache * _commentsHeightCache;
    <PUCommentsTableDataControllerDelegate> * _delegate;
    bool  _editing;
    PUPhotoCommentEntryView * _entryView;
    PLCloudSharedComment * _justInsertedComment;
    PLManagedAsset * _managedAsset;
    bool  _shouldUseCompactCommentSeparators;
    UITableView * _tableView;
}

@property (nonatomic, retain) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUCommentsTableDataControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEditing, nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PLCloudSharedComment *justInsertedComment;
@property (nonatomic, retain) PLManagedAsset *managedAsset;
@property (nonatomic, readonly) double minimumHeight;
@property (nonatomic) bool shouldUseCompactCommentSeparators;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITableView *tableView;

- (void).cxx_destruct;
- (long long)_assetOwnerCommentSection;
- (bool)_canPostCommentWithText:(id)arg1 localizedFailureDescription:(id*)arg2;
- (id)_commentText;
- (id)_currentEntryView;
- (void)_fontCacheDidChange:(id)arg1;
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;
- (bool)_isAssetOwnerSectionVisible;
- (bool)_isEditingAllowed;
- (long long)_postCommentSection;
- (void)_postCommentWithText:(id)arg1;
- (void)_scrollToComment:(id)arg1 animated:(bool)arg2;
- (long long)_smileCommentSection;
- (long long)_textCommentSection;
- (void)_updateFirstResponder;
- (void)_validateAndPostComment:(id)arg1;
- (id)asset;
- (void)cloudCommentsDidChange:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithTableView:(id)arg1;
- (bool)isEditing;
- (id)justInsertedComment;
- (id)managedAsset;
- (double)minimumHeight;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)photoCommentEntryViewDidBeginEditing:(id)arg1;
- (void)photoCommentEntryViewDidEndEditing:(id)arg1;
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;
- (bool)photoCommentEntryViewShouldEndEditing:(id)arg1;
- (void)photoCommentEntryViewWillBeginEditing:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAsset:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setJustInsertedComment:(id)arg1;
- (void)setManagedAsset:(id)arg1;
- (void)setShouldUseCompactCommentSeparators:(bool)arg1;
- (bool)shouldUseCompactCommentSeparators;
- (id)tableView;
- (bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;
- (bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

@end