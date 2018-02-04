/* made by EzioChiu.
 */

@protocol NFCReaderSession <NSObject>

@required

- (NSString *)alertMessage;
- (void)beginSession;
- (void)invalidateSession;
- (bool)isReady;
- (void)setAlertMessage:(NSString *)arg1;

@end