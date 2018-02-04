/* made by EzioChiu.
 */

@protocol CDPLocalDeviceSecretHandlerProtocol

@required

- (void)userDidCancelWithError:(NSError *)arg1;
- (void)userDidEnterValidSecret:(NSString *)arg1 type:(unsigned long long)arg2;

@end
