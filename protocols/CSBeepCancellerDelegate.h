/* made by EzioChiu.
 */

@protocol CSBeepCancellerDelegate <NSObject>

@required

- (void)beepCancellerDidCancelSamples:(CSBeepCanceller *)arg1 buffer:(NSData *)arg2 timestamp:(unsigned long long)arg3;

@end