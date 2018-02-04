/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

@interface BFFAboutTextViewController : BFFAboutViewController <UIWebViewDelegate> {
    NSString * _HTMLString;
    bool  _disableLinkNavigation;
    bool  _includesAdditionalFormatting;
    NSString * _linkString;
    UIViewController * _linkedController;
    NSString * _titleString;
}

@property (nonatomic, retain) NSString *HTMLString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableLinkNavigation;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool includesAdditionalFormatting;
@property (nonatomic, retain) NSString *linkString;
@property (nonatomic, retain) UIViewController *linkedController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *titleString;

- (void).cxx_destruct;
- (id)HTMLString;
- (bool)disableLinkNavigation;
- (bool)includesAdditionalFormatting;
- (id)linkString;
- (id)linkedController;
- (void)loadView;
- (void)setDisableLinkNavigation:(bool)arg1;
- (void)setHTMLString:(id)arg1;
- (void)setIncludesAdditionalFormatting:(bool)arg1;
- (void)setLinkString:(id)arg1;
- (void)setLinkedController:(id)arg1;
- (void)setTitleString:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)titleString;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

@end
