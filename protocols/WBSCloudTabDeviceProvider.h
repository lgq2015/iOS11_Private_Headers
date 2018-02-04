/* made by EzioChiu.
 */

@protocol WBSCloudTabDeviceProvider <NSObject>

@required

- (NSDate *)dateOfLastCloudTabDevicesUpdate;
- (NSArray *)syncedCloudTabDevices;
- (void)synchronizeCloudTabDevicesWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
