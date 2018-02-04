/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTSourceCoreRoutineVehicleEvent : RTSourceCoreRoutine {
    RTVehicleEvent * _vehicleEvent;
}

@property (nonatomic, readonly) RTVehicleEvent *vehicleEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithVehicleEvent:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)vehicleEvent;

@end
