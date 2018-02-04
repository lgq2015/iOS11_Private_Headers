/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProductSplitDetailViewController : UIViewController <MusicClientContextConsuming, MusicEntityEditableVerticalLockupViewDelegate, MusicMediaDetailSplitViewController, MusicVerticalScrollingContainerViewControllerDelegate> {
    MusicClientContext * _clientContext;
    <MusicEntityProviding> * _containerEntityProvider;
    MusicEntityValueContext * _containerEntityValueContext;
    UIImage * _editedContentArtworkImage;
    NSString * _lockupArtworkProperty;
    MusicMediaDetailTintInformation * _mediaDetailTintInformation;
    <MusicMediaProductSplitDetailViewControllerDelegate> * _mediaSplitViewControllerDelegate;
    MPAVController * _player;
    UIViewController * _relatedContentViewController;
    MusicEntityEditableVerticalLockupView * _verticalLockupView;
    MusicVerticalScrollingContainerViewController * _verticalScrollingContainerViewController;
}

@property (nonatomic, retain) MusicClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIImage *editedContentArtworkImage;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lockupArtworkProperty;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic) <MusicMediaProductSplitDetailViewControllerDelegate> *mediaSplitViewControllerDelegate;
@property (nonatomic, retain) UIViewController *relatedContentViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_applyTintInformation;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_calculateArtworkEdgeInsets;
- (void)_containerEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_reloadContainerEntityValueContextProperties;
- (void)_reloadVerticalScrollingContainerItems;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_updatePlaybackStatusForLockupView;
- (void)_updateVerticalLockupViewSize;
- (void)cancelEditing;
- (id)clientContext;
- (void)commitEditing;
- (id)contentScrollView;
- (void)dealloc;
- (void)editableVerticalLockupView:(id)arg1 didSelectCameraButton:(id)arg2;
- (id)editedContentArtworkImage;
- (id)initWithContainerEntityProvider:(id)arg1 clientContext:(id)arg2;
- (id)lockupArtworkProperty;
- (id)mediaDetailTintInformation;
- (id)mediaSplitViewControllerDelegate;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (id)relatedContentViewController;
- (void)setClientContext:(id)arg1;
- (void)setEditedContentArtworkImage:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setLockupArtworkProperty:(id)arg1;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setMediaSplitViewControllerDelegate:(id)arg1;
- (void)setRelatedContentViewController:(id)arg1;
- (void)verticalScrollingContainerViewController:(id)arg1 willEndDraggingWithVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)verticalScrollingContainerViewControllerContentSizeDidChange:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end