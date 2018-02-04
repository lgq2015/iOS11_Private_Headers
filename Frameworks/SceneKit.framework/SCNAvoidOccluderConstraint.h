/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNAvoidOccluderConstraint : SCNConstraint {
    unsigned long long  _categoryBitMask;
    id  _delegate;
    float  _offset;
    SCNNode * _target;
}

@property (nonatomic) double bias;
@property (nonatomic) <SCNAvoidOccluderConstraintDelegate> *delegate;
@property (nonatomic) unsigned long long occluderCategoryBitMask;
@property (nonatomic, retain) SCNNode *target;

+ (id)avoidOccluderConstraint;
+ (id)avoidOccluderConstraintWithTarget:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_customDecodingOfSCNAvoidOccluderConstraint:(id)arg1;
- (void)_customEncodingOfSCNAvoidOccluderConstraint:(id)arg1;
- (double)bias;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)occluderCategoryBitMask;
- (void)setBias:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOccluderCategoryBitMask:(unsigned long long)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
