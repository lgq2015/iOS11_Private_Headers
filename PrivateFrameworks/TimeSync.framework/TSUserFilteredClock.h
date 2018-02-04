/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSUserFilteredClock : TSKernelClock

@property (getter=isAdaptive, nonatomic, readonly) bool adaptive;
@property (nonatomic, readonly) unsigned char filterShift;
@property (nonatomic, readonly) unsigned long long nominalDomainInterval;
@property (nonatomic, readonly) unsigned long long nominalMachInterval;

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;

- (bool)addTimestampWithMachAbsolute:(unsigned long long)arg1 andDomainTime:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned char)filterShift;
- (bool)isAdaptive;
- (unsigned long long)nominalDomainInterval;
- (unsigned long long)nominalMachInterval;
- (bool)resetFilterToNominal:(bool)arg1 error:(id*)arg2;
- (bool)resetSyncServiceWithError:(id*)arg1;

@end
