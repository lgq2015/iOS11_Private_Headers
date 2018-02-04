/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKWorkoutRoute : HKSeriesSample {
    HDCodableLocationSeries * __codableWorkoutRoute;
}

@property (setter=_setCodableWorkoutRoute:, nonatomic, retain) HDCodableLocationSeries *_codableWorkoutRoute;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_workoutRouteWithDevice:(id)arg1 metadata:(id)arg2;

- (void).cxx_destruct;
- (id)_codableWorkoutRoute;
- (bool)_isSmoothed;
- (bool)_requiresPrivateEntitlementForQueries;
- (void)_setCodableWorkoutRoute:(id)arg1;
- (id)_validateConfiguration;
- (id)_validateSample;
- (id)_valueDescription;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;
+ (Class)hd_dataEntityClass;

- (bool)addCodableRepresentationToCollection:(id)arg1;
- (id)codableRepresentationForSync;

@end
