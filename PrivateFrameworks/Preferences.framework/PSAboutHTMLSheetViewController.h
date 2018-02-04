/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSAboutHTMLSheetViewController : UIViewController <UIWebViewDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)presentAboutSheetTitled:(id)arg1 HTMLContent:(id)arg2 fromViewController:(id)arg3;

- (void)dealloc;
- (void)donePressed;
- (void)loadView;
- (void)setHTMLContent:(id)arg1 isFragment:(bool)arg2;
- (void)viewDidBecomeVisible;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;

@end
