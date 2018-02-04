/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNIKConstraint : SCNConstraint {
    SCNNode * _chainRootNode;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _ikTarget;
    NSMutableDictionary * _jointsPerNode;
}

@property (nonatomic, readonly) SCNNode *chainRootNode;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } targetPosition;

+ (id)inverseKinematicsConstraintWithChainRootNode:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNIKConstraint:(id)arg1;
- (void)_customEncodingOfSCNIKConstraint:(id)arg1;
- (void)_didDecodeSCNIKConstraint:(id)arg1;
- (id)chainRootNode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithChainRootNode:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)jointForNode:(id)arg1;
- (double)maxAllowedRotationAngleForJoint:(id)arg1;
- (void)setChainRootNode:(id)arg1;
- (void)setMaxAllowedRotationAngle:(double)arg1 forJoint:(id)arg2;
- (void)setTargetPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })targetPosition;

@end
