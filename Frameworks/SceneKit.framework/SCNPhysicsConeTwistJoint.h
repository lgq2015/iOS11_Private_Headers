/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsConeTwistJoint : SCNPhysicsBehavior {
    struct btConeTwistConstraint { int (**x1)(); int x2; int x3; union { int x_4_1_1; void *x_4_1_2; } x4; float x5; bool x6; bool x7; int x8; struct btRigidBody {} *x9; struct btRigidBody {} *x10; float x11; float x12; struct btJointFeedback {} *x13; struct btJacobianEntry { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_14_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_14_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_14_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_14_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_14_1_5; float x_14_1_6; } x14[3]; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_15_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_15_1_2; } x15; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x_1_4_1[4]; } x_1_3_1; } x_1_2_1[3]; } x_16_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_16_1_2; } x16; float x17; float x18; } * _constraint;
    struct { 
        SCNPhysicsBody *bodyA; 
        struct SCNMatrix4 { 
            float m11; 
            float m12; 
            float m13; 
            float m14; 
            float m21; 
            float m22; 
            float m23; 
            float m24; 
            float m31; 
            float m32; 
            float m33; 
            float m34; 
            float m41; 
            float m42; 
            float m43; 
            float m44; 
        } frameA; 
        SCNPhysicsBody *bodyB; 
        struct SCNMatrix4 { 
            float m11; 
            float m12; 
            float m13; 
            float m14; 
            float m21; 
            float m22; 
            float m23; 
            float m24; 
            float m31; 
            float m32; 
            float m33; 
            float m34; 
            float m41; 
            float m42; 
            float m43; 
            float m44; 
        } frameB; 
        double maximumAngularLimit1; 
        double maximumAngularLimit2; 
        double maximumTwistAngle; 
    }  _definition;
    SCNPhysicsWorld * _world;
}

@property (nonatomic, readonly) SCNPhysicsBody *bodyA;
@property (nonatomic, readonly) SCNPhysicsBody *bodyB;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } frameA;
@property (nonatomic) struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } frameB;
@property (nonatomic) double maximumAngularLimit1;
@property (nonatomic) double maximumAngularLimit2;
@property (nonatomic) double maximumTwistAngle;

+ (id)jointWithBody:(id)arg1 frame:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2;
+ (id)jointWithBodyA:(id)arg1 frameA:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2 bodyB:(id)arg3 frameB:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg4;

- (void)_addToPhysicsWorld:(id)arg1;
- (void)_willRemoveFromPhysicsWorld:(id)arg1;
- (id)bodyA;
- (id)bodyB;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })frameA;
- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })frameB;
- (id)initWithBody:(id)arg1 frame:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2;
- (id)initWithBodyA:(id)arg1 frameA:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2 bodyB:(id)arg3 frameB:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg4;
- (id)initWithCoder:(id)arg1;
- (double)maximumAngularLimit1;
- (double)maximumAngularLimit2;
- (double)maximumTwistAngle;
- (void)setFrameA:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setFrameB:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (void)setMaximumAngularLimit1:(double)arg1;
- (void)setMaximumAngularLimit2:(double)arg1;
- (void)setMaximumTwistAngle:(double)arg1;

@end
