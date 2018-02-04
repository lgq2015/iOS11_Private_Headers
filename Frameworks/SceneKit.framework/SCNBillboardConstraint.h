/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNBillboardConstraint : SCNConstraint {
    unsigned long long  _freeAxes;
}

@property (nonatomic) unsigned long long freeAxes;

+ (id)billboardConstraint;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)freeAxes;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setFreeAxes:(unsigned long long)arg1;

@end
