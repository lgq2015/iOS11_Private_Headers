/* made by EzioChiu.
 */

@protocol SiriUICardSnippetViewDataSource <NSObject>

@required

- (NSLocale *)localeForCardSnippetView:(SiriUICardSnippetView *)arg1;
- (SiriUISashItem *)sashItemForCardSnippetView:(SiriUICardSnippetView *)arg1;

@end
