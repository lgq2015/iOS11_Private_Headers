/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILoadingViewController : UIViewController {
    UIColor * _backgroundColor;
    SKUIClientContext * _clientContext;
    NSString * _loadingText;
    SKUILoadingView * _loadingView;
    SKUIColorScheme * _spinnerColorScheme;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) SKUIClientContext *clientContext;
@property (nonatomic, retain) NSString *loadingText;
@property (nonatomic, retain) SKUILoadingView *loadingView;
@property (nonatomic, retain) SKUIColorScheme *spinnerColorScheme;

- (void).cxx_destruct;
- (void)_initializeLoadingView;
- (id)backgroundColor;
- (id)clientContext;
- (id)initWithClientContext:(id)arg1;
- (id)loadingText;
- (id)loadingView;
- (void)setBackgroundColor:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setSpinnerColorScheme:(id)arg1;
- (id)spinnerColorScheme;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
