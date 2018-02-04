/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataVitalsSampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray * _diurnalBPVariationTable;
    NSArray * _diurnalTempVariationTable;
    double  _lastPeripheralPerfusionIndexValue;
    double  _nextBloodPressureSampleTime;
    double  _nextBodyTempSampleTime;
    double  _nextHeartRateSampleTime;
    double  _nextOxygenSaturationSampleTime;
    double  _nextPeripheralPerfusionIndexSampleTime;
    double  _nextRespirationRateSampleTime;
}

@property (nonatomic, copy) NSArray *diurnalBPVariationTable;
@property (nonatomic, copy) NSArray *diurnalTempVariationTable;
@property (nonatomic) double lastPeripheralPerfusionIndexValue;
@property (nonatomic) double nextBloodPressureSampleTime;
@property (nonatomic) double nextBodyTempSampleTime;
@property (nonatomic) double nextHeartRateSampleTime;
@property (nonatomic) double nextOxygenSaturationSampleTime;
@property (nonatomic) double nextPeripheralPerfusionIndexSampleTime;
@property (nonatomic) double nextRespirationRateSampleTime;

- (void).cxx_destruct;
- (long long)_computeBloodPressureForDemoPerson:(id)arg1 atTime:(double)arg2 baseBloodPressure:(double)arg3 stdDev:(double)arg4;
- (double)_computeBodyTempInCelsiusForDemoPerson:(id)arg1 atTime:(double)arg2 addNoise:(bool)arg3;
- (struct HDDemoDataHeartRate { double x1; long long x2; })_computeHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (long long)_computeMaxHRForDemoPerson:(id)arg1 atTime:(double)arg2;
- (long long)_computeRespirationRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (struct HDDemoDataBloodPressure { double x1; double x2; })bloodPressureForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)bodyTempInCelsiusForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)diurnalBPVariationTable;
- (id)diurnalTempVariationTable;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (struct HDDemoDataHeartRate { double x1; long long x2; })heartRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (double)lastPeripheralPerfusionIndexValue;
- (double)nextBloodPressureSampleTime;
- (double)nextBodyTempSampleTime;
- (double)nextHeartRateSampleTime;
- (double)nextOxygenSaturationSampleTime;
- (double)nextPeripheralPerfusionIndexSampleTime;
- (double)nextRespirationRateSampleTime;
- (id)oxygenSaturationForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)peripheralPerfusionIndexForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)respirationRateForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)setDiurnalBPVariationTable:(id)arg1;
- (void)setDiurnalTempVariationTable:(id)arg1;
- (void)setLastPeripheralPerfusionIndexValue:(double)arg1;
- (void)setNextBloodPressureSampleTime:(double)arg1;
- (void)setNextBodyTempSampleTime:(double)arg1;
- (void)setNextHeartRateSampleTime:(double)arg1;
- (void)setNextOxygenSaturationSampleTime:(double)arg1;
- (void)setNextPeripheralPerfusionIndexSampleTime:(double)arg1;
- (void)setNextRespirationRateSampleTime:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;

@end
