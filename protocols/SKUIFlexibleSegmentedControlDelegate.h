/* made by EzioChiu.
 */

@protocol SKUIFlexibleSegmentedControlDelegate <NSObject>

@optional

- (void)segmentedControl:(SKUIFlexibleSegmentedControl *)arg1 didSelectSegmentIndex:(long long)arg2;
- (void)segmentedControl:(SKUIFlexibleSegmentedControl *)arg1 showMoreListWithTitles:(NSArray *)arg2;

@end
