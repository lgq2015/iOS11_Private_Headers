/* made by EzioChiu.
 */

@protocol XCTUIApplicationMonitor <NSObject>

@required

- (void)applicationWithBundleID:(NSString *)arg1 didUpdatePID:(int)arg2 state:(unsigned long long)arg3;
- (void)crashInProcessWithBundleID:(NSString *)arg1 path:(NSString *)arg2 pid:(int)arg3 symbol:(NSString *)arg4;
- (void)processWithToken:(NSNumber *)arg1 exitedWithStatus:(int)arg2;
- (void)stopTrackingProcessWithToken:(NSNumber *)arg1;
- (void)updatedApplicationStateSnapshot:(XCTApplicationStateSnapshot *)arg1;

@end
