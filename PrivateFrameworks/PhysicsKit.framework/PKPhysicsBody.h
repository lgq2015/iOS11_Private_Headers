/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
 */

@interface PKPhysicsBody : NSObject <NSCoding, NSCopying> {
    bool  _allowsRotation;
    struct b2Body { bool x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned short x7; int x8; struct b2Transform { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct b2Rot { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; struct b2Transform { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_10_1_1; struct b2Rot { float x_2_2_1; float x_2_2_2; } x_10_1_2; } x10; struct b2Sweep { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_11_1_1; union b2Position { struct { struct b2Vec2 { float x_1_4_1; float x_1_4_2; } x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; } x_11_1_2; union b2Position { struct { struct b2Vec2 { float x_1_4_1; float x_1_4_2; } x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1; } x_11_1_3; float x_11_1_4; } x11; struct b2Vec2 { float x_12_1_1; float x_12_1_2; } x12; float x13; struct b2Vec2 { float x_14_1_1; float x_14_1_2; } x14; float x15; struct b2World {} *x16; struct b2Body {} *x17; struct b2Body {} *x18; struct b2Fixture {} *x19; int x20; struct b2JointEdge {} *x21; } * _body;
    struct b2BodyDef { 
        bool _sk_affectedByGravity; 
        unsigned int _sk_fieldCategoryBitMask; 
        unsigned int _sk_categoryBitMask; 
        unsigned int _sk_collisionBitMask; 
        unsigned int _sk_intersectionCallbackBitMask; 
        int type; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } position; 
        float angle; 
        struct b2Vec2 { 
            float x; 
            float y; 
        } linearVelocity; 
        float angularVelocity; 
        float charge; 
        float linearDamping; 
        float angularDamping; 
        bool allowSleep; 
        bool awake; 
        bool fixedRotation; 
        bool bullet; 
        bool active; 
        void *userData; 
    }  _bodyDef;
    int  _dynamicType;
    double  _edgeRadius;
    struct PKCField { } * _field;
    bool  _inUse;
    bool  _isPinned;
    NSMutableArray * _joints;
    struct CGImage { } * _mask;
    struct shared_ptr<PKPath> { 
        struct PKPath {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _outline;
    struct CGPoint { 
        double x; 
        double y; 
    }  _p0;
    struct CGPoint { 
        double x; 
        double y; 
    }  _p1;
    struct shared_ptr<PKPath> { 
        struct PKPath {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _pathPtr;
    id /* block */  _postStepBlock;
    struct shared_ptr<QuadTree> { 
        struct QuadTree {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _quadTree;
    double  _radius;
    <NSObject> * _representedObject;
    int  _shapeType;
    struct vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> > { 
        struct PKPhysicsShape {} **__begin_; 
        struct PKPhysicsShape {} **__end_; 
        struct __compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> > { 
            struct PKPhysicsShape {} **__first_; 
        } __end_cap_; 
    }  _shapes;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    PKPhysicsWorld * _world;
}

@property (nonatomic) struct b2Body { bool x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned short x7; int x8; struct b2Transform { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct b2Rot { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; struct b2Transform { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_10_1_1; struct b2Rot { float x_2_2_1; float x_2_2_2; } x_10_1_2; } x10; struct b2Sweep { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_11_1_1; union b2Position { struct { struct b2Vec2 { float x_1_4_1; float x_1_4_2; } x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; } x_11_1_2; union b2Position { struct { struct b2Vec2 { float x_1_4_1; float x_1_4_2; } x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1; } x_11_1_3; float x_11_1_4; } x11; struct b2Vec2 { float x_12_1_1; float x_12_1_2; } x12; float x13; struct b2Vec2 { float x_14_1_1; float x_14_1_2; } x14; float x15; struct b2World {} *x16; struct b2Body {} *x17; struct b2Body {} *x18; struct b2Fixture {} *x19; int x20; struct b2JointEdge {} *x21; }*_body;
@property (nonatomic) struct b2BodyDef { bool x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct b2Vec2 { float x_7_1_1; float x_7_1_2; } x7; float x8; struct b2Vec2 { float x_9_1_1; float x_9_1_2; } x9; float x10; float x11; float x12; float x13; bool x14; bool x15; bool x16; bool x17; bool x18; void *x19; } _bodyDef;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{vector<PKPhysicsShape *' */ struct *_shapes; /* unknown property attribute:  std::__1::allocator<PKPhysicsShape *> >=^^{PKPhysicsShape}}} */
@property (nonatomic) bool affectedByGravity;
@property (nonatomic) bool allowsRotation;
@property (nonatomic) double angularDamping;
@property (nonatomic) double angularVelocity;
@property (nonatomic, readonly) double area;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic) double charge;
@property (nonatomic) unsigned int collisionBitMask;
@property (nonatomic) unsigned int contactTestBitMask;
@property (nonatomic) double density;
@property (getter=isDynamic, nonatomic) bool dynamic;
@property (nonatomic) unsigned int fieldBitMask;
@property (nonatomic) double friction;
@property (nonatomic, readonly) NSArray *joints;
@property (nonatomic) double linearDamping;
@property (nonatomic) double mass;
@property (nonatomic, readonly) SKNode *node;
@property (nonatomic) struct shared_ptr<PKPath> { struct PKPath {} *x1; struct __shared_weak_count {} *x2; } outline;
@property (nonatomic) bool pinned;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, copy) id /* block */ postStepBlock;
@property (nonatomic) double radius;
@property (nonatomic) <NSObject> *representedObject;
@property (getter=isResting, nonatomic) bool resting;
@property (nonatomic) double restitution;
@property (nonatomic) double rotation;
@property (nonatomic) bool usesPreciseCollisionDetection;
@property (nonatomic) struct CGVector { double x1; double x2; } velocity;
@property (nonatomic, readonly) /* Warning: unhandled struct encoding: '{PKPath=f{vector<PKPoint' */ struct *volume; /* unknown property attribute:  std::__1::allocator<PKPoint> >=^{?}}}^{CGPath}} */

// Image: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit

+ (id)bodyWithBodies:(id)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1;
+ (id)bodyWithCircleOfRadius:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithEdgeChainFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithEdgeFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithEdgeLoopFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithOutline:(struct shared_ptr<PKPath> { struct PKPath {} *x1; struct __shared_weak_count {} *x2; })arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithPolygonFromPath:(struct CGPath { }*)arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2 edgeRadius:(double)arg3;
+ (id)bodyWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1 edgeRadius:(double)arg2;
+ (id)initWithMarchingCubes:(struct PKCGrid { int x1; int x2; int x3; struct Range { float x_4_1_1; float x_4_1_2; float x_4_1_3; float x_4_1_4; float x_4_1_5; float x_4_1_6; } x4; struct vector<unsigned char, std::__1::allocator<unsigned char> > { char *x_5_1_1; char *x_5_1_2; struct __compressed_pair<unsigned char *, std::__1::allocator<unsigned char> > { char *x_3_2_1; } x_5_1_3; } x5; struct vector<float __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^^{__compressed_pair<float * __attribute__((ext_vector_type(4))), std::__1::allocator<float __attribute__((ext_vector_type(4)))> >=^ {} x6; }*)arg1 pixelFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)initWithQuadTree:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_allowSleep;
- (struct b2Body { bool x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned short x7; int x8; struct b2Transform { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct b2Rot { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; struct b2Transform { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_10_1_1; struct b2Rot { float x_2_2_1; float x_2_2_2; } x_10_1_2; } x10; struct b2Sweep { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_11_1_1; union b2Position { struct { struct b2Vec2 { float x_1_4_1; float x_1_4_2; } x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; } x_11_1_2; union b2Position { struct { struct b2Vec2 { float x_1_4_1; float x_1_4_2; } x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1; } x_11_1_3; float x_11_1_4; } x11; struct b2Vec2 { float x_12_1_1; float x_12_1_2; } x12; float x13; struct b2Vec2 { float x_14_1_1; float x_14_1_2; } x14; float x15; struct b2World {} *x16; struct b2Body {} *x17; struct b2Body {} *x18; struct b2Fixture {} *x19; int x20; struct b2JointEdge {} *x21; }*)_body;
- (struct b2BodyDef { bool x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct b2Vec2 { float x_7_1_1; float x_7_1_2; } x7; float x8; struct b2Vec2 { float x_9_1_1; float x_9_1_2; } x9; float x10; float x11; float x12; float x13; bool x14; bool x15; bool x16; bool x17; bool x18; void *x19; })_bodyDef;
- (id)_descriptionClassName;
- (id)_descriptionFormat;
- (bool)_inUse;
- (id)_joints;
- (struct shared_ptr<QuadTree> { struct QuadTree {} *x1; struct __shared_weak_count {} *x2; })_quadTree;
- (struct vector<PKPhysicsShape *, std::__1::allocator<PKPhysicsShape *> > { struct PKPhysicsShape {} **x1; struct PKPhysicsShape {} **x2; struct __compressed_pair<PKPhysicsShape **, std::__1::allocator<PKPhysicsShape *> > { struct PKPhysicsShape {} **x_3_1_1; } x3; }*)_shapes;
- (id)_world;
- (bool)active;
- (bool)affectedByGravity;
- (id)allContactedBodies;
- (bool)allowsRotation;
- (double)angularDamping;
- (double)angularVelocity;
- (void)applyAngularImpulse:(double)arg1;
- (void)applyForce:(struct CGPoint { double x1; double x2; })arg1;
- (void)applyForce:(struct CGPoint { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyImpulse:(struct CGVector { double x1; double x2; })arg1;
- (void)applyImpulse:(struct CGVector { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyTorque:(double)arg1;
- (void)applyUnscaledForce:(struct CGVector { double x1; double x2; })arg1;
- (void)applyUnscaledForce:(struct CGVector { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)applyUnscaledImpulse:(struct CGVector { double x1; double x2; })arg1;
- (void)applyUnscaledImpulse:(struct CGVector { double x1; double x2; })arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2;
- (double)area;
- (unsigned int)categoryBitMask;
- (double)charge;
- (void)clearBox2DData;
- (unsigned int)collisionBitMask;
- (unsigned int)contactTestBitMask;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)density;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)fieldBitMask;
- (double)friction;
- (id)init;
- (id)initWithBodies:(id)arg1;
- (id)initWithCircleOfRadius:(double)arg1;
- (id)initWithCircleOfRadius:(double)arg1 center:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithEdgeChainFromPath:(struct CGPath { }*)arg1;
- (id)initWithEdgeFromPoint:(struct CGPoint { double x1; double x2; })arg1 toPoint:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithEdgeLoopFromPath:(struct CGPath { }*)arg1;
- (id)initWithPolygonFromPath:(struct CGPath { }*)arg1;
- (id)initWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1;
- (id)initWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2;
- (id)initWithRectangleOfSize:(struct CGSize { double x1; double x2; })arg1 center:(struct CGPoint { double x1; double x2; })arg2 edgeRadius:(float)arg3;
- (bool)isDynamic;
- (bool)isResting;
- (id)joints;
- (double)linearDamping;
- (double)mass;
- (struct shared_ptr<PKPath> { struct PKPath {} *x1; struct __shared_weak_count {} *x2; })outline;
- (bool)pinned;
- (struct CGPoint { double x1; double x2; })position;
- (id /* block */)postStepBlock;
- (double)radius;
- (void)reapplyScale:(double)arg1 yScale:(double)arg2;
- (id)representedObject;
- (double)restitution;
- (double)rotation;
- (void)setActive:(bool)arg1;
- (void)setAffectedByGravity:(bool)arg1;
- (void)setAllowsRotation:(bool)arg1;
- (void)setAngularDamping:(double)arg1;
- (void)setAngularVelocity:(double)arg1;
- (void)setCategoryBitMask:(unsigned int)arg1;
- (void)setCharge:(double)arg1;
- (void)setCollisionBitMask:(unsigned int)arg1;
- (void)setContactTestBitMask:(unsigned int)arg1;
- (void)setDensity:(double)arg1;
- (void)setDynamic:(bool)arg1;
- (void)setFieldBitMask:(unsigned int)arg1;
- (void)setFriction:(double)arg1;
- (void)setLinearDamping:(double)arg1;
- (void)setMass:(double)arg1;
- (void)setOutline:(struct shared_ptr<PKPath> { struct PKPath {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)setPinned:(bool)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPostStepBlock:(id /* block */)arg1;
- (void)setRadius:(double)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setResting:(bool)arg1;
- (void)setRestitution:(double)arg1;
- (void)setRotation:(double)arg1;
- (void)setUsesPreciseCollisionDetection:(bool)arg1;
- (void)setVelocity:(struct CGVector { double x1; double x2; })arg1;
- (void)set_allowSleep:(bool)arg1;
- (void)set_body:(struct b2Body { bool x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; unsigned short x7; int x8; struct b2Transform { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_9_1_1; struct b2Rot { float x_2_2_1; float x_2_2_2; } x_9_1_2; } x9; struct b2Transform { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_10_1_1; struct b2Rot { float x_2_2_1; float x_2_2_2; } x_10_1_2; } x10; struct b2Sweep { struct b2Vec2 { float x_1_2_1; float x_1_2_2; } x_11_1_1; union b2Position { struct { struct b2Vec2 { float x_1_4_1; float x_1_4_2; } x_1_3_1; float x_1_3_2; float x_1_3_3; } x_2_2_1; } x_11_1_2; union b2Position { struct { struct b2Vec2 { float x_1_4_1; float x_1_4_2; } x_1_3_1; float x_1_3_2; float x_1_3_3; } x_3_2_1; } x_11_1_3; float x_11_1_4; } x11; struct b2Vec2 { float x_12_1_1; float x_12_1_2; } x12; float x13; struct b2Vec2 { float x_14_1_1; float x_14_1_2; } x14; float x15; struct b2World {} *x16; struct b2Body {} *x17; struct b2Body {} *x18; struct b2Fixture {} *x19; int x20; struct b2JointEdge {} *x21; }*)arg1;
- (void)set_bodyDef:(struct b2BodyDef { bool x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; struct b2Vec2 { float x_7_1_1; float x_7_1_2; } x7; float x8; struct b2Vec2 { float x_9_1_1; float x_9_1_2; } x9; float x10; float x11; float x12; float x13; bool x14; bool x15; bool x16; bool x17; bool x18; void *x19; })arg1;
- (void)set_inUse:(bool)arg1;
- (void)set_joints:(id)arg1;
- (void)set_world:(id)arg1;
- (bool)usesPreciseCollisionDetection;
- (struct CGVector { double x1; double x2; })velocity;
- (struct PKPath { float x1; struct vector<PKPoint, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_2_1_1; struct { /* ? */ } *x_2_1_2; struct __compressed_pair<PKPoint *, std::__1::allocator<PKPoint> > { struct { /* ? */ } *x_3_2_1; } x_2_1_3; } x2; struct CGPath {} *x3; }*)volume;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

- (id)_descriptionClassName;
- (bool)isKindOfClass:(Class)arg1;
- (id)node;

@end
