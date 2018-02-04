/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLItemProviderFetcher : QLItemFetcher <QLPreviewItemURLProvider, QLPreviewItemURLProviderDownloadTracker> {
    id /* block */  _completionBlock;
    NSString * _contentType;
    long long  _fileExtensionHandle;
    NSNumber * _fileSize;
    NSItemProvider * _itemProvider;
    id  _lastContent;
    id /* block */  _updateBlock;
    <QLPreviewItemURLProvider> * _urlProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSItemProvider *itemProvider;
@property (nonatomic, retain) id lastContent;
@property (readonly) Class superclass;
@property (retain) <QLPreviewItemURLProvider> *urlProvider;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateCompletionBlockWithAllowedOutputClasses:(id)arg1 URL:(id)arg2;
- (bool)canBeCanceled;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4;
- (id)fetchedContent;
- (void)getURLWithDownloadTracker:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentType:(id)arg1 fileSize:(id)arg2;
- (bool)isLongFetchOperation;
- (id)itemProvider;
- (id)itemSize;
- (id)lastContent;
- (id)newItemProvider;
- (void)setItemProvider:(id)arg1;
- (void)setLastContent:(id)arg1;
- (void)setUrlProvider:(id)arg1;
- (id)shareableItem;
- (void)updatedURLWithProgress:(double)arg1;
- (id)urlProvider;

@end
