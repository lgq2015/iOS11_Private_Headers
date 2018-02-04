/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
 */

@interface TSKernelClock : TSClock {
    unsigned int  _connection;
    unsigned int  _interestNotification;
    struct IONotificationPort { } * _notificationPort;
    unsigned int  _service;
    bool  _serviceIsAlive;
}

@property (nonatomic, readonly) unsigned int connection;
@property (nonatomic, readonly) unsigned int service;
@property (nonatomic, readonly) bool serviceIsAlive;

+ (id)availableKernelClockIdentifiers;
+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;

- (void)_handleInterestNotification:(unsigned int)arg1 withArgument:(void*)arg2;
- (void)_handleNotification:(unsigned int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3;
- (id)clockName;
- (unsigned int)connection;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)arg1;
- (bool)convertFromDomainTime:(unsigned long long*)arg1 toMachAbsoluteTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)arg1 withFlags:(unsigned int*)arg2;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)arg1;
- (bool)convertFromMachAbsoluteTime:(unsigned long long*)arg1 toDomainTime:(unsigned long long*)arg2 withCount:(unsigned int)arg3;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)arg1 withFlags:(unsigned int*)arg2;
- (void)dealloc;
- (bool)deregisterAsyncDCLCallback;
- (bool)getRateRatioNumerator:(unsigned long long*)arg1 denominator:(unsigned long long*)arg2 machAnchor:(unsigned long long*)arg3 andDomainAnchor:(unsigned long long*)arg4 withError:(id*)arg5;
- (double)hostRateRatio;
- (id)initWithClockIdentifier:(unsigned long long)arg1;
- (int)lockState;
- (bool)registerAsyncCallback;
- (unsigned int)service;
- (bool)serviceIsAlive;
- (void)setServiceIsAlive:(bool)arg1;

@end
