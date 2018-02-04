/* made by EzioChiu.
 */

@protocol NUEndOfArticleDataProvider <NSObject>

@required

- (NSArray *)controllers;
- (<NUEndOfArticleDataProviderDelegate> *)delegate;
- (void)loadWithSettings:(NUEndOfArticleSettings *)arg1;
- (void)setDelegate:(id <NUEndOfArticleDataProviderDelegate>)arg1;

@end
