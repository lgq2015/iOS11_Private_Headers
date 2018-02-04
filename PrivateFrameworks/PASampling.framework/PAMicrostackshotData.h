/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
 */

@interface PAMicrostackshotData : NSObject {
    unsigned int  _cpuNumber;
    unsigned char  _microSnapshotFlags;
    unsigned short  _systemStatsFlags;
    unsigned long long  _timeInUsUnix;
}

@property (readonly) unsigned int cpuNumber;
@property (readonly) bool didInterruptKernelMode;
@property (readonly) bool didInterruptUserMode;
@property (readonly) bool hasValidOnBatteryAndUserIdleFlags;
@property (readonly) bool isInterruptRecord;
@property (readonly) bool isOnBattery;
@property (readonly) bool isTimerArmingRecord;
@property (readonly) bool isUserIdle;
@property (readonly) unsigned char microSnapshotFlags;
@property (readonly) unsigned short systemStatsFlags;
@property (readonly) unsigned long long timestampInUsUnix;

- (unsigned long long)bytesUsedInBuffer;
- (unsigned int)cpuNumber;
- (bool)didInterruptKernelMode;
- (bool)didInterruptUserMode;
- (bool)hasValidOnBatteryAndUserIdleFlags;
- (id)initWithMicrosnapshot:(const struct micro_snapshot { unsigned int x1; unsigned int x2; unsigned long long x3; unsigned long long x4; unsigned char x5; unsigned short x6; }*)arg1 withRemainingBytes:(unsigned long long)arg2;
- (bool)isInterruptRecord;
- (bool)isOnBattery;
- (bool)isTimerArmingRecord;
- (bool)isUserIdle;
- (unsigned char)microSnapshotFlags;
- (unsigned int)powerstatsFlags;
- (unsigned short)systemStatsFlags;
- (unsigned long long)timestampInUsUnix;

@end
