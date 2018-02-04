/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUClient : NSObject {
    struct __CFArray { } * _assetTypes;
    SUClientInterface * _clientInterface;
    <SUClientDelegate> * _delegate;
    bool  _dontSaveNavigationPath;
    SUImageCache * _imageCache;
    ISURLOperationPool * _imagePool;
    NSLock * _lock;
    SUScriptExecutionContext * _scriptExecutionContext;
}

@property (readonly) SUClientInterface *clientInterface;
@property (nonatomic) <SUClientDelegate> *delegate;
@property (nonatomic) bool dontSaveNavigationPath;
@property (nonatomic, retain) SUImageCache *imageCache;
@property (nonatomic, retain) ISURLOperationPool *imagePool;
@property (nonatomic, readonly) SUScriptExecutionContext *scriptExecutionContext;
@property (nonatomic, retain) NSString *searchHintsURLBagKey;
@property (nonatomic, retain) NSString *searchURLBagKey;

+ (id)imagePool;
+ (void)setSharedClient:(id)arg1;
+ (id)sharedClient;
+ (id)viewControllerFactory;

- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_bagDidLoadNotification:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (bool)_presentModalViewController:(id)arg1 animated:(bool)arg2;
- (void)_purgeCaches;
- (void)_reloadScriptExecutionContext;
- (struct __CFArray { }*)assetTypes;
- (id)clientIdentifier;
- (id)clientInterface;
- (bool)composeReviewWithViewController:(id)arg1 animated:(bool)arg2;
- (void)dealloc;
- (id)delegate;
- (bool)dismissTopViewControllerAnimated:(bool)arg1;
- (bool)dontSaveNavigationPath;
- (bool)enterAccountFlowWithViewController:(id)arg1 animated:(bool)arg2;
- (id)imageCache;
- (id)imagePool;
- (id)init;
- (id)initWithClientInterface:(id)arg1;
- (bool)openExternalURL:(id)arg1;
- (bool)openInternalURL:(id)arg1;
- (bool)openURL:(id)arg1 inClientApplication:(id)arg2;
- (id)queueSessionManager;
- (id)scriptExecutionContext;
- (id)searchHintsURLBagKey;
- (id)searchURLBagKey;
- (bool)sendActionForDialog:(id)arg1 button:(id)arg2;
- (void)setAssetTypes:(struct __CFArray { }*)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDontSaveNavigationPath:(bool)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImagePool:(id)arg1;
- (void)setQueueSessionManager:(id)arg1;
- (void)setSearchHintsURLBagKey:(id)arg1;
- (void)setSearchURLBagKey:(id)arg1;
- (void)setViewControllerFactory:(id)arg1;
- (id)viewControllerFactory;

@end
