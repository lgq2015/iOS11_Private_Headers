/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLExtensionManager : NSObject {
    QLExtensionManagerCache * _previewExtensionCache;
    QLExtensionManagerCache * _thumbnailExtensionCache;
}

@property (nonatomic, retain) QLExtensionManagerCache *previewExtensionCache;
@property (nonatomic, retain) QLExtensionManagerCache *thumbnailExtensionCache;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_addQueryAttributesToExtensionQuery:(id)arg1 withContentType:(id)arg2 appBundleIdentifier:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)_cacheForExtensionType:(unsigned long long)arg1;
- (id)_extensionPointNameForExtensionType:(unsigned long long)arg1;
- (void)_setupCache;
- (bool)existsExtensionForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generationType:(unsigned long long)arg4;
- (void)extensionContextForContentType:(id)arg1 appBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5 withCompletionHandler:(id /* block */)arg6;
- (id)extensionForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionPath:(id)arg3 extensionType:(unsigned long long)arg4 generationType:(unsigned long long)arg5;
- (id)previewExtensionCache;
- (void)remoteViewControllerForContentType:(id)arg1 applicationBundleIdentifier:(id)arg2 extensionType:(unsigned long long)arg3 generatonType:(unsigned long long)arg4 withCompletionHandler:(id /* block */)arg5;
- (void)setPreviewExtensionCache:(id)arg1;
- (void)setThumbnailExtensionCache:(id)arg1;
- (id)thumbnailExtensionCache;

@end
