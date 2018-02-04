/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsSliderJoint : SCNPhysicsBehavior {
    struct btSliderConstraint { int (**x1)(); int x2; int x3; union { int x_4_1_1; void *x_4_1_2; } x4; float x5; bool x6; bool x7; int x8; struct btRigidBody {} *x9; struct btRigidBody {} *x10; float x11; float x12; struct btJointFeedback {} *x13; bool x14; bool x15; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_16_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_16_1_2; } x16; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_17_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_17_1_2; } x17; bool x18; float x19; float x20; float x21; float x22; float x23; float x24; float x25; float x26; float x27; float x28; float x29; float x30; float x31; float x32; float x33; float x34; float x35; float x36; float x37; float x38; float x39; float x40; float x41; float x42; float x43; float x44; float x45; float x46; bool x47; bool x48; int x49; struct btJacobianEntry { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_50_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_50_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_50_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_50_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_50_1_5; float x_50_1_6; } x50[3]; } * _constraint;
    struct { 
        SCNPhysicsBody *bodyA; 
        SCNPhysicsBody *bodyB; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } axisA; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } anchorA; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } axisB; 
        struct SCNVector3 { 
            float x; 
            float y; 
            float z; 
        } anchorB; 
        double minLinearLimit; 
        double maxLinearLimit; 
        double minAngularLimit; 
        double maxAngularLimit; 
        double motorTargetLinearVelocity; 
        double motorMaximumForce; 
        double motorTargetAngularVelocity; 
        double motorMaximumTorque; 
    }  _definition;
    SCNPhysicsWorld * _world;
}

@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } anchorA;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } anchorB;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } axisA;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } axisB;
@property (nonatomic, readonly) SCNPhysicsBody *bodyA;
@property (nonatomic, readonly) SCNPhysicsBody *bodyB;
@property (nonatomic) double maximumAngularLimit;
@property (nonatomic) double maximumLinearLimit;
@property (nonatomic) double minimumAngularLimit;
@property (nonatomic) double minimumLinearLimit;
@property (nonatomic) double motorMaximumForce;
@property (nonatomic) double motorMaximumTorque;
@property (nonatomic) double motorTargetAngularVelocity;
@property (nonatomic) double motorTargetLinearVelocity;

+ (id)jointWithBody:(id)arg1 axis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchor:(struct SCNVector3 { float x1; float x2; float x3; })arg3;
+ (id)jointWithBodyA:(id)arg1 axisA:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg3 bodyB:(id)arg4 axisB:(struct SCNVector3 { float x1; float x2; float x3; })arg5 anchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg6;

- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })anchorA;
- (struct SCNVector3 { float x1; float x2; float x3; })anchorB;
- (struct SCNVector3 { float x1; float x2; float x3; })axisA;
- (struct SCNVector3 { float x1; float x2; float x3; })axisB;
- (id)bodyA;
- (id)bodyB;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBody:(id)arg1 axis:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchor:(struct SCNVector3 { float x1; float x2; float x3; })arg3;
- (id)initWithBodyA:(id)arg1 axisA:(struct SCNVector3 { float x1; float x2; float x3; })arg2 anchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg3 bodyB:(id)arg4 axisB:(struct SCNVector3 { float x1; float x2; float x3; })arg5 anchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg6;
- (id)initWithCoder:(id)arg1;
- (double)maximumAngularLimit;
- (double)maximumLinearLimit;
- (double)minimumAngularLimit;
- (double)minimumLinearLimit;
- (double)motorMaximumForce;
- (double)motorMaximumTorque;
- (double)motorTargetAngularVelocity;
- (double)motorTargetLinearVelocity;
- (void)setAnchorA:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setAnchorB:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setAxisA:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setAxisB:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setMaximumAngularLimit:(double)arg1;
- (void)setMaximumLinearLimit:(double)arg1;
- (void)setMinimumAngularLimit:(double)arg1;
- (void)setMinimumLinearLimit:(double)arg1;
- (void)setMotorMaximumForce:(double)arg1;
- (void)setMotorMaximumTorque:(double)arg1;
- (void)setMotorTargetAngularVelocity:(double)arg1;
- (void)setMotorTargetLinearVelocity:(double)arg1;

@end
