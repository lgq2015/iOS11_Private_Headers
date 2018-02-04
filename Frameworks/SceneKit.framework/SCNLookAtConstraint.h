/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNLookAtConstraint : SCNConstraint {
    bool  _gimbalLockEnabled;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _localFront;
    SCNNode * _target;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _targetOffset;
    struct SCNVector3 { 
        float x; 
        float y; 
        float z; 
    }  _upVector;
}

@property (nonatomic) bool gimbalLockEnabled;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } localFront;
@property (nonatomic, retain) SCNNode *target;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } targetOffset;
@property (nonatomic) struct SCNVector3 { float x1; float x2; float x3; } worldUp;

+ (id)lookAtConstraintWithTarget:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNLookAtConstraint:(id)arg1;
- (void)_customEncodingOfSCNLookAtConstraint:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)gimbalLockEnabled;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (struct SCNVector3 { float x1; float x2; float x3; })localFront;
- (void)setGimbalLockEnabled:(bool)arg1;
- (void)setLocalFront:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setTarget:(id)arg1;
- (void)setTargetOffset:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setUpVector:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setWorldUp:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (id)target;
- (struct SCNVector3 { float x1; float x2; float x3; })targetOffset;
- (struct SCNVector3 { float x1; float x2; float x3; })upVector;
- (struct SCNVector3 { float x1; float x2; float x3; })worldUp;

@end
