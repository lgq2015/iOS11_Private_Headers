/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
 */

@interface VSOnscreenCodeViewModel : VSViewModel <VSLogoImageViewModel> {
    NSString * _footerText;
    UIImage * _logo;
    NSString * _logoAccessibilityLabel;
    NSItemProvider * _logoProvider;
    NSString * _onscreenCode;
    NSString * _regenerateCodeButtonTitle;
    VSMessageQueue * _regenerateCodeEventQueue;
    bool  _shouldShowRegenerateCodeButton;
    NSString * _webPagePostamble;
    NSString * _webPagePreamble;
    NSURL * _webPageURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *footerText;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *logo;
@property (nonatomic, copy) NSString *logoAccessibilityLabel;
@property (nonatomic, retain) NSItemProvider *logoProvider;
@property (nonatomic, copy) NSString *onscreenCode;
@property (nonatomic, copy) NSString *regenerateCodeButtonTitle;
@property (nonatomic, retain) VSMessageQueue *regenerateCodeEventQueue;
@property (nonatomic) bool shouldShowRegenerateCodeButton;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *webPagePostamble;
@property (nonatomic, copy) NSString *webPagePreamble;
@property (nonatomic, copy) NSURL *webPageURL;

- (void).cxx_destruct;
- (void)configureWithRequest:(id)arg1;
- (id)footerText;
- (id)init;
- (id)logo;
- (id)logoAccessibilityLabel;
- (id)logoProvider;
- (id)onscreenCode;
- (id)regenerateCodeButtonTitle;
- (id)regenerateCodeEventQueue;
- (void)setFooterText:(id)arg1;
- (void)setLogo:(id)arg1;
- (void)setLogoAccessibilityLabel:(id)arg1;
- (void)setLogoProvider:(id)arg1;
- (void)setOnscreenCode:(id)arg1;
- (void)setRegenerateCodeButtonTitle:(id)arg1;
- (void)setRegenerateCodeEventQueue:(id)arg1;
- (void)setShouldShowRegenerateCodeButton:(bool)arg1;
- (void)setWebPagePostamble:(id)arg1;
- (void)setWebPagePreamble:(id)arg1;
- (void)setWebPageURL:(id)arg1;
- (bool)shouldShowRegenerateCodeButton;
- (id)webPagePostamble;
- (id)webPagePreamble;
- (id)webPageURL;

@end
