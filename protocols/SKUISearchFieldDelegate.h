/* made by EzioChiu.
 */

@protocol SKUISearchFieldDelegate <NSObject>

@optional

- (void)searchFieldController:(SKUISearchFieldController *)arg1 requestSearch:(SKUISearchRequest *)arg2;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 requestSearchWithSearchTerm:(NSString *)arg2 metricsEvent:(SSMetricsSearchEvent *)arg3;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 requestSearchWithURL:(NSURL *)arg2 metricsEvent:(SSMetricsSearchEvent *)arg3;
- (void)searchFieldController:(SKUISearchFieldController *)arg1 searchBarDidChangeText:(NSString *)arg2;
- (bool)searchFieldControllerShouldBeginEditing:(SKUISearchFieldController *)arg1;

@end
