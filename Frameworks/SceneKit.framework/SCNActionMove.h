/* made by EzioChiu
   Image: /System/Library/Frameworks/SceneKit.framework/SceneKit
 */

@interface SCNActionMove : SCNAction {
    struct SCNCActionMove { int (**x1)(); float x2; id /* block */ x3; id x4; double x5; double x6; double x7; double x8; double x9; bool x10; bool x11; id /* block */ x12; struct __CFString {} *x13; long long x14; double x15; double x16; double x17; double x18; double x19; bool x20; bool x21; } * _mycaction;
}

+ (id)moveBy:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)moveTo:(struct SCNVector3 { float x1; float x2; float x3; })arg1 duration:(double)arg2;
+ (id)moveToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isRelative;
- (id)parameters;
- (id)reversedAction;

@end
