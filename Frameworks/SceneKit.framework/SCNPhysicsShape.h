/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNPhysicsShape : NSObject <NSCopying, NSSecureCoding> {
    void * _cachedObject;
    struct btCollisionShape { int (**x1)(); int x2; void *x3; } * _collisionShape;
    NSDictionary * _options;
    id  _referenceObject;
    NSArray * _transforms;
}

@property (nonatomic, readonly) NSDictionary *options;
@property (nonatomic, readonly) id sourceObject;
@property (nonatomic, readonly) NSArray *transforms;

+ (id)defaultShapeForGeometry:(id)arg1;
+ (id)shapeWithGeometry:(id)arg1 options:(id)arg2;
+ (id)shapeWithNode:(id)arg1 options:(id)arg2;
+ (id)shapeWithShapes:(id)arg1 transforms:(id)arg2;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNPhysicsShape:(id)arg1;
- (void)_customEncodingOfSCNPhysicsShape:(id)arg1;
- (struct btCollisionShape { int (**x1)(); int x2; void *x3; }*)_handle;
- (void)_setTransforms:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCachedObject:(void*)arg1 options:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1 options:(id)arg2;
- (id)options;
- (id)referenceObject;
- (void)setReferenceObject:(id)arg1;
- (id)sourceObject;
- (id)transforms;

@end
