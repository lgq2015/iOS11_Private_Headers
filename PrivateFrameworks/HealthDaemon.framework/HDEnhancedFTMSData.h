/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDEnhancedFTMSData : HDHealthServiceCharacteristic <HDDatumRendering> {
    NSNumber * _averageSpeed;
    NSNumber * _instantaneousSpeed;
}

@property (nonatomic, retain) NSNumber *averageSpeed;
@property (nonatomic, retain) NSNumber *instantaneousSpeed;
@property (nonatomic, readonly) NSDate *updateTime;

+ (id)_buildWithBinaryValue:(id)arg1 error:(id*)arg2;
+ (id)uuid;

- (void).cxx_destruct;
- (id)averageSpeed;
- (id)generateDatums:(id)arg1;
- (id)getBinaryValueWithError:(id*)arg1;
- (id)instantaneousSpeed;
- (void)setAverageSpeed:(id)arg1;
- (void)setInstantaneousSpeed:(id)arg1;

@end
