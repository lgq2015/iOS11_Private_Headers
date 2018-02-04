/* made by EzioChiu.
 */

@protocol AAUIContactsSearchDelegate <NSObject>

@required

- (void)contactsSearchController:(FAContactsSearchController *)arg1 didFindSortedResult:(NSArray *)arg2;
- (void)contactsSearchController:(FAContactsSearchController *)arg1 didFinishSearchWithSuccess:(bool)arg2;

@end
