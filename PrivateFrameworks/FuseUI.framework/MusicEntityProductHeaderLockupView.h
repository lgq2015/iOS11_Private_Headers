/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicEntityProductHeaderLockupView : MusicEntityAbstractLockupView <UITextViewDelegate> {
    MPUTextButton * _addSongsButton;
    UIView * _artworkEditingOverlayView;
    _UIBackdropView * _backdropView;
    UIView * _bottomHairlineView;
    double  _cachedTallestButtonHeight;
    <MusicEntityProductHeaderLockupViewDelegate> * _delegate;
    double  _downloadProgress;
    MusicDownloadProgressButton * _downloadProgressButton;
    long long  _downloadProgressType;
    MPUTextButton * _editButton;
    NSString * _editableText;
    UIView * _editableTextBottomHairlineView;
    UILabel * _editableTextHeaderLabel;
    UITextView * _editableTextPlaceholderView;
    UITextView * _editableTextView;
    bool  _editableTitleShouldBecomeFirstResponder;
    bool  _editing;
    UIButton * _likeDislikeButton;
    long long  _likeDislikeButtonState;
    MusicEntityViewProductHeaderLockupContentDescriptor * _productHeaderLockupContentDescriptor;
    UIActivityIndicatorView * _refreshActivityIndicatorView;
    UIButton * _refreshButton;
    UIButton * _shareButton;
    bool  _shouldIgnoreArtworkImageChanges;
    bool  _shouldUpdateTallestButtonHeightCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicEntityProductHeaderLockupViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double downloadProgress;
@property (nonatomic, readonly) MusicDownloadProgressButton *downloadProgressButton;
@property (nonatomic) long long downloadProgressType;
@property (nonatomic, readonly) NSString *editableText;
@property (nonatomic) bool editableTitleShouldBecomeFirstResponder;
@property (getter=isEditing, nonatomic) bool editing;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long likeDislikeButtonState;
@property (nonatomic, retain) MusicEntityViewProductHeaderLockupContentDescriptor *productHeaderLockupContentDescriptor;
@property (nonatomic, readonly) UIButton *shareButton;
@property (readonly) Class superclass;

+ (double)_buttonHeight;
+ (double)maximumRowHeightForHorizontalLockupContentDescriptor:(id)arg1 traitCollection:(id)arg2;

- (void).cxx_destruct;
- (void)_addSongsButtonTapped:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forActionControl:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_adjustAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forActionView:(id)arg2;
- (void)_artworkViewImageDidChange;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)_downloadProgressButtonTapped:(id)arg1;
- (void)_editButtonTapped:(id)arg1;
- (id)_genericActionButtonWithImage:(id)arg1;
- (id)_genericActionButtonWithImageName:(id)arg1;
- (id)_genericActionButtonWithText:(id)arg1;
- (void)_layoutButtonsWithAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 insetContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_layoutEditingSubviews;
- (void)_layoutEditingSubviewsForEditing:(bool)arg1 editingViewsAlpha:(double)arg2;
- (void)_layoutSubviewsForCompactHorizontalSizeClass;
- (void)_layoutSubviewsForRegularHorizontalSizeClass;
- (void)_likeDislikeButtonTapped:(id)arg1;
- (id)_newTextView;
- (void)_refreshButtonTapped:(id)arg1;
- (id)_refreshImage;
- (void)_setFrameOfActionButton:(id)arg1 basedOnAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 customHeight:(double)arg3 maximumHeightForCentering:(double)arg4;
- (void)_setFrameOfActionControl:(id)arg1 basedOnAvailableContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 maximumHeightForCentering:(double)arg3 buttonHeightForCentering:(double)arg4 buttonBaselineOffset:(double)arg5;
- (void)_shareButtonTapped:(id)arg1;
- (bool)_shouldEnableArtworkViewUserInteraction;
- (bool)_shouldShowPlayButton;
- (void)_updateColorsOfGenericActionControl:(id)arg1;
- (void)_updateColorsOfGenericActionView:(id)arg1;
- (void)_updateEditableTextPlaceholderViewVisibility;
- (void)_updateLikeDislikeButtonStateAppearance;
- (void)_updateTextView:(id)arg1 forTextDescriptor:(id)arg2 textColor:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (double)downloadProgress;
- (id)downloadProgressButton;
- (long long)downloadProgressType;
- (id)editableText;
- (bool)editableTitleShouldBecomeFirstResponder;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEditing;
- (void)layoutSubviews;
- (long long)likeDislikeButtonState;
- (void)music_inheritedLayoutInsetsDidChange;
- (id)productHeaderLockupContentDescriptor;
- (void)setDelegate:(id)arg1;
- (void)setDownloadProgress:(double)arg1;
- (void)setDownloadProgressType:(long long)arg1;
- (void)setEditableTitleShouldBecomeFirstResponder:(bool)arg1;
- (void)setEditing:(bool)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEntityValueProvider:(id)arg1;
- (void)setLikeDislikeButtonState:(long long)arg1;
- (void)setProductHeaderLockupContentDescriptor:(id)arg1;
- (id)shareButton;
- (bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
