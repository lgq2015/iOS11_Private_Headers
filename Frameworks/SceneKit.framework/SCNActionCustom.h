/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionCustom : SCNAction {
    struct SCNCActionCustom { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; long long x14; double x15; double x16; double x17; double x18; id /* block */ x19; } * _mycaction;
}

+ (id)customActionWithDuration:(double)arg1 actionBlock:(id /* block */)arg2;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isCustom;
- (id)reversedAction;

@end
