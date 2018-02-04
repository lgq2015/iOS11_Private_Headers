/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNDistanceConstraint : SCNConstraint {
    bool  _keepTargetDirection;
    float  _maximumDirectionAngle;
    float  _maximumDistance;
    float  _minimumDistance;
    SCNNode * _target;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _targetDirection;
}

@property (nonatomic) double maximumDistance;
@property (nonatomic) double minimumDistance;
@property (nonatomic, retain) SCNNode *target;

+ (id)distanceConstraint;
+ (id)distanceConstraintWithTarget:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNDistanceConstraint:(id)arg1;
- (void)_customEncodingOfSCNDistanceConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)keepTargetDirection;
- (double)maximumDistance;
- (double)minimumDistance;
- (void)setKeepTargetDirection:(bool)arg1;
- (void)setMaximumDistance:(double)arg1;
- (void)setMinimumDistance:(double)arg1;
- (void)setTarget:(id)arg1;
- (void)setTargetDirection:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (id)target;
- (struct SCNVector3 { float x1; float x2; float x3; })targetDirection;

@end
