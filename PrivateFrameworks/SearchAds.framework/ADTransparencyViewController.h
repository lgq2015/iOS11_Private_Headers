/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADTransparencyViewController : UIViewController <UIWebViewDelegate> {
    <ADTransparencyViewControllerDelegate> * _delegate;
    UILabel * _errorLabel;
    double  _statusBarOffset;
    NSString * _transparencyDetails;
    NSDictionary * _transparencyDetailsData;
    NSString * _transparencyDetailsUnavailableMessage;
    NSString * _transparencyRendererPayload;
    NSString * _transparencyRendererURL;
    UIActivityIndicatorView * activityIndicator;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <ADTransparencyViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UILabel *errorLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic) double statusBarOffset;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *transparencyDetails;
@property (nonatomic, retain) NSDictionary *transparencyDetailsData;
@property (nonatomic, readonly) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, readonly) NSString *transparencyRendererPayload;
@property (nonatomic, readonly) NSString *transparencyRendererURL;

- (void).cxx_destruct;
- (void)_closeViewController:(id)arg1;
- (void)_commonInit;
- (void)_hideErrorMessage;
- (void)_reportTransparencyViewControllerEventWithType:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)_showErrorMessage:(id)arg1;
- (id)delegate;
- (id)determineSearchAdsBundleToUse;
- (void)errorDelegate;
- (id)errorLabel;
- (id)initWithTransparencyDetails:(id)arg1;
- (void)loadWebView;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)presentViewDelegate;
- (void)requestViewWithTransparencyDetails:(id)arg1;
- (void)requestViewWithTransparencyDetailsDictionary:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorLabel:(id)arg1;
- (void)setStatusBarOffset:(double)arg1;
- (void)setTransparencyDetails:(id)arg1;
- (void)setTransparencyDetailsData:(id)arg1;
- (double)statusBarOffset;
- (id)transparencyDetails;
- (id)transparencyDetailsData;
- (id)transparencyDetailsUnavailableMessage;
- (id)transparencyRendererPayload;
- (id)transparencyRendererURL;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
