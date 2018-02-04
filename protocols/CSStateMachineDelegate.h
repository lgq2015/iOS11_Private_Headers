/* made by EzioChiu.
 */

@protocol CSStateMachineDelegate <NSObject>

@required

- (void)didIgnoreEvent:(long long)arg1 from:(long long)arg2;
- (void)didTransitFrom:(long long)arg1 to:(long long)arg2 by:(long long)arg3;

@end
