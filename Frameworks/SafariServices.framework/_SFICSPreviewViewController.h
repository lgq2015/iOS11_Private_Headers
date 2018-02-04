/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFICSPreviewViewController : UINavigationController <EKICSPreviewControllerDelegate> {
    UIBarButtonItem * _activityBarButtonItem;
    UIBarButtonItem * _doneBarButtonItem;
    NSString * _filePath;
    EKICSPreviewController * _icsController;
    NSURL * _sourceURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_done:(id)arg1;
- (void)_ensureLeftBarButtonItemsIncludesActivityItem:(id)arg1;
- (void)_ensureLeftBarButtonItemsIncludesDoneItem:(id)arg1;
- (void)_presentActivityViewController:(id)arg1;
- (void)_updateNavigationBarItems;
- (void)dealloc;
- (void)icsPreviewControllerWantsDismissal:(id)arg1;
- (id)initWithFilePath:(id)arg1 sourceURL:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)popViewControllerAnimated:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
