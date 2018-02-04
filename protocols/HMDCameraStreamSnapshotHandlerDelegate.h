/* made by EzioChiu.
 */

@protocol HMDCameraStreamSnapshotHandlerDelegate <NSObject>

@required

- (void)streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg1 didGetLastSnapshot:(HMDCameraSnapshotData *)arg2;
- (void)streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg1 didGetNewSnapshot:(HMDCameraSnapshotData *)arg2;

@optional

- (void)streamSnapshotHandler:(HMDCameraStreamSnapshotHandler *)arg1 didChangeStreamSetupInProgress:(bool)arg2;

@end
