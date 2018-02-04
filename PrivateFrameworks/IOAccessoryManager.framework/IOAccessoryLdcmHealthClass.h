/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IOAccessoryManager.framework/IOAccessoryManager
 */

@interface IOAccessoryLdcmHealthClass : NSObject {
    unsigned long long  _dryCount;
    bool  _isHealthy;
    unsigned long long  _lastSeenTimestamp;
    unsigned long long  _leakagePassedCount;
    unsigned long long  _outOfProfileCount;
    unsigned long long  _overVoltageCount;
    unsigned long long  _overVoltageTimestamp;
    unsigned long long  _rsvd0;
    unsigned long long  _rsvd1;
    unsigned long long  _rsvd2;
    unsigned long long  _rsvd3;
    unsigned int  _version;
    unsigned long long  _wetCount;
}

@property unsigned long long dryCount;
@property bool isHealthy;
@property unsigned long long lastSeenTimestamp;
@property unsigned long long leakagePassedCount;
@property unsigned long long outOfProfileCount;
@property unsigned long long overVoltageCount;
@property unsigned long long overVoltageTimestamp;
@property unsigned long long rsvd0;
@property unsigned long long rsvd1;
@property unsigned long long rsvd2;
@property unsigned long long rsvd3;
@property unsigned int version;
@property unsigned long long wetCount;

- (unsigned long long)dryCount;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isHealthy;
- (unsigned long long)lastSeenTimestamp;
- (unsigned long long)leakagePassedCount;
- (unsigned long long)outOfProfileCount;
- (unsigned long long)overVoltageCount;
- (unsigned long long)overVoltageTimestamp;
- (unsigned long long)rsvd0;
- (unsigned long long)rsvd1;
- (unsigned long long)rsvd2;
- (unsigned long long)rsvd3;
- (void)setDryCount:(unsigned long long)arg1;
- (void)setIsHealthy:(bool)arg1;
- (void)setLastSeenTimestamp:(unsigned long long)arg1;
- (void)setLeakagePassedCount:(unsigned long long)arg1;
- (void)setOutOfProfileCount:(unsigned long long)arg1;
- (void)setOverVoltageCount:(unsigned long long)arg1;
- (void)setOverVoltageTimestamp:(unsigned long long)arg1;
- (void)setRsvd0:(unsigned long long)arg1;
- (void)setRsvd1:(unsigned long long)arg1;
- (void)setRsvd2:(unsigned long long)arg1;
- (void)setRsvd3:(unsigned long long)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setWetCount:(unsigned long long)arg1;
- (unsigned int)version;
- (unsigned long long)wetCount;

@end
