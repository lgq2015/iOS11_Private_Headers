/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUNavigationController : UINavigationController <SUScriptNativeObject> {
    bool  _canBeWeakScriptReference;
    SUClientInterface * _clientInterface;
    SUSection * _section;
    bool  _skLoading;
    long long  _storeBarStyle;
}

@property (nonatomic, retain) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUSection *section;
@property (getter=isSkLoading, nonatomic) bool skLoading;
@property (readonly) Class superclass;

- (long long)ITunesStoreUIBarStyle;
- (void)_loadingDidChangeNotification:(id)arg1;
- (id)_sectionForViewController:(id)arg1;
- (void)_setStoreBarStyle:(long long)arg1 clientInterface:(id)arg2;
- (void)addChildViewController:(id)arg1;
- (bool)clearsWeakScriptReferences;
- (id)clientInterface;
- (id)copyArchivableContext;
- (id)copyScriptViewController;
- (void)dealloc;
- (id)description;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithSection:(id)arg1;
- (id)initWithSection:(id)arg1 rootViewController:(id)arg2;
- (bool)isSkLoading;
- (void)loadView;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (void)removeChildViewController:(id)arg1;
- (void)restoreArchivableContext:(id)arg1;
- (id)section;
- (void)setClientInterface:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)setSection:(id)arg1;
- (void)setSkLoading:(bool)arg1;
- (void)setToolbarHidden:(bool)arg1;
- (void)setToolbarHidden:(bool)arg1 animated:(bool)arg2;
- (void)setViewControllers:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (bool)window:(id)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;

@end
