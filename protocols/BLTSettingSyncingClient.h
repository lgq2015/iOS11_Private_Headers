/* made by EzioChiu.
 */

@protocol BLTSettingSyncingClient <BLTSettingSyncing>

@required

- (void)enableNotifications:(bool)arg1 sectionID:(NSString *)arg2 mirror:(bool)arg3 fromRemote:(bool)arg4;

@end
