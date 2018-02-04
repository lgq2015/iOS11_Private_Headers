/* made by EzioChiu.
 */

@protocol GKSegmentedSectionDataSourceEventHandler

@required

- (void)segmentedSectionDataSource:(GKSegmentedSectionDataSource *)arg1 inSection:(unsigned long long)arg2 didSelectDataSourceWithIndex:(long long)arg3;

@optional

- (void)segmentedSectionDataSource:(GKSegmentedSectionDataSource *)arg1 segmentedHeaderDidLoad:(GKSegmentedSectionHeaderView *)arg2;

@end
