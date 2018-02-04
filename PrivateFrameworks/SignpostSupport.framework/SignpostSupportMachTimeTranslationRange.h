/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
 */

@interface SignpostSupportMachTimeTranslationRange : NSObject {
    unsigned long long  _endMachAbsoluteTime;
    unsigned long long  _endMachContinuousTime;
    unsigned long long  _startMachAbsoluteTime;
    unsigned long long  _startMachContinuousTime;
}

@property (nonatomic, readonly) long long absoluteMinusContinuousDelta;
@property (nonatomic, readonly) long long continuousMinusAbsoluteDelta;
@property (nonatomic, readonly) unsigned long long endMachAbsoluteTime;
@property (nonatomic, readonly) unsigned long long endMachContinuousTime;
@property (nonatomic, readonly) unsigned long long machContinuousTimeDuration;
@property (nonatomic, readonly) unsigned long long startMachAbsoluteTime;
@property (nonatomic, readonly) unsigned long long startMachContinuousTime;

- (long long)absoluteMinusContinuousDelta;
- (bool)containsMachAbsoluteTime:(unsigned long long)arg1;
- (bool)containsMachContinuousTime:(unsigned long long)arg1;
- (long long)continuousMinusAbsoluteDelta;
- (id)debugDescription;
- (unsigned long long)endMachAbsoluteTime;
- (unsigned long long)endMachContinuousTime;
- (id)initWithArrayRepresentation:(id)arg1;
- (id)initWithStartMachAbsoluteTime:(unsigned long long)arg1 startContinuousTime:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)machAbsoluteTimeForMachContinuousTime:(unsigned long long)arg1;
- (unsigned long long)machContinuousTimeDuration;
- (unsigned long long)machContinuousTimeForMachAbsoluteTime:(unsigned long long)arg1;
- (id)serializableArrayRepresentation;
- (bool)setEndMachAbsoluteTimestamp:(unsigned long long)arg1 endMachContinuousTime:(unsigned long long)arg2;
- (unsigned long long)startMachAbsoluteTime;
- (unsigned long long)startMachContinuousTime;

@end
