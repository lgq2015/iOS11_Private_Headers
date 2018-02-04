/* made by EzioChiu.
 */

@protocol AWFrameworkClient <NSObject>

@required

- (void)notifyEvent:(AWAttentionEvent *)arg1;
- (void)notifyPollEventType:(unsigned long long)arg1 event:(AWAttentionEvent *)arg2;
- (<AWUnitTestSampler> *)unitTestSampler;
- (void)useUnitTestSampling:(bool)arg1;

@end
