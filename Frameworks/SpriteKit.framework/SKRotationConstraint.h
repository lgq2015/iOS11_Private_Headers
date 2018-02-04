/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKRotationConstraint : SKConstraint {
    SKRange * _zRotationRange;
}

@property (copy) SKRange *zRotationRange;

+ (id)constraintWithZRotationRange:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZRotationRange:(id)arg1;
- (void)setZRotationRange:(id)arg1;
- (id)zRotationRange;

@end
