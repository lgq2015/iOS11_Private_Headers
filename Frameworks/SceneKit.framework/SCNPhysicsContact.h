/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsContact : NSObject {
    double  _collisionImpulse;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _contactNormal;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _contactPoint;
    double  _distance;
    double  _fraction;
    SCNNode * _nodeA;
    SCNNode * _nodeB;
    long long  _updateCount;
}

@property (nonatomic, readonly) double collisionImpulse;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } contactNormal;
@property (nonatomic, readonly) struct SCNVector3 { float x1; float x2; float x3; } contactPoint;
@property (nonatomic, readonly) SCNNode *nodeA;
@property (nonatomic, readonly) SCNNode *nodeB;
@property (nonatomic, readonly) double penetrationDistance;
@property (nonatomic, readonly) double sweepTestFraction;

+ (id)_contactWithManifold:(const struct btPersistentManifold { int x1; struct btManifoldPoint { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_2_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_2_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; int x_2_1_10; int x_2_1_11; int x_2_1_12; int x_2_1_13; void *x_2_1_14; bool x_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; float x_2_1_22; int x_2_1_23; struct btVector3 { union { float x_1_3_1[4]; } x_24_2_1; } x_2_1_24; struct btVector3 { union { float x_1_3_1[4]; } x_25_2_1; } x_2_1_25; } x2[4]; struct btCollisionObject {} *x3; struct btCollisionObject {} *x4; int x5; float x6; float x7; int x8; int x9; int x10; struct c3dContactCallback {} *x11; }*)arg1 index:(long long)arg2;

- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2;
- (void)_fillNodeA:(id)arg1 nodeB:(id)arg2 contactPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg3 collisionImpulse:(struct SCNVector3 { float x1; float x2; float x3; })arg4 distance:(double)arg5 hitFraction:(double)arg6;
- (void)_prepareUpdate;
- (void)_setupWithManifold:(const struct btPersistentManifold { int x1; struct btManifoldPoint { struct btVector3 { union { float x_1_3_1[4]; } x_1_2_1; } x_2_1_1; struct btVector3 { union { float x_1_3_1[4]; } x_2_2_1; } x_2_1_2; struct btVector3 { union { float x_1_3_1[4]; } x_3_2_1; } x_2_1_3; struct btVector3 { union { float x_1_3_1[4]; } x_4_2_1; } x_2_1_4; struct btVector3 { union { float x_1_3_1[4]; } x_5_2_1; } x_2_1_5; float x_2_1_6; float x_2_1_7; float x_2_1_8; float x_2_1_9; int x_2_1_10; int x_2_1_11; int x_2_1_12; int x_2_1_13; void *x_2_1_14; bool x_2_1_15; float x_2_1_16; float x_2_1_17; float x_2_1_18; float x_2_1_19; float x_2_1_20; float x_2_1_21; float x_2_1_22; int x_2_1_23; struct btVector3 { union { float x_1_3_1[4]; } x_24_2_1; } x_2_1_24; struct btVector3 { union { float x_1_3_1[4]; } x_25_2_1; } x_2_1_25; } x2[4]; struct btCollisionObject {} *x3; struct btCollisionObject {} *x4; int x5; float x6; float x7; int x8; int x9; int x10; struct c3dContactCallback {} *x11; }*)arg1 index:(long long)arg2 point:(const struct btManifoldPoint { struct btVector3 { union { float x_1_2_1[4]; } x_1_1_1; } x1; struct btVector3 { union { float x_1_2_1[4]; } x_2_1_1; } x2; struct btVector3 { union { float x_1_2_1[4]; } x_3_1_1; } x3; struct btVector3 { union { float x_1_2_1[4]; } x_4_1_1; } x4; struct btVector3 { union { float x_1_2_1[4]; } x_5_1_1; } x5; float x6; float x7; float x8; float x9; int x10; int x11; int x12; int x13; void *x14; bool x15; float x16; float x17; float x18; float x19; float x20; float x21; float x22; int x23; struct btVector3 { union { float x_1_2_1[4]; } x_24_1_1; } x24; struct btVector3 { union { float x_1_2_1[4]; } x_25_1_1; } x25; }*)arg3;
- (bool)_shouldPostUpdate;
- (double)collisionImpulse;
- (struct SCNVector3 { float x1; float x2; float x3; })contactNormal;
- (struct SCNVector3 { float x1; float x2; float x3; })contactPoint;
- (void)dealloc;
- (id)description;
- (id)nodeA;
- (id)nodeB;
- (double)penetrationDistance;
- (double)sweepTestFraction;

@end
