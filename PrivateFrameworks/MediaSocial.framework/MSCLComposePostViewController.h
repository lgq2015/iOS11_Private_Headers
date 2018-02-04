/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLComposePostViewController : SKUIViewController <MSCLAttachmentAlertDelegate, MSCLAttachmentPropertiesDelegate, MSCLAudioPickerDelegate, MSCLComposeImagePickerDelegate, MSCLComposePostViewDelegate, MSCLSoundBiteViewControllerDelegate, MSCLTagListDelegate> {
    MSCLAccountStore * _accountStore;
    MSCLAttachmentDownloadOperation * _attachmentDownloadOperation;
    bool  _attachmentWasDownloadedAndNeedsRemoval;
    NSMutableArray * _attachments;
    SKUIMediaSocialAuthor * _attributionAuthor;
    MSCLComposeLabelValueButton * _attributionButton;
    MSCLAudioPickerViewController * _audioPickerController;
    MSCLAuthorView * _authorSelectionView;
    MSCLComposePostView * _composeView;
    MSCLConfiguration * _configuration;
    <MSCLComposePostViewControllerDelegate> * _delegate;
    bool  _didAppear;
    MSCLAttachment * _editingAttachment;
    MSCLComposeLabelValueButton * _externalServicesButton;
    MSCLComposeImagePickerController * _imagePickerController;
    SKUIResourceLoader * _resourceLoader;
    SKUIMediaSocialAuthor * _selectedAuthor;
    NSMutableArray * _soundBiteViewControllers;
    MSCLTagListViewController * _tagCompletionViewController;
}

@property (nonatomic) MSCLAttachmentDownloadOperation *attachmentDownloadOperation;
@property (nonatomic) bool attachmentWasDownloadedAndNeedsRemoval;
@property (nonatomic, readonly) MSCLConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MSCLComposePostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)MSCLComposeImagePicker:(id)arg1 didFinishWithAttachments:(id)arg2;
- (void)MSCLComposeImagePickerDidCancel:(id)arg1;
- (void)_addAttachments:(id)arg1;
- (long long)_allowedCharacterCount;
- (void)_attachmentButtonAction:(id)arg1;
- (id)_attachmentViews;
- (void)_attributionButtonAction:(id)arg1;
- (bool)_canShowEditorForAttachment:(id)arg1;
- (id)_defaultAttributionAuthorForDestinationAuthor:(id)arg1;
- (void)_dismissTagCompletionViewController;
- (void)_editPropertiesForAttachment:(id)arg1 animated:(bool)arg2;
- (id)_enabledExternalServices;
- (void)_externalServicesButtonAction:(id)arg1;
- (id)_footerViews;
- (id)_getSoundBite;
- (bool)_hasSoundBite;
- (id)_headerViews;
- (void)_ingestAttachment:(id)arg1 animated:(bool)arg2;
- (void)_pickAuthorAction:(id)arg1;
- (void)_reloadAttachmentUI;
- (void)_reloadExternalServicesButton;
- (void)_reloadTagCompletionViewController;
- (id)_resourceLoader;
- (id)_scrollableHeaderViews;
- (void)_setAttributionAuthor:(id)arg1;
- (void)_setSelectedAuthor:(id)arg1;
- (void)_socialAccountStoreDidChangeNotification:(id)arg1;
- (void)_updatePostButton;
- (void)addAttachments:(id)arg1 animated:(bool)arg2;
- (void)attachmentAlertController:(id)arg1 didFinishWithResult:(long long)arg2;
- (id)attachmentDownloadOperation;
- (void)attachmentPropertiesController:(id)arg1 didEditAttachment:(id)arg2;
- (bool)attachmentWasDownloadedAndNeedsRemoval;
- (void)audioPicker:(id)arg1 didFinishWithAttachment:(id)arg2;
- (void)audioPickerDidCancel:(id)arg1;
- (void)composePostView:(id)arg1 didRemoveAttachmentView:(id)arg2 atIndex:(long long)arg3;
- (void)composePostView:(id)arg1 didSelectAttachment:(id)arg2 atIndex:(long long)arg3;
- (id)composePostView:(id)arg1 tagForString:(id)arg2;
- (void)composePostViewTextDidChange:(id)arg1;
- (void)composePostViewTextSelectionDidChange:(id)arg1;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (void)getPostDescriptionUsingBlock:(id /* block */)arg1;
- (id)initWithConfiguration:(id)arg1;
- (void)loadView;
- (id)parentViewControllerForMSCLComposeImagePicker:(id)arg1;
- (long long)preferredStatusBarStyle;
- (void)setAttachmentDownloadOperation:(id)arg1;
- (void)setAttachmentWasDownloadedAndNeedsRemoval:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tagList:(id)arg1 didSelectTag:(id)arg2;
- (void)viewControllerDidCompleteRecording:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
