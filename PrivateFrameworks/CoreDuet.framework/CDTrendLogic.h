/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface CDTrendLogic : NSObject {
    unsigned long long  _cDelta;
    unsigned long long  _cEpsilon;
    unsigned long long  _cHighThreshold;
    unsigned long long  _cLowThreshold;
    unsigned long long  _cMax;
    unsigned long long  _cMin;
    unsigned long long  _iecAvgMult;
    unsigned long long  _iecDecayMult;
    unsigned long long  _iecDiv;
    unsigned long long  _iecMaxSeconds;
    unsigned long long  _iecMinMult;
    unsigned long long  _iecMinSeconds;
    unsigned long long  _slotCount;
    unsigned long long  _timerLeewaySeconds;
    unsigned long long  _timerMinSeconds;
}

@property unsigned long long cDelta;
@property unsigned long long cEpsilon;
@property unsigned long long cHighThreshold;
@property unsigned long long cLowThreshold;
@property unsigned long long cMax;
@property unsigned long long cMin;
@property unsigned long long iecAvgMult;
@property unsigned long long iecDecayMult;
@property unsigned long long iecDiv;
@property unsigned long long iecMaxSeconds;
@property unsigned long long iecMinMult;
@property unsigned long long iecMinSeconds;
@property unsigned long long slotCount;
@property unsigned long long timerLeewaySeconds;
@property unsigned long long timerMinSeconds;

- (unsigned long long)cDelta;
- (unsigned long long)cEpsilon;
- (unsigned long long)cHighThreshold;
- (unsigned long long)cLowThreshold;
- (unsigned long long)cMax;
- (unsigned long long)cMin;
- (unsigned long long)iecAvgMult;
- (unsigned long long)iecDecayMult;
- (unsigned long long)iecDiv;
- (unsigned long long)iecMaxSeconds;
- (unsigned long long)iecMinMult;
- (unsigned long long)iecMinSeconds;
- (id)initWithSlotCount:(unsigned long long)arg1 cDelta:(unsigned long long)arg2 cLowThreshold:(unsigned long long)arg3 cHighThreshold:(unsigned long long)arg4 cMin:(unsigned long long)arg5 cMax:(unsigned long long)arg6 cEpsilon:(unsigned long long)arg7 iecMinSeconds:(unsigned long long)arg8 iecMaxSeconds:(unsigned long long)arg9 iecDecayMult:(unsigned long long)arg10 iecMinMult:(unsigned long long)arg11 iecAvgMult:(unsigned long long)arg12 iecDiv:(unsigned long long)arg13 timerMinSeconds:(unsigned long long)arg14 timerLeewaySeconds:(unsigned long long)arg15 error:(id*)arg16;
- (id)initWithTrendLogicBand:(long long)arg1 error:(id*)arg2;
- (void)setCDelta:(unsigned long long)arg1;
- (void)setCEpsilon:(unsigned long long)arg1;
- (void)setCHighThreshold:(unsigned long long)arg1;
- (void)setCLowThreshold:(unsigned long long)arg1;
- (void)setCMax:(unsigned long long)arg1;
- (void)setCMin:(unsigned long long)arg1;
- (void)setIecAvgMult:(unsigned long long)arg1;
- (void)setIecDecayMult:(unsigned long long)arg1;
- (void)setIecDiv:(unsigned long long)arg1;
- (void)setIecMaxSeconds:(unsigned long long)arg1;
- (void)setIecMinMult:(unsigned long long)arg1;
- (void)setIecMinSeconds:(unsigned long long)arg1;
- (void)setSlotCount:(unsigned long long)arg1;
- (void)setTimerLeewaySeconds:(unsigned long long)arg1;
- (void)setTimerMinSeconds:(unsigned long long)arg1;
- (unsigned long long)slotCount;
- (unsigned long long)timerLeewaySeconds;
- (unsigned long long)timerMinSeconds;

@end
