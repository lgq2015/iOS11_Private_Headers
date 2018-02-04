/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
 */

@interface BLEMIDIAccessor : NSObject

+ (bool)deviceIsLocalPeripheral:(unsigned int)arg1;
+ (bool)deviceIsNullDevice:(unsigned int)arg1;
+ (bool)deviceIsOnline:(unsigned int)arg1;
+ (bool)deviceIsRemotePeripheral:(unsigned int)arg1;
+ (unsigned int)localPeripheral;
+ (id)localPeripheralName;
+ (void)logEvent:(char *)arg1 length:(unsigned short)arg2 timeStamp:(unsigned long long)arg3 intoBuffer:(char *)arg4;
+ (unsigned int)midiDeviceForUUID:(id)arg1;
+ (unsigned int)midiDeviceForUUID:(id)arg1 isLocalPeripheral:(bool)arg2 isRemotePeripheral:(bool)arg3;
+ (id)nameForMIDIDevice:(unsigned int)arg1;
+ (unsigned int)nullDevice;
+ (unsigned short)reconstructWithHighByte:(unsigned char)arg1 lowByte:(unsigned char)arg2 overflow:(bool)arg3;
+ (void)splitOffset:(unsigned short)arg1 intoHeaderByte:(char *)arg2 timeStampByte:(char *)arg3;
+ (unsigned short)timeStampOffset:(unsigned long long)arg1;
+ (unsigned long long)timeStampWithEpoch:(unsigned long long)arg1 offset:(unsigned short)arg2;
+ (id)uuidForMIDIDevice:(unsigned int)arg1;
+ (bool)uuidIsForgettable:(id)arg1;

@end
