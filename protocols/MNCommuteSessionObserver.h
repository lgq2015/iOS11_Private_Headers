/* made by EzioChiu.
 */

@protocol MNCommuteSessionObserver <NSObject>

@required

- (void)commuteSession:(MNCommuteSession *)arg1 didUpdateDestinations:(NSArray *)arg2;

@optional

- (void)commuteSession:(MNCommuteSession *)arg1 didChangeToState:(unsigned long long)arg2;
- (void)commuteSessionDidArrive:(MNCommuteSession *)arg1;

@end
