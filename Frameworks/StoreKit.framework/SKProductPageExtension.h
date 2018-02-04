/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKProductPageExtension : UIViewController <SKProductPageExtensionServiceInterface> {
    bool  _askToBuy;
    NSString * _cancelButtonTitle;
    NSString * _promptString;
    NSString * _rightBarButtonTitle;
    bool  _showsRightBarButton;
    bool  _showsStoreButton;
}

@property (nonatomic) bool askToBuy;
@property (nonatomic, copy) NSString *cancelButtonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *promptString;
@property (nonatomic, copy) NSString *rightBarButtonTitle;
@property (nonatomic) bool showsRightBarButton;
@property (nonatomic) bool showsStoreButton;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;
+ (id)clientInterface;
+ (id)serviceInterface;

- (void).cxx_destruct;
- (id)_createNavigationItem;
- (bool)askToBuy;
- (void)cancelButtonPressed:(id)arg1;
- (id)cancelButtonTitle;
- (void)finishWithResult:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)loadDidFinish;
- (void)lookupItemDidLoad:(id)arg1 parameters:(id)arg2;
- (bool)productPageItemDidLoad:(id)arg1 parameters:(id)arg2;
- (id)promptString;
- (void)rightBarButtonPressed:(id)arg1;
- (id)rightBarButtonTitle;
- (void)setAskToBuy:(bool)arg1;
- (void)setCancelButtonTitle:(id)arg1;
- (void)setPromptString:(id)arg1;
- (void)setRightBarButtonTitle:(id)arg1;
- (void)setShowsRightBarButton:(bool)arg1;
- (void)setShowsStoreButton:(bool)arg1;
- (void)setupWithClientBundleID:(id)arg1 bagType:(long long)arg2;
- (void)setupWithCustomNavigationItem:(id)arg1 promptString:(id)arg2 askToBuy:(bool)arg3;
- (bool)showsRightBarButton;
- (bool)showsStoreButton;
- (void)storeButtonPressed:(id)arg1;

@end
