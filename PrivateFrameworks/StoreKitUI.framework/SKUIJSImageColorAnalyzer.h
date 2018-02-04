/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIJSImageColorAnalyzer : IKJSObject <SKUIArtworkRequestDelegate, SKUIJSImageColorAnalyzer> {
    NSMutableDictionary * _artworkRequestIDsToManagedCallbacks;
    SKUIClientContext * _clientContext;
    NSOperationQueue * _operationQueue;
    SKUIResourceLoader * _resourceLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)analyzeImageAtUrl:(id)arg1 :(id)arg2;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;

@end
