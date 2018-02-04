/* made by EzioChiu.
 */

@protocol MNCommuteDestinationObserver <NSObject>

@optional

- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeETARoute:(GEOETARoute *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeInvalid:(bool)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeLastLocation:(MNLocation *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeLastMatchedLocation:(MNLocation *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRemainingDistance:(double)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRemainingTime:(double)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeRoute:(GEOComposedRoute *)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeScore:(long long)arg2;
- (void)commuteDestination:(MNCommuteDestination *)arg1 didChangeScores:(NSDictionary *)arg2;

@end
