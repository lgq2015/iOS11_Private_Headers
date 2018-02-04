/* made by EzioChiu.
 */

@protocol PDCloudStoreManagerDelegate <NSObject>

@required

- (void)cloudStoreManager:(PDCloudStoreManager *)arg1 createdZoneWithName:(NSString *)arg2;
- (void)cloudStoreManager:(PDCloudStoreManager *)arg1 didChangeContainerState:(unsigned long long)arg2;
- (void)cloudStoreManagerShouldUnscheduleAllBackgroundActivities:(PDCloudStoreManager *)arg1;

@end