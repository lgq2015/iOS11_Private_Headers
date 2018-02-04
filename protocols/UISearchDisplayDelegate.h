/* made by EzioChiu.
 */

@protocol UISearchDisplayDelegate <NSObject>

@optional

- (void)searchDisplayController:(UISearchDisplayController *)arg1 didHideSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 didLoadSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 didShowSearchResultsTableView:(UITableView *)arg2;
- (bool)searchDisplayController:(UISearchDisplayController *)arg1 shouldReloadTableForSearchScope:(long long)arg2;
- (bool)searchDisplayController:(UISearchDisplayController *)arg1 shouldReloadTableForSearchString:(NSString *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 willHideSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 willShowSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayController:(UISearchDisplayController *)arg1 willUnloadSearchResultsTableView:(UITableView *)arg2;
- (void)searchDisplayControllerDidBeginSearch:(UISearchDisplayController *)arg1;
- (void)searchDisplayControllerDidEndSearch:(UISearchDisplayController *)arg1;
- (void)searchDisplayControllerWillBeginSearch:(UISearchDisplayController *)arg1;
- (void)searchDisplayControllerWillEndSearch:(UISearchDisplayController *)arg1;

@end
