/* made by EzioChiu.
 */

@protocol HMDCameraSnapshotIDSStreamInitiatorDelegate <NSObject>

@required

- (void)streamInitiator:(HMDCameraSnapshotIDSStreamInitiator *)arg1 didFailToSendFile:(NSError *)arg2;

@end
