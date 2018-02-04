/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDDemoDataReproductiveHealthSampleGenerator : HDDemoDataBaseSampleGenerator {
    NSArray * _basalBodyTempMultiplierTable;
    NSArray * _cervicalMucusTable;
    double  _nextOvulationTestSampleTime;
    double  _nextSexualActivitySampleTime;
}

@property (nonatomic, copy) NSArray *basalBodyTempMultiplierTable;
@property (nonatomic, copy) NSArray *cervicalMucusTable;
@property (nonatomic) double nextOvulationTestSampleTime;
@property (nonatomic) double nextSexualActivitySampleTime;

- (void).cxx_destruct;
- (id)_basalBodyTempMultiplier;
- (long long)_computeNextLuteinizingHormoneSurgeForDemoPerson:(id)arg1 atTime:(double)arg2;
- (bool)_isDemoPersonOvulating:(id)arg1 atTime:(double)arg2;
- (id)basalBodyTempForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)basalBodyTempMultiplierTable;
- (id)cervicalMucusQualityForDemoPerson:(id)arg1 atTime:(double)arg2;
- (id)cervicalMucusTable;
- (void)encodeWithCoder:(id)arg1;
- (void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (struct HDDemoDataMenstrualFlow { long long x1; long long x2; })menstrualFlowForDemoPerson:(id)arg1 atTime:(double)arg2;
- (double)nextOvulationTestSampleTime;
- (double)nextSexualActivitySampleTime;
- (id)ovulationTestResultForDemoPerson:(id)arg1 atTime:(double)arg2;
- (void)setBasalBodyTempMultiplierTable:(id)arg1;
- (void)setCervicalMucusTable:(id)arg1;
- (void)setNextOvulationTestSampleTime:(double)arg1;
- (void)setNextSexualActivitySampleTime:(double)arg1;
- (void)setupWithDemoDataGenerator:(id)arg1;
- (id)sexualActivityForDemoPerson:(id)arg1 atTime:(double)arg2;

@end
