/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleDisplayAutoDetector : NSObject {
    bool  _isDetectingDisplays;
    NSMutableDictionary * _iteratorDict;
    struct IONotificationPort { } * _notificationPort;
    NSObject<OS_dispatch_source> * _serialSource;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedDetector;

- (void).cxx_destruct;
- (void)_autodetectIOServices:(id)arg1;
- (void)_detectSerialPorts:(id)arg1;
- (id)_driverBundleIdentifiers;
- (void)_initializeAutodetectSerialPorts:(id)arg1;
- (void)_openSerialPortService:(id)arg1 sortedDriverBundleIdentifiers:(id)arg2;
- (void)_registerForSerialPortNotifications;
- (bool)_serialDataMatchesDriver:(id)arg1 driverBundleIdentifiers:(id)arg2 fileDescriptor:(int)arg3;
- (id)_serialPortMatchingDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)detectDisplays;
- (id)init;
- (bool)isAutoDetectEnabled;
- (void)serialPortsWerePublished:(unsigned int)arg1;
- (void)stopDetectingDisplays;

@end
