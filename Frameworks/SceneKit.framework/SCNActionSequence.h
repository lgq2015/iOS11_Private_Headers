/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionSequence : SCNAction {
    NSArray * _actions;
    struct SCNCActionSequence { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; long long x14; double x15; double x16; double x17; double x18; struct vector<SCNCAction *, std::__1::allocator<SCNCAction *> > { struct SCNCAction {} **x_19_1_1; struct SCNCAction {} **x_19_1_2; struct __compressed_pair<SCNCAction **, std::__1::allocator<SCNCAction *> > { struct SCNCAction {} **x_3_2_1; } x_19_1_3; } x19; unsigned long long x20; double x21; } * _mycaction;
}

+ (id)sequenceWithActions:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCustom;
- (id)reversedAction;

@end
