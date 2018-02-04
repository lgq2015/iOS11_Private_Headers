/* made by EzioChiu.
 */

@protocol CKBrowserViewControllerProtocol <NSObject>

@required

- (IMBalloonPlugin *)balloonPlugin;
- (IMBalloonPluginDataSource *)balloonPluginDataSource;
- (long long)browserPresentationStyle;
- (NSString *)conversationID;
- (void)dismiss;
- (bool)inExpandedPresentation;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1;
- (id)initWithBalloonPlugin:(IMBalloonPlugin *)arg1 dataSource:(IMBalloonPluginDataSource *)arg2;
- (bool)isLoaded;
- (bool)isiMessage;
- (bool)mayBeKeptInViewHierarchy;
- (UIViewController *)presentationViewController;
- (NSObject<CKBrowserViewControllerSendDelegate> *)sendDelegate;
- (void)setBalloonPluginDataSource:(IMBalloonPluginDataSource *)arg1;
- (void)setConversationID:(NSString *)arg1;
- (void)setIsiMessage:(bool)arg1;
- (void)setPresentationViewController:(UIViewController *)arg1;
- (void)setSendDelegate:(NSObject<CKBrowserViewControllerSendDelegate> *)arg1;
- (bool)shouldShowChatChrome;
- (bool)shouldSuppressEntryView;
- (bool)supportsQuickView;
- (bool)wantsDarkUI;
- (bool)wantsOpaqueUI;

@optional

- (void)_updateContentOverlayInsetsForSelfAndChildren;
- (NSNumber *)adamID;
- (unsigned long long)badgeValue;
- (void)beginDisablingUserInteraction;
- (void)beginSuppressingAppearanceMethods;
- (CKBrowserDragManager *)browserDragManager;
- (void)browserScrolledOffScreen;
- (void)browserScrolledOnScreen;
- (bool)canReplaceDataSource;
- (id)cancelTouchesInView;
- (NSData *)conversationEngramID;
- (long long)currentBrowserConsumer;
- (void)deferredForceTearDownRemoteView;
- (void)didTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)endDisablingUserInteraction;
- (void)endSuppressingAppearanceMethods;
- (void)forceTearDownRemoteView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })horizontalSwipeExclusionRect;
- (void)killExtensionProcess;
- (void)loadRemoteView;
- (void)messageAddedWithDataSource:(IMBalloonPluginDataSource *)arg1;
- (long long)parentModalPresentationStyle;
- (<UIViewControllerTransitioningDelegate> *)parentTransitioningDelegate;
- (void)prepareForDisplay;
- (NSArray *)recipients;
- (UIViewController *)remoteViewController;
- (NSData *)requestSnapshotDataForPersistance;
- (void)saveSnapshotForBrowserViewController;
- (NSString *)sender;
- (void)setAdamID:(NSNumber *)arg1;
- (void)setConversationEngramID:(NSData *)arg1;
- (void)setCurrentBrowserConsumer:(long long)arg1;
- (void)setRecipients:(NSArray *)arg1;
- (void)setSender:(NSString *)arg1;
- (void)setStoreLaunchURL:(NSURL *)arg1 sourceApplication:(NSString *)arg2;
- (void)unloadRemoteView;
- (void)viewDidTransitionToCompactPresentation;
- (void)viewDidTransitionToExpandedPresentation;
- (void)viewWillTransitionToCompactPresentation;
- (void)viewWillTransitionToExpandedPresentation;
- (bool)wasExpandedPresentation;

@end
