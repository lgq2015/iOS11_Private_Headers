/* made by EzioChiu.
 */

@protocol MNCommuteDestinationComparisonScore

@required

- (bool)supportsComparisonType:(unsigned long long)arg1;
- (void)updateComparisonDestination:(MNCommuteDestination *)arg1 ofType:(unsigned long long)arg2;

@end
