/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {
    bool  _controllerWasDismissed;
    NSArray * _previewItems;
    bool  _suppressRefetchingCurrentHighQualityImage;
}

@property (nonatomic) bool controllerWasDismissed;
@property (nonatomic, copy) NSArray *previewItems;
@property (nonatomic) bool suppressRefetchingCurrentHighQualityImage;

- (void).cxx_destruct;
- (bool)controllerWasDismissed;
- (id)currentPreviewItem;
- (void)dismissViewControllerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)loadView;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (long long)preferredStatusBarStyle;
- (id)previewActions;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (id)previewItems;
- (void)setControllerWasDismissed:(bool)arg1;
- (void)setDataSource:(id)arg1;
- (void)setPreviewItems:(id)arg1;
- (void)setSuppressRefetchingCurrentHighQualityImage:(bool)arg1;
- (bool)suppressRefetchingCurrentHighQualityImage;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
