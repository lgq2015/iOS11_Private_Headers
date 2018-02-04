/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDRemoteActionManagerViewController : UIViewController <DDRemoteActionHostViewControllerDelegate> {
    DDRemoteAction * _action;
    bool  _displayed;
    UIView * _errorView;
    NSExtension * _extension;
    UIView * _hitView;
    bool  _loaded;
    NSDate * _loadingDate;
    UIView * _loadingView;
    NSLayoutConstraint * _navControllerTopConstraint;
    UINavigationController * _navigationController;
    NSString * _platerTitle;
    bool  _previewMode;
    NSMutableArray * _rawSwipeActions;
    DDRemoteActionHostViewController * _remoteViewController;
    <NSCopying> * _request;
    <DDRemoteActionViewServiceProtocol> * _serviceContext;
    bool  _shouldDeferPresenting;
    DDRemoteActionManagerViewController * _strongSelf;
    UIView * _titleBar;
    NSLayoutConstraint * _titleBarBottomConstraint;
}

@property DDRemoteAction *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool previewMode;
@property (retain) <NSCopying> *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)DDRemoteActionDidTerminateWithError:(id)arg1;
- (id)action;
- (void)addHitOverlay;
- (id)controllerVerticalMargin;
- (void)dealloc;
- (void)dismissViewController;
- (id)doneButton;
- (id)emptyViewcontroller;
- (id)extension;
- (id)initWithAction:(id)arg1;
- (void)loadNavigationControllerIfNeeded;
- (void)loadRemoteAction:(id)arg1;
- (void)loadTitleBarIfNeeded;
- (void)presentRemoteViewController;
- (id)previewActionItems;
- (bool)previewMode;
- (void)removeLoadingViewToShowView:(id)arg1;
- (id)request;
- (void)setAction:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setPreviewMode:(bool)arg1;
- (void)setRequest:(id)arg1;
- (void)showErrorView;
- (void)showLoadingView;
- (void)showRemoteController;
- (void)unloadRemoteAction;
- (void)updatePreviewMode;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
