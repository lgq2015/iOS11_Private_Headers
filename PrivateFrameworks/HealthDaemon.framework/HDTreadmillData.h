/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDTreadmillData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {
    HDFitnessMachineCharacteristicDoubleField * _averagePaceField;
    HDFitnessMachineCharacteristicDoubleField * _averageSpeedField;
    HDFitnessMachineCharacteristicUInt16Field * _elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field * _energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field * _energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt16Field * _forceOnBeltField;
    HDFitnessMachineCharacteristicUInt8Field * _heartRateField;
    HDFitnessMachineCharacteristicDoubleField * _inclinationField;
    HDFitnessMachineCharacteristicDoubleField * _instantaneousPaceField;
    HDFitnessMachineCharacteristicDoubleField * _instantaneousSpeedField;
    HDFitnessMachineCharacteristicUInt8Field * _metabolicEquivalentField;
    HDFitnessMachineCharacteristicDoubleField * _negativeElevationGainField;
    HDFitnessMachineCharacteristicDoubleField * _positiveElevationGainField;
    HDFitnessMachineCharacteristicUInt16Field * _powerOutputField;
    HDFitnessMachineCharacteristicDoubleField * _rampSettingField;
    HDFitnessMachineCharacteristicUInt16Field * _remainingTimeField;
    HDFitnessMachineCharacteristicUInt24Field * _totalDistanceField;
    HDFitnessMachineCharacteristicUInt16Field * _totalEnergyField;
}

@property (nonatomic, readonly) double averagePace;
@property (nonatomic, readonly) bool averagePaceIsSet;
@property (nonatomic, readonly) double averageSpeed;
@property (nonatomic, readonly) bool averageSpeedIsSet;
@property (nonatomic, readonly) unsigned short elapsedTime;
@property (nonatomic, readonly) bool elapsedTimeIsSet;
@property (nonatomic, readonly) unsigned short energyPerHour;
@property (nonatomic, readonly) bool energyPerHourIsSet;
@property (nonatomic, readonly) unsigned char energyPerMinute;
@property (nonatomic, readonly) bool energyPerMinuteIsSet;
@property (nonatomic, readonly) unsigned short forceOnBelt;
@property (nonatomic, readonly) bool forceOnBeltIsSet;
@property (nonatomic, readonly) unsigned char heartRate;
@property (nonatomic, readonly) bool heartRateIsSet;
@property (nonatomic, readonly) double inclination;
@property (nonatomic, readonly) bool inclinationIsSet;
@property (nonatomic, readonly) double instantaneousPace;
@property (nonatomic, readonly) bool instantaneousPaceIsSet;
@property (nonatomic, readonly) double instantaneousSpeed;
@property (nonatomic, readonly) bool instantaneousSpeedIsSet;
@property (nonatomic, readonly) unsigned char metabolicEquivalent;
@property (nonatomic, readonly) bool metabolicEquivalentIsSet;
@property (nonatomic, readonly) double negativeElevationGain;
@property (nonatomic, readonly) bool negativeElevationGainIsSet;
@property (nonatomic, readonly) double positiveElevationGain;
@property (nonatomic, readonly) bool positiveElevationGainIsSet;
@property (nonatomic, readonly) unsigned short powerOutput;
@property (nonatomic, readonly) bool powerOutputIsSet;
@property (nonatomic, readonly) double rampSetting;
@property (nonatomic, readonly) bool rampSettingIsSet;
@property (nonatomic, readonly) unsigned short remainingTime;
@property (nonatomic, readonly) bool remainingTimeIsSet;
@property (nonatomic, readonly) unsigned int totalDistance;
@property (nonatomic, readonly) bool totalDistanceIsSet;
@property (nonatomic, readonly) unsigned short totalEnergy;
@property (nonatomic, readonly) bool totalEnergyIsSet;
@property (nonatomic, readonly) NSDate *updateTime;

+ (unsigned char)flagFieldLength;
+ (id)uuid;

- (void).cxx_destruct;
- (id)allFields;
- (double)averagePace;
- (bool)averagePaceIsSet;
- (double)averageSpeed;
- (bool)averageSpeedIsSet;
- (id)description;
- (unsigned short)elapsedTime;
- (bool)elapsedTimeIsSet;
- (unsigned short)energyPerHour;
- (bool)energyPerHourIsSet;
- (unsigned char)energyPerMinute;
- (bool)energyPerMinuteIsSet;
- (unsigned short)forceOnBelt;
- (bool)forceOnBeltIsSet;
- (id)generateDatums:(id)arg1;
- (unsigned char)heartRate;
- (bool)heartRateIsSet;
- (double)inclination;
- (bool)inclinationIsSet;
- (id)init;
- (double)instantaneousPace;
- (bool)instantaneousPaceIsSet;
- (double)instantaneousSpeed;
- (bool)instantaneousSpeedIsSet;
- (unsigned char)metabolicEquivalent;
- (bool)metabolicEquivalentIsSet;
- (double)negativeElevationGain;
- (bool)negativeElevationGainIsSet;
- (double)positiveElevationGain;
- (bool)positiveElevationGainIsSet;
- (unsigned short)powerOutput;
- (bool)powerOutputIsSet;
- (double)rampSetting;
- (bool)rampSettingIsSet;
- (unsigned short)remainingTime;
- (bool)remainingTimeIsSet;
- (unsigned int)totalDistance;
- (bool)totalDistanceIsSet;
- (unsigned short)totalEnergy;
- (bool)totalEnergyIsSet;

@end
