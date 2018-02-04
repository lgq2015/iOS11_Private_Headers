/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKAppCache : NSObject <IKAppContextInternalDelegate> {
    <IKApplication> * _app;
    NSObject<OS_dispatch_queue> * _appCacheQueue;
    <IKAppContextDelegate> * _appContextDelegate;
    NSString * _appJSChecksum;
    NSURL * _appJSURL;
    NSURL * _appLocalJSFileURL;
    NSString * _cacheAppJSChecksum;
    NSArray * _cacheAppJSChecksumHistory;
    NSString * _cacheAppLocalJSChecksum;
    NSURL * _cacheFileURL;
    <IKAppCacheDelegate> * _delegate;
    bool  _shouldIgnoreHTTPCache;
    unsigned long long  _status;
    id /* block */  _validationCompletionHandler;
    IKAppContext * _validationContext;
}

@property (nonatomic) <IKApplication> *app;
@property (nonatomic) <IKAppContextDelegate> *appContextDelegate;
@property (nonatomic, readonly) NSString *appJSChecksum;
@property (nonatomic, readonly) NSURL *appJSURL;
@property (nonatomic, readonly, copy) NSURL *appLocalJSFileURL;
@property (nonatomic, readonly) NSString *cacheAppJSChecksum;
@property (nonatomic, readonly) NSArray *cacheAppJSChecksumHistory;
@property (nonatomic, readonly) NSString *cacheAppLocalJSChecksum;
@property (nonatomic, readonly, copy) NSURL *cacheFileURL;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <IKAppCacheDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool shouldIgnoreHTTPCache;
@property (nonatomic, readonly) unsigned long long status;
@property (readonly) Class superclass;
@property (nonatomic, copy) id /* block */ validationCompletionHandler;
@property (nonatomic, readonly) IKAppContext *validationContext;

+ (id)_appContextDelegateSelectors;

- (void).cxx_destruct;
- (id)_cacheFileURLForAppJS:(id)arg1 checksum:(id)arg2 error:(id*)arg3;
- (void)_checkManifest;
- (void)_cleanupValidationContext;
- (void)_loadManifest;
- (void)_performAsync:(id /* block */)arg1;
- (void)_storeManifest;
- (id)_validatedChecksumForScript:(id)arg1 error:(id*)arg2;
- (id)app;
- (void)appContext:(id)arg1 didFailWithError:(id)arg2;
- (void)appContext:(id)arg1 didStartWithOptions:(id)arg2 validatedJSString:(id)arg3;
- (void)appContext:(id)arg1 didStopWithOptions:(id)arg2;
- (void)appContext:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2;
- (void)appContext:(id)arg1 needsReloadWithUrgency:(unsigned long long)arg2 options:(id)arg3;
- (bool)appContext:(id)arg1 shouldStartWithScript:(id)arg2 scriptURL:(id)arg3 loadedFromFallback:(bool)arg4;
- (bool)appContext:(id)arg1 validateDOMDocument:(id)arg2 inContext:(id)arg3 error:(id*)arg4;
- (id)appContextDelegate;
- (id)appJSChecksum;
- (id)appJSURL;
- (void)appJSURLWithCompletion:(id /* block */)arg1;
- (id)appLocalJSFileURL;
- (id)cacheAppJSChecksum;
- (id)cacheAppJSChecksumHistory;
- (id)cacheAppLocalJSChecksum;
- (id)cacheFileURL;
- (void)cleanBlobStorageWithCompletion:(id /* block */)arg1;
- (id)delegate;
- (id)deviceConfigForContext:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (bool)isOurDispatchQueue;
- (id)modalControllerForContext:(id)arg1;
- (id)navigationControllerForContext:(id)arg1;
- (id)objectForMediaItem:(id)arg1;
- (id)objectForPlayer:(id)arg1;
- (id)objectForPlaylist:(id)arg1;
- (void)refreshWithCompletion:(id /* block */)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setApp:(id)arg1;
- (void)setAppContextDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldIgnoreHTTPCache:(bool)arg1;
- (void)setValidationCompletionHandler:(id /* block */)arg1;
- (bool)shouldForceIgnoreHTTPCacheForAppContext:(id)arg1;
- (bool)shouldIgnoreHTTPCache;
- (unsigned long long)status;
- (id)tabBarForContext:(id)arg1;
- (void)updateCacheWithValidatedJS:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)validationCompletionHandler;
- (id)validationContext;

@end
