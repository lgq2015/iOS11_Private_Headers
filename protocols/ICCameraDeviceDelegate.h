/* made by EzioChiu.
 */

@protocol ICCameraDeviceDelegate <ICDeviceDelegate>

@optional

- (void)cameraDevice:(ICCameraDevice *)arg1 didAddItems:(NSArray *)arg2;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveMetadata:(NSDictionary *)arg2 forItem:(ICCameraItem *)arg3 error:(NSError *)arg4;
- (void)cameraDevice:(ICCameraDevice *)arg1 didReceiveThumbnail:(struct CGImage { }*)arg2 forItem:(ICCameraItem *)arg3 error:(NSError *)arg4;
- (void)cameraDevice:(ICCameraDevice *)arg1 didRemoveItems:(NSArray *)arg2;

@end
