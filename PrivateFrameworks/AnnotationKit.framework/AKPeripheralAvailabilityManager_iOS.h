/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKPeripheralAvailabilityManager_iOS : NSObject {
    unsigned long long  _currentAvailability;
    struct __IOHIDManager { } * stylusHidManager;
}

@property unsigned long long currentAvailability;

- (unsigned long long)currentAvailability;
- (void)dealloc;
- (id)init;
- (void)postConnectionStatusNotification;
- (void)setCurrentAvailability:(unsigned long long)arg1;
- (void)startMonitoringForPeripheralConnection;
- (void)stopMonitoringForPeripheralConnection;
- (void)teardown;

@end
