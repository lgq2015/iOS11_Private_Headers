/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroActivityViewController : PHActivityViewController <MiroActivityItemProviderDelegate, UIActivityViewControllerDelegate> {
    unsigned long long  _backgroundTask;
    UIBarButtonItem * _doneButton;
    UIViewController * _presenter;
}

@property (nonatomic) unsigned long long backgroundTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneButton;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *presenter;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_deviceIsRunningInternalOS;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
- (unsigned long long)backgroundTask;
- (void)cancel;
- (void)dismissProgressController;
- (id)doneButton;
- (void)exportFailed;
- (void)exportWillBegin;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 barButtonItem:(id)arg3 parentViewController:(id)arg4;
- (void)presentProgressController:(id)arg1;
- (id)presenter;
- (void)setBackgroundTask:(unsigned long long)arg1;
- (void)setCompletionWithItemsHandler:(id /* block */)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setPresenter:(id)arg1;

@end
