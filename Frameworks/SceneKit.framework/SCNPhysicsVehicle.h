/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsVehicle : SCNPhysicsBehavior {
    SCNPhysicsBody * _chassisBody;
    double  _speedKmHour;
    struct btRaycastVehicle { int (**x1)(); struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_2_1_1; int x_2_1_2; int x_2_1_3; struct btVector3 {} *x_2_1_4; bool x_2_1_5; } x2; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_3_1_1; int x_3_1_2; int x_3_1_3; struct btVector3 {} *x_3_1_4; bool x_3_1_5; } x3; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_4_1_1; int x_4_1_2; int x_4_1_3; float *x_4_1_4; bool x_4_1_5; } x4; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_5_1_1; int x_5_1_2; int x_5_1_3; float *x_5_1_4; bool x_5_1_5; } x5; int x6; int x7; float x8; float x9; struct btVehicleRaycaster {} *x10; float x11; float x12; float x13; struct btRigidBody {} *x14; int x15; int x16; int x17; struct btAlignedObjectArray<btWheelInfo> { struct btAlignedAllocator<btWheelInfo, 16> { } x_18_1_1; int x_18_1_2; int x_18_1_3; struct btWheelInfo {} *x_18_1_4; bool x_18_1_5; } x18; } * _vehicle;
    NSArray * _wheels;
    SCNPhysicsWorld * _world;
}

@property (nonatomic, readonly) SCNPhysicsBody *chassisBody;
@property (nonatomic, readonly) double speedInKilometersPerHour;
@property (nonatomic, readonly) NSArray *wheels;

+ (bool)supportsSecureCoding;
+ (id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2;

- (void)_addToPhysicsWorld:(id)arg1;
- (void)_createWheel:(id)arg1;
- (void)_customDecodingOfSCNPhysicsVehicle:(id)arg1;
- (void)_handleCreateIfNeeded:(bool)arg1;
- (void)_initializeWheelsArray;
- (void)_update;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2;
- (struct btRaycastVehicle { int (**x1)(); struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_2_1_1; int x_2_1_2; int x_2_1_3; struct btVector3 {} *x_2_1_4; bool x_2_1_5; } x2; struct btAlignedObjectArray<btVector3> { struct btAlignedAllocator<btVector3, 16> { } x_3_1_1; int x_3_1_2; int x_3_1_3; struct btVector3 {} *x_3_1_4; bool x_3_1_5; } x3; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_4_1_1; int x_4_1_2; int x_4_1_3; float *x_4_1_4; bool x_4_1_5; } x4; struct btAlignedObjectArray<float> { struct btAlignedAllocator<float, 16> { } x_5_1_1; int x_5_1_2; int x_5_1_3; float *x_5_1_4; bool x_5_1_5; } x5; int x6; int x7; float x8; float x9; struct btVehicleRaycaster {} *x10; float x11; float x12; float x13; struct btRigidBody {} *x14; int x15; int x16; int x17; struct btAlignedObjectArray<btWheelInfo> { struct btAlignedAllocator<btWheelInfo, 16> { } x_18_1_1; int x_18_1_2; int x_18_1_3; struct btWheelInfo {} *x_18_1_4; bool x_18_1_5; } x18; }*)btVehicle;
- (id)chassisBody;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasReferenceToPhysicsBody:(id)arg1;
- (id)initWithChassisBody:(id)arg1 wheels:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)physicsWorld;
- (void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (double)speedInKilometersPerHour;
- (id)valueForKeyPath:(id)arg1;
- (id)wheelAtIndex:(unsigned long long)arg1;
- (id)wheels;

@end
