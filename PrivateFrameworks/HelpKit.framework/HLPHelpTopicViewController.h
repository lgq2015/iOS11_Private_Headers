/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPHelpTopicViewController : UIViewController <HLPHelpLoadingViewDelegate, HLPHelpTopicViewControllerDelegate, UIGestureRecognizerDelegate, UIWebViewDelegate> {
    bool  _RTL;
    HLPURLSession * _URLSession;
    UIBarButtonItem * _backBarButtonItem;
    bool  _canShowTOC;
    HLPHelpTopicHistoryItem * _currentTopicHistoryItem;
    <HLPHelpTopicViewControllerDelegate> * _delegate;
    bool  _displayHelpTopicsOnly;
    UIBarButtonItem * _forwardBarButtonItem;
    HLPHelpBookController * _helpBookController;
    NSURL * _helpBookURL;
    bool  _hideDoneButton;
    id  _interactivePopGestureRecognizerDelegate;
    HLPHelpLoadingView * _loadingView;
    NSLayoutConstraint * _loadingViewTopConstraint;
    HLPHelpLocale * _locale;
    NSArray * _searchTerms;
    bool  _showTopicNameAsTitle;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UIBarButtonItem * _tocBarButtonItem;
    NSCache * _topicCache;
    NSMutableArray * _topicHistory;
    HLPHelpUsageController * _usageController;
    UIWebView * _webView;
    bool  _webViewLoaded;
}

@property (nonatomic, retain) HLPHelpTopicHistoryItem *currentTopicHistoryItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HLPHelpTopicViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool displayHelpTopicsOnly;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HLPHelpBookController *helpBookController;
@property (nonatomic, retain) NSURL *helpBookURL;
@property (nonatomic) bool hideDoneButton;
@property (nonatomic, retain) HLPHelpLoadingView *loadingView;
@property (nonatomic, retain) HLPHelpLocale *locale;
@property (nonatomic, retain) NSArray *searchTerms;
@property (nonatomic) bool showTopicNameAsTitle;
@property (readonly) Class superclass;
@property (nonatomic, retain) HLPHelpUsageController *usageController;
@property (nonatomic, retain) UIWebView *webView;

- (void).cxx_destruct;
- (void)backButtonTapped;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (id)currentTopicHistoryItem;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (void)dismissWelcomeHelpTopic;
- (bool)displayHelpTopicsOnly;
- (void)forwardButtonTapped;
- (id)helpBookController;
- (id)helpBookURL;
- (void)helpTopicViewController:(id)arg1 failToLoadWithError:(id)arg2;
- (void)helpTopicViewControllerCurrentTopicIsPassionPoint:(id)arg1;
- (void)helpTopicViewControllerDoneButtonTapped:(id)arg1;
- (void)helpTopicViewControllerShowHelpBookInfo:(id)arg1;
- (bool)hideDoneButton;
- (id)init;
- (void)loadHTMLString:(id)arg1 anchor:(id)arg2;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3;
- (void)loadHelpTopicItem:(id)arg1 searchTerms:(id)arg2 anchor:(id)arg3 topicAccessType:(long long)arg4;
- (id)loadingView;
- (id)locale;
- (void)reloadCurrentTopic;
- (void)saveCurrentTopicItem;
- (id)searchTerms;
- (void)setCurrentTopicHistoryItem:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisplayHelpTopicsOnly:(bool)arg1;
- (void)setHelpBookController:(id)arg1;
- (void)setHelpBookURL:(id)arg1;
- (void)setHideDoneButton:(bool)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setSearchTerms:(id)arg1;
- (void)setShowTopicNameAsTitle:(bool)arg1;
- (void)setUsageController:(id)arg1;
- (void)setWebView:(id)arg1;
- (void)showHelpBookInfo:(id)arg1;
- (void)showTableOfContent;
- (bool)showTopicNameAsTitle;
- (void)showWebViewDelay;
- (void)updateDoneButton;
- (void)updateHTMLStringPath:(id)arg1 tag:(id)arg2 attribute:(id)arg3;
- (void)updateNavigationButtons;
- (void)updateScrollPositionForCurrentTopicItem;
- (id)usageController;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)webView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

@end
