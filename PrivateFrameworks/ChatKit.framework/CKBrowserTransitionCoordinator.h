/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserTransitionCoordinator : NSObject <CKFullScreenAppViewControllerDelegate> {
    CKPresentationControllerWindow * _appWindow;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _cachedCompactFrame;
    CKConversation * _conversation;
    UIViewController<CKBrowserViewControllerProtocol> * _currentBrowser;
    long long  _currentConsumer;
    <CKBrowserTransitionCoordinatorDelegate> * _delegate;
    bool  _expanded;
    CKFullScreenAppViewController * _fullscreenViewController;
    long long  _lastTransitionReason;
    UIViewController * _presentingViewController;
    UIWindow * _previousKeyWindow;
    <CKBrowserViewControllerSendDelegate> * _sendDelegate;
    bool  _underTest;
}

@property (nonatomic, retain) CKPresentationControllerWindow *appWindow;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } cachedCompactFrame;
@property (nonatomic, retain) CKConversation *conversation;
@property (nonatomic, retain) UIViewController<CKBrowserViewControllerProtocol> *currentBrowser;
@property (nonatomic) long long currentConsumer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKBrowserTransitionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (nonatomic, retain) CKFullScreenAppViewController *fullscreenViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long lastTransitionReason;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic) UIWindow *previousKeyWindow;
@property (nonatomic) <CKBrowserViewControllerSendDelegate> *sendDelegate;
@property (readonly) Class superclass;
@property (nonatomic) bool underTest;
@property (nonatomic, readonly) bool wasCurrentBrowserExpanded;

- (void).cxx_destruct;
- (id)appWindow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cachedCompactFrame;
- (id)conversation;
- (id)currentBrowser;
- (long long)currentConsumer;
- (id)delegate;
- (void)dismissCurrentFullscreenBrowserAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (id)fullscreenViewController;
- (bool)isExpanded;
- (bool)isHostingRemoteKeyboardView;
- (long long)lastTransitionReason;
- (void)presentCurrentBrowserFullscreenAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)presentingViewController;
- (id)previousKeyWindow;
- (void)releaseOwnershipOfBrowserForConsumer:(long long)arg1;
- (id)requestOwnershipOfBrowserForConsumer:(long long)arg1;
- (id)sendDelegate;
- (void)setAppWindow:(id)arg1;
- (void)setCachedCompactFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setConversation:(id)arg1;
- (void)setCurrentBrowser:(id)arg1;
- (void)setCurrentConsumer:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(bool)arg1;
- (void)setExpanded:(bool)arg1 withReason:(long long)arg2;
- (void)setFullscreenViewController:(id)arg1;
- (void)setLastTransitionReason:(long long)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setPreviousKeyWindow:(id)arg1;
- (void)setSendDelegate:(id)arg1;
- (void)setUnderTest:(bool)arg1;
- (void)transitionCurrentBrowserToCollapsedPresentationAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (void)transitionCurrentBrowserToExpandedPresentationAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)underTest;
- (bool)updateBrowserSessionForPlugin:(id)arg1 datasource:(id)arg2;
- (bool)wasCurrentBrowserExpanded;

@end
