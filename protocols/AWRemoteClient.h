/* made by EzioChiu.
 */

@protocol AWRemoteClient

@required

- (void)getLastEvent:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AWAttentionEvent *, void*
- (void)invalidate;
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)pollWithTimeout:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)resetAttentionLostTimer;
- (void)setClientConfig:(AWAttentionAwarenessConfiguration *)arg1 shouldReset:(bool)arg2;
- (void)useUnitTestSampling:(bool)arg1;

@end
