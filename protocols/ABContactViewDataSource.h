/* made by EzioChiu.
 */

@protocol ABContactViewDataSource <NSObject, UITableViewDataSource>

@optional

- (UITableViewCell *)contactView:(CNContactView *)arg1 cellForItemAtIndex:(long long)arg2 inGroup:(CNCardGroup *)arg3;
- (long long)contactView:(CNContactView *)arg1 numberOfItemsInGroup:(CNCardGroup *)arg2;

@end
