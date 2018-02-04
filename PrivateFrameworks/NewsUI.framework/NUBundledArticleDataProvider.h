/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUBundledArticleDataProvider : NSObject <NUArticleDataProvider, SXEmbedDataSource, SXReachabilityProvider, SXResourceDataSource> {
    FCArticle * _article;
}

@property (nonatomic, retain) FCArticle *article;
@property (nonatomic, readonly, copy) NSString *articleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addReachabilityObserver:(id)arg1;
- (id)article;
- (id)articleID;
- (id)embedForType:(id)arg1;
- (id)fileURLForBundleURL:(id)arg1;
- (id)initWithArticle:(id)arg1;
- (bool)isNetworkReachable;
- (void)load;
- (void)loadContextWithCompletionBlock:(id /* block */)arg1;
- (id /* block */)loadImagesForImageRequest:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)performBlockForFontsInBundle:(id /* block */)arg1;
- (void)setArticle:(id)arg1;

@end
