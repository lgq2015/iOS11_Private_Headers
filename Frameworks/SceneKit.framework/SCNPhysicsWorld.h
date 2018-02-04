/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsWorld : NSObject <NSSecureCoding> {
    struct c3dAether { 
        struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > { 
            struct c3dPhysicsField {} **__begin_; 
            struct c3dPhysicsField {} **__end_; 
            struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > { 
                struct c3dPhysicsField {} **__first_; 
            } __end_cap_; 
        } _fields; 
        struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > { 
            struct c3dPhysicsField {} **__begin_; 
            struct c3dPhysicsField {} **__end_; 
            struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > { 
                struct c3dPhysicsField {} **__first_; 
            } __end_cap_; 
        } _activeFields; 
        unsigned int _lastOverrideIndex; 
    }  _aether;
    NSMutableArray * _behaviors;
    NSMutableSet * _bodies;
    SCNPhysicsContact * _contact;
    <SCNPhysicsContactDelegate> * _contactDelegate;
    struct btC3DDebugDraw { int (**x1)(); int x2; void *x3; } * _debugDrawer;
    double  _elapsedTime;
    NSMutableArray * _fields;
    struct btOverlappingPairCallback { int (**x1)(); } * _ghostPairCallback;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _gravity;
    bool  _hasActiveFields;
    double  _scale;
    SCNScene * _scene;
    double  _speed;
    double  _timeStep;
    struct btVehicleRaycaster { int (**x1)(); } * _vehicleRayCaster;
    struct btDiscreteDynamicsWorld { int (**x1)(); struct btAlignedObjectArray<btCollisionObject *> { struct btAlignedAllocator<btCollisionObject *, 16> { } x_2_1_1; int x_2_1_2; int x_2_1_3; struct btCollisionObject {} **x_2_1_4; bool x_2_1_5; } x2; struct btDispatcher {} *x3; struct btDispatcherInfo { float x_4_1_1; int x_4_1_2; int x_4_1_3; float x_4_1_4; bool x_4_1_5; struct btIDebugDraw {} *x_4_1_6; bool x_4_1_7; bool x_4_1_8; bool x_4_1_9; float x_4_1_10; bool x_4_1_11; float x_4_1_12; } x4; struct btBroadphaseInterface {} *x5; struct btIDebugDraw {} *x6; bool x7; int (*x8)(); int (*x9)(); void *x10; struct btContactSolverInfo { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; int x_11_1_6; float x_11_1_7; float x_11_1_8; float x_11_1_9; float x_11_1_10; float x_11_1_11; int x_11_1_12; float x_11_1_13; float x_11_1_14; float x_11_1_15; float x_11_1_16; int x_11_1_17; int x_11_1_18; int x_11_1_19; float x_11_1_20; float x_11_1_21; } x11; float x12; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x_13_1_1; int x_13_1_2; int x_13_1_3; struct btTypedConstraint {} **x_13_1_4; bool x_13_1_5; } x13; } * _world;
}

@property (nonatomic, readonly) NSArray *allBehaviors;
@property <SCNPhysicsContactDelegate> *contactDelegate;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } gravity;
@property (nonatomic) double speed;
@property (nonatomic) double timeStep;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addFieldToWorld:(id)arg1;
- (struct c3dAether { struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField {} **x_1_1_1; struct c3dPhysicsField {} **x_1_1_2; struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField {} **x_3_2_1; } x_1_1_3; } x1; struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField {} **x_2_1_1; struct c3dPhysicsField {} **x_2_1_2; struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField {} **x_3_2_1; } x_2_1_3; } x2; unsigned int x3; }*)_aetherHandle;
- (void)_allowGhostObjects;
- (void)_createDynamicWorldIfNeeded;
- (void)_customDecodingOfSCNPhysicsWorld:(id)arg1;
- (void)_customEncodingOfSCNPhysicsWorld:(id)arg1;
- (struct btVehicleRaycaster { int (**x1)(); }*)_defaultVehicleRayCaster;
- (void)_didDecodeSCNPhysicsWorld:(id)arg1;
- (void)_drawDebugInAuthoringEnvironment:(void*)arg1;
- (id)_findFieldAttachedToNode:(id)arg1;
- (struct btDynamicsWorld { int (**x1)(); struct btAlignedObjectArray<btCollisionObject *> { struct btAlignedAllocator<btCollisionObject *, 16> { } x_2_1_1; int x_2_1_2; int x_2_1_3; struct btCollisionObject {} **x_2_1_4; bool x_2_1_5; } x2; struct btDispatcher {} *x3; struct btDispatcherInfo { float x_4_1_1; int x_4_1_2; int x_4_1_3; float x_4_1_4; bool x_4_1_5; struct btIDebugDraw {} *x_4_1_6; bool x_4_1_7; bool x_4_1_8; bool x_4_1_9; float x_4_1_10; bool x_4_1_11; float x_4_1_12; } x4; struct btBroadphaseInterface {} *x5; struct btIDebugDraw {} *x6; bool x7; int (*x8)(); int (*x9)(); void *x10; struct btContactSolverInfo { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; float x_11_1_5; int x_11_1_6; float x_11_1_7; float x_11_1_8; float x_11_1_9; float x_11_1_10; float x_11_1_11; int x_11_1_12; float x_11_1_13; float x_11_1_14; float x_11_1_15; float x_11_1_16; int x_11_1_17; int x_11_1_18; int x_11_1_19; float x_11_1_20; float x_11_1_21; } x11; float x12; }*)_handle;
- (bool)_isDefault;
- (bool)_needsRedraw;
- (id)_physicsContact;
- (void)_postCommandWithBlock:(id /* block */)arg1;
- (void)_preTick:(double)arg1;
- (id)_rayTestWithSegmentFromPoint:(struct btVector3 { union { float x_1_1_1[4]; } x1; })arg1 toPoint:(struct btVector3 { union { float x_1_1_1[4]; } x1; })arg2 options:(id)arg3;
- (void)_removeFieldFromWorld:(id)arg1;
- (void)_reset;
- (void)_step:(double)arg1;
- (void)addBehavior:(id)arg1;
- (void)addPhysicsBody:(id)arg1 nodeRef:(struct __C3DNode { }*)arg2 colGroup:(unsigned long long)arg3 colMask:(unsigned long long)arg4 colTest:(unsigned long long)arg5;
- (id)allBehaviors;
- (void)commonInit;
- (id)contactDelegate;
- (id)contactTestBetweenBody:(id)arg1 andBody:(id)arg2 options:(id)arg3;
- (id)contactTestWithBody:(id)arg1 options:(id)arg2;
- (id)convexSweepTestWithShape:(id)arg1 fromTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg2 toTransform:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg3 options:(id)arg4;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateBodiesUsingBlock:(id /* block */)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })gravity;
- (id)initWithCoder:(id)arg1;
- (id)initWithScene:(id)arg1;
- (id)objectInAllBehaviorsAtIndex:(unsigned long long)arg1;
- (bool)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3;
- (id)rayTestWithSegmentFromPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg1 toPoint:(struct SCNVector3 { float x1; float x2; float x3; })arg2 options:(id)arg3;
- (void)removeAllBehaviors;
- (void)removeBehavior:(id)arg1;
- (void)removePhysicsBody:(id)arg1 handle:(void*)arg2;
- (double)scale;
- (id)scene;
- (void)sceneWillDie;
- (void)setContactDelegate:(id)arg1;
- (void)setGravity:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setScale:(double)arg1;
- (void)setScene:(id)arg1;
- (void)setSpeed:(double)arg1;
- (void)setTimeStep:(double)arg1;
- (double)speed;
- (double)timeStep;
- (void)updateCollisionPairs;
- (id)valueForUndefinedKey:(id)arg1;
- (void)wakeUpAllBodies;

@end
