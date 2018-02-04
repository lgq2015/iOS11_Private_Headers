/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKCustomAction : SKAction {
    struct SKCCustomAction { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; id /* block */ x19; } * _mycaction;
}

+ (id)customActionWithDuration:(double)arg1 actionBlock:(id /* block */)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
