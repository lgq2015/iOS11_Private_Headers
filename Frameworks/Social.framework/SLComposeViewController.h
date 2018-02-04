/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLComposeViewController : UIViewController <SLRemoteComposeViewControllerDelegateProtocol> {
    id /* block */  _completionHandler;
    bool  _didCompleteSheet;
    bool  _didFailLoadingRemoteViewController;
    NSExtension * _extension;
    NSArray * _extensionItems;
    bool  _hasInstantiatedExtensionUI;
    NSString * _initialText;
    NSArray * _itemProviders;
    NSLayoutConstraint * _keyboardTopConstraint;
    UIView * _keyboardTrackingView;
    long long  _maximumImageCount;
    long long  _maximumURLCount;
    long long  _maximumVideoCount;
    long long  _numImagesAdded;
    long long  _numURLsAdded;
    long long  _numVideosAdded;
    UIViewController * _remoteViewController;
    long long  _savedStatusBarStyle;
    NSString * _serviceType;
    bool  _wasPresented;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (retain) UIViewController *remoteViewController;
@property (nonatomic, readonly) NSString *serviceType;

+ (id)_extensionIdentifierForServiceType:(id)arg1;
+ (bool)_isAvailableForMediaShareExtension:(id)arg1;
+ (bool)_isAvailableForServiceType:(id)arg1 inHostApplicationBundleID:(id)arg2;
+ (bool)_isMultiUserDevice;
+ (bool)_isServiceType:(id)arg1;
+ (bool)_legacyBuiltInAvailabilityForService:(id)arg1 inHostApplicationBundleID:(id)arg2;
+ (id)_serviceTypeForExtensionIdentifier:(id)arg1;
+ (id)_serviceTypeToExtensionIdentifierMap;
+ (id)_shareExtensionWithIdentifier:(id)arg1;
+ (id)_unsupportedServiceTypes;
+ (id)composeViewControllerForExtension:(id)arg1;
+ (id)composeViewControllerForExtensionIdentifier:(id)arg1;
+ (id)composeViewControllerForServiceType:(id)arg1;
+ (id)extensionIdentifierForActivityType:(id)arg1;
+ (bool)isAvailableForExtension:(id)arg1;
+ (bool)isAvailableForExtension:(id)arg1 inHostApplicationBundleID:(id)arg2;
+ (bool)isAvailableForExtensionIdentifier:(id)arg1;
+ (bool)isAvailableForServiceType:(id)arg1;

- (void).cxx_destruct;
- (bool)_addImageAsset:(id)arg1 preview:(id)arg2;
- (bool)_addImageJPEGData:(id)arg1 preview:(id)arg2;
- (bool)_addURL:(id)arg1 type:(long long)arg2 preview:(id)arg3;
- (bool)_addVideoAsset:(id)arg1 preview:(id)arg2;
- (bool)_addVideoData:(id)arg1 preview:(id)arg2;
- (void)_handleRemoteViewFailure;
- (id)_urlForUntypedAsset:(id)arg1;
- (bool)_useCustomDimmingView;
- (bool)addAttachment:(id)arg1;
- (id /* block */)addDownSampledImageDataByProxyWithPreviewImage:(id)arg1;
- (bool)addExtensionItem:(id)arg1;
- (bool)addImage:(id)arg1;
- (bool)addImageAsset:(id)arg1;
- (bool)addItemProvider:(id)arg1;
- (bool)addURL:(id)arg1;
- (bool)addURL:(id)arg1 withPreviewImage:(id)arg2;
- (bool)canAddContent;
- (void)completeWithResult:(long long)arg1;
- (id /* block */)completionHandler;
- (void)dealloc;
- (void)didLoadSheetViewController;
- (id)initWithExtension:(id)arg1 requestedServiceType:(id)arg2;
- (id)initWithExtensionIdentifier:(id)arg1;
- (id)initWithServiceType:(id)arg1;
- (void)remoteController:(id)arg1 didLoadWithError:(id)arg2;
- (id)remoteViewController;
- (void)remoteViewController:(id)arg1 didTerminateWithError:(id)arg2;
- (void)remoteViewControllerLoadDidTimeout;
- (bool)removeAllImages;
- (bool)removeAllURLs;
- (id)serviceType;
- (void)setCompletionHandler:(id /* block */)arg1;
- (bool)setInitialText:(id)arg1;
- (void)setLongitude:(double)arg1 latitude:(double)arg2 name:(id)arg3;
- (void)setRemoteViewController:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (bool)supportsImageAsset:(id)arg1;
- (bool)supportsVideoAsset:(id)arg1;
- (void)userDidCancel;
- (void)userDidPost;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidUnload;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
