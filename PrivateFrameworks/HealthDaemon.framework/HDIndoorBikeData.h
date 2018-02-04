/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIndoorBikeData : HDFitnessMachineDataCharacteristicBase <HDDatumRendering> {
    HDFitnessMachineCharacteristicDoubleField * _averageCadenceField;
    HDFitnessMachineCharacteristicInt16Field * _averagePowerField;
    HDFitnessMachineCharacteristicDoubleField * _averageSpeedField;
    HDFitnessMachineCharacteristicUInt16Field * _elapsedTimeField;
    HDFitnessMachineCharacteristicUInt16Field * _energyPerHourField;
    HDFitnessMachineCharacteristicUInt8Field * _energyPerMinuteField;
    HDFitnessMachineCharacteristicUInt8Field * _heartRateField;
    HDFitnessMachineCharacteristicDoubleField * _instantaneousCadenceField;
    HDFitnessMachineCharacteristicInt16Field * _instantaneousPowerField;
    HDFitnessMachineCharacteristicDoubleField * _instantaneousSpeedField;
    HDFitnessMachineCharacteristicUInt8Field * _metabolicEquivalentField;
    HDFitnessMachineCharacteristicUInt16Field * _remainingTimeField;
    HDFitnessMachineCharacteristicInt16Field * _resistanceLevelField;
    HDFitnessMachineCharacteristicUInt24Field * _totalDistanceField;
    HDFitnessMachineCharacteristicUInt16Field * _totalEnergyField;
}

@property (nonatomic, readonly) double averageCadence;
@property (nonatomic, readonly) bool averageCadenceIsSet;
@property (nonatomic, readonly) short averagePower;
@property (nonatomic, readonly) bool averagePowerIsSet;
@property (nonatomic, readonly) double averageSpeed;
@property (nonatomic, readonly) bool averageSpeedIsSet;
@property (nonatomic, readonly) unsigned short elapsedTime;
@property (nonatomic, readonly) bool elapsedTimeIsSet;
@property (nonatomic, readonly) unsigned short energyPerHour;
@property (nonatomic, readonly) bool energyPerHourIsSet;
@property (nonatomic, readonly) unsigned char energyPerMinute;
@property (nonatomic, readonly) bool energyPerMinuteIsSet;
@property (nonatomic, readonly) unsigned char heartRate;
@property (nonatomic, readonly) bool heartRateIsSet;
@property (nonatomic, readonly) double instantaneousCadence;
@property (nonatomic, readonly) bool instantaneousCadenceIsSet;
@property (nonatomic, readonly) short instantaneousPower;
@property (nonatomic, readonly) bool instantaneousPowerIsSet;
@property (nonatomic, readonly) double instantaneousSpeed;
@property (nonatomic, readonly) bool instantaneousSpeedIsSet;
@property (nonatomic, readonly) unsigned char metabolicEquivalent;
@property (nonatomic, readonly) bool metabolicEquivalentIsSet;
@property (nonatomic, readonly) unsigned short remainingTime;
@property (nonatomic, readonly) bool remainingTimeIsSet;
@property (nonatomic, readonly) short resistanceLevel;
@property (nonatomic, readonly) bool resistanceLevelIsSet;
@property (nonatomic, readonly) unsigned int totalDistance;
@property (nonatomic, readonly) bool totalDistanceIsSet;
@property (nonatomic, readonly) unsigned short totalEnergy;
@property (nonatomic, readonly) bool totalEnergyIsSet;
@property (nonatomic, readonly) NSDate *updateTime;

+ (unsigned char)flagFieldLength;
+ (id)uuid;

- (void).cxx_destruct;
- (id)allFields;
- (double)averageCadence;
- (bool)averageCadenceIsSet;
- (short)averagePower;
- (bool)averagePowerIsSet;
- (double)averageSpeed;
- (bool)averageSpeedIsSet;
- (id)description;
- (unsigned short)elapsedTime;
- (bool)elapsedTimeIsSet;
- (unsigned short)energyPerHour;
- (bool)energyPerHourIsSet;
- (unsigned char)energyPerMinute;
- (bool)energyPerMinuteIsSet;
- (id)generateDatums:(id)arg1;
- (unsigned char)heartRate;
- (bool)heartRateIsSet;
- (id)init;
- (double)instantaneousCadence;
- (bool)instantaneousCadenceIsSet;
- (short)instantaneousPower;
- (bool)instantaneousPowerIsSet;
- (double)instantaneousSpeed;
- (bool)instantaneousSpeedIsSet;
- (unsigned char)metabolicEquivalent;
- (bool)metabolicEquivalentIsSet;
- (unsigned short)remainingTime;
- (bool)remainingTimeIsSet;
- (short)resistanceLevel;
- (bool)resistanceLevelIsSet;
- (unsigned int)totalDistance;
- (bool)totalDistanceIsSet;
- (unsigned short)totalEnergy;
- (bool)totalEnergyIsSet;

@end
