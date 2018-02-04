/* made by EzioChiu.
 */

@protocol SXDataTableViewDataSource <NSObject>

@required

- (UIView *)dataTableView:(SXDataTableView *)arg1 viewForCellAtIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg2 constraintToSize:(struct CGSize { double x1; double x2; })arg3;

@optional

- (SXDataTableDrawView *)dataTableView:(SXDataTableView *)arg1 drawViewForColumnAtIndex:(unsigned long long)arg2;
- (SXDataTableDrawView *)dataTableView:(SXDataTableView *)arg1 drawViewForRowAtIndex:(unsigned long long)arg2;

@end
