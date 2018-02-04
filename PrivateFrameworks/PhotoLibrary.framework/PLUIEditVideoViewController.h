/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUIEditVideoViewController : PLUIImageViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    unsigned int  _canCreateMetadata;
    id  _delegate;
    UIImagePickerController * _imagePicker;
    UINavigationItem * _navItem;
    NSDictionary * _options;
    bool  _parentInPopoverException;
    Class  _viewClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool parentInPopoverException;
@property (readonly) Class superclass;

- (void)_cancelTrim:(id)arg1;
- (bool)_displaysFullScreen;
- (bool)_editingForThirdParty;
- (void)_setupNavigationItemAndTrimTitle:(id)arg1;
- (id)_trimMessage;
- (void)_trimVideo:(id)arg1;
- (Class)_viewClass;
- (int)cropOverlayMode;
- (void)dealloc;
- (id)delegate;
- (void)didChooseVideoAtURL:(id)arg1 options:(id)arg2;
- (id)initWithPhoto:(id)arg1 trimTitle:(id)arg2;
- (id)initWithProperties:(id)arg1;
- (id)initWithVideoURL:(id)arg1 trimTitle:(id)arg2;
- (void)loadView;
- (id)navigationItem;
- (bool)parentInPopoverException;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewFrame;
- (void)setDelegate:(id)arg1;
- (void)setImagePickerOptions:(id)arg1;
- (void)setParentInPopoverException:(bool)arg1;
- (void)setViewClass:(Class)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (id)uiipc_imagePickerController;
- (id)uiipc_imagePickerOptions;
- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;
- (bool)videoViewCanCreateMetadata:(id)arg1;
- (void)videoViewPlaybackDidFail:(id)arg1;
- (double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;

@end
