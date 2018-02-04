/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSMagnifyController : PSListController <UIScrollViewDelegate, UIWebViewDelegate> {
    NSURL * _HTMLResourceBaseURL;
    bool  _alwaysShowCancelButton;
    <PSMagnifyControllerDelegate> * _delegate;
    UIView * _dividerLine;
    bool  _doneButtonCommits;
    NSObject<OS_dispatch_semaphore> * _firstLoadSemaphore;
    PSMagnifyMode * _initialMagnifyMode;
    bool  _loaded;
    UISegmentedControl * _magnifyModePicker;
    PSMagnifyMode * _originalMagnifyMode;
    UIPageControl * _pageControl;
    UIScrollView * _previewsScroller;
    long long  _scrolledPreviewPage;
    PSMagnifyMode * _selectedMagnifyMode;
    NSMutableDictionary * _webViewsForMagnifyMode;
}

@property (nonatomic) bool alwaysShowCancelButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PSMagnifyControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doneButtonCommits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)commitMagnifyMode:(id)arg1;
+ (void)commitMagnifyMode:(id)arg1 withRelaunchURL:(id)arg2;
+ (id)currentMagnifyMode;
+ (id)localizedMagnifyModeName;
+ (bool)shouldShowMagnify;

- (void).cxx_destruct;
- (bool)alwaysShowCancelButton;
- (id)arrayOfWebViewsWithCount:(unsigned long long)arg1;
- (id)currentWebViewSet;
- (id)delegate;
- (bool)doneButtonCommits;
- (void)finishCancel:(id)arg1;
- (void)finishDone:(id)arg1;
- (id)init;
- (id)initWithZoomedSelected:(bool)arg1;
- (void)loadView;
- (id)localizedCSSStringFromUnlocalizedCSSString:(id)arg1;
- (void)magnifyModeConfirmed:(id)arg1;
- (void)magnifyModeSelectionChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setAlwaysShowCancelButton:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDoneButtonCommits:(bool)arg1;
- (void)setSelectedMagnifyMode:(id)arg1;
- (id)specifiers;
- (void)updateNavigationButtons;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (double)xOriginForPage:(long long)arg1;

@end
