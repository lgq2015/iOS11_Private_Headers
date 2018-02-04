/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceVehicleSpeedRow : NSObject <MNTracePlayerTimelineStreamObjectType> {
    double  _timestamp;
    double  _vehicleSpeed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp;
@property (nonatomic) double vehicleSpeed;

- (double)position;
- (void)setTimestamp:(double)arg1;
- (void)setVehicleSpeed:(double)arg1;
- (double)timestamp;
- (double)vehicleSpeed;

@end
