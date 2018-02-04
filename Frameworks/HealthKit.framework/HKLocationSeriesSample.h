/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKLocationSeriesSample : HKSeriesSample <HDCoding> {
    HDCodableLocationSeries * __codableLocationSeries;
    HKWorkoutRoute * _route;
}

@property (setter=_setCodableLocationSeries:, nonatomic, retain) HDCodableLocationSeries *_codableLocationSeries;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HKWorkoutRoute *route;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_locationSeriesWithDevice:(id)arg1 metadata:(id)arg2;
+ (id)_locationSeriesWithRoute:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)_codableLocationSeries;
- (void)_setCodableLocationSeries:(id)arg1;
- (id)_validateConfiguration;
- (id)_validateSample;
- (id)_valueDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)route;
- (void)setRoute:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
