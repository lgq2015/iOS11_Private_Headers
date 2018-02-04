/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNTransformConstraint : SCNConstraint

+ (id)orientationConstraintInWorldSpace:(bool)arg1 withBlock:(id /* block */)arg2;
+ (id)positionConstraintInWorldSpace:(bool)arg1 withBlock:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (id)transformConstraintInWorldSpace:(bool)arg1 withBlock:(id /* block */)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initOrientationInWorldSpace:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)initPositionInWorld:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)initTransformInWorld:(bool)arg1 withBlock:(id /* block */)arg2;
- (id)initWithCoder:(id)arg1;

@end