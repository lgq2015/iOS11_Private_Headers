/* made by EzioChiu.
 */

@protocol NUEndOfArticleDataProviderDelegate <NSObject>

@optional

- (void)endOfArticleDataProvider:(id <NUEndOfArticleDataProvider>)arg1 failedToLoadContentWithError:(NSError *)arg2;
- (void)endOfArticleDataProviderDidChangeContent:(id <NUEndOfArticleDataProvider>)arg1;
- (void)endOfArticleDataProviderDidLoadContent:(id <NUEndOfArticleDataProvider>)arg1;
- (void)endOfArticleDataProviderWillChangeContent:(id <NUEndOfArticleDataProvider>)arg1;
- (void)endOfArticleDataProviderWillLoadContent:(id <NUEndOfArticleDataProvider>)arg1;
- (void)endOfArticleDataProviderWillSupressContent:(id <NUEndOfArticleDataProvider>)arg1;

@end
