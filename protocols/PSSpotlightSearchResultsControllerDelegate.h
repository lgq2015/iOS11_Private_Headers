/* made by EzioChiu.
 */

@protocol PSSpotlightSearchResultsControllerDelegate

@required

- (void)searchResultsController:(PSSpotlightSearchResultsController *)arg1 didSelectURL:(NSURL *)arg2;
- (UIImage *)searchResultsController:(PSSpotlightSearchResultsController *)arg1 iconForCategory:(NSString *)arg2;
- (long long)searchResultsController:(PSSpotlightSearchResultsController *)arg1 sortCategory1:(NSString *)arg2 sortCategory2:(NSString *)arg3;

@end
