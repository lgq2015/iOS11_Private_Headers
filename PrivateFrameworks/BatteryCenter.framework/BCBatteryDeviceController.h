/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BatteryCenter.framework/BatteryCenter
 */

@interface BCBatteryDeviceController : NSObject {
    struct __CFRunLoopSource { } * _accessoriesChangedRunLoopSource;
    struct __CFRunLoopSource { } * _accessoriesLimitedPowerRunLoopSource;
    bool  _batterySaverModeActive;
    bool  _chargeChangeHandlingDisabled;
    NSMutableDictionary * _devicesByIdentifier;
    NSMapTable * _handlersByIdentifier;
    struct __CFRunLoopSource { } * _powerSourcesChangedRunLoopSource;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _sortedDevices;
}

@property (nonatomic, readonly) NSArray *connectedDevices;
@property (nonatomic, readonly) NSString *connectedDevicesDidChangeNotificationName;

+ (id)_glyphForBatteryDevice:(id)arg1;
+ (id)_glyphForBatteryDeviceWithTransport:(long long)arg1 accessoryCategory:(unsigned long long)arg2 vendor:(long long)arg3 productIdentifier:(long long)arg4 parts:(unsigned long long)arg5;
+ (id)_internalBatteryDeviceGlyph;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (unsigned long long)_accessoryCategoryFromPowerSourceAccessoryCategory:(id)arg1 partType:(unsigned long long)arg2 transportType:(long long)arg3 vendor:(long long)arg4 productIdentifier:(long long)arg5;
- (id)_deviceByCoalescingDevice:(id)arg1;
- (int)_displayChargePercentForCurrentCapacity:(id)arg1 andMaxCapacity:(id)arg2 updateZeroValue:(bool)arg3;
- (void)_handleBatterySaverModeChanged:(int)arg1;
- (void)_handlePSChange;
- (void)_incrementNumberOfConnectedDevices:(bool)arg1;
- (void)_incrementPercentChargeForConnectedDevices:(bool)arg1;
- (bool)_isDevicePartOfPair:(id)arg1;
- (struct CGSize { double x1; double x2; })_largestBatteryDeviceGlyphSize;
- (long long)_lowBatteryLevelForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 transportType:(long long)arg3;
- (id)_nameForVendor:(long long)arg1 accessoryCategory:(unsigned long long)arg2 name:(id)arg3 partName:(id)arg4;
- (unsigned long long)_partFromPowerSourcePartIdentifier:(id)arg1;
- (void)_postDidChangeNotification;
- (long long)_powerSourceStateFromPowerSourceStateString:(id)arg1;
- (void)_queue_addDeviceChangeHandler:(id /* block */)arg1 withIdentifier:(id)arg2;
- (id)_queue_batteryDeviceWithIdentifier:(id)arg1;
- (void)_queue_callHandlersForDevice:(id)arg1;
- (id)_queue_connectedDevices;
- (void)_queue_handleBatterySaverModeChanged:(int)arg1;
- (void)_queue_handlePSChange;
- (void)_queue_invalidateConnectedDevices;
- (void)_queue_performUpdateWithPowerSourcesBlob:(void*)arg1 andPowerSourcesList:(struct __CFArray { }*)arg2;
- (void)_queue_removeBatteryDevicesWithIdentifiers:(id)arg1;
- (void)_queue_removeDeviceChangeHandlerWithIdentifier:(id)arg1;
- (void)_queue_setBatteryDevice:(id)arg1 forIdentifier:(id)arg2;
- (void)_reenableChargeChangeHandling;
- (bool)_shouldCoalesceDevices:(id)arg1 minimumPercentCharge:(long long*)arg2;
- (bool)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg1;
- (long long)_transportTypeFromPowerSourceTransportTypeString:(id)arg1;
- (long long)_vendorFromPowerSourceDescriptionVendorIdentifier:(id)arg1 transportType:(long long)arg2;
- (void)addDeviceChangeHandler:(id /* block */)arg1 withIdentifier:(id)arg2;
- (id)connectedDevices;
- (id)connectedDevicesDidChangeNotificationName;
- (void)connectedDevicesWithResult:(id /* block */)arg1;
- (void)dealloc;
- (id)init;
- (void)removeDeviceChangeHandlerWithIdentifier:(id)arg1;

@end
