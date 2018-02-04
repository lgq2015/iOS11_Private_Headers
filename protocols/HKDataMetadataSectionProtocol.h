/* made by EzioChiu.
 */

@protocol HKDataMetadataSectionProtocol

@required

- (UITableViewCell *)cellForIndex:(unsigned long long)arg1 tableView:(UITableView *)arg2;
- (unsigned long long)numberOfRowsInSection;
- (NSString *)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(UINavigationController *)arg2 animated:(bool)arg3;

@end
