/* made by EzioChiu.
 */

@protocol CKIMSimulatedDaemonListener

@required

- (void)simulatedDaemon:(CKIMDaemonController *)arg1 willSendBalloonPayload:(NSData *)arg2 attachments:(NSArray *)arg3 messageGUID:(NSString *)arg4 bundleID:(NSString *)arg5;

@end
