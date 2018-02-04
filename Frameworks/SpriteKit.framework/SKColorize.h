/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKColorize : SKAction {
    struct SKCColorize { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; struct { float x_19_1_1; float x_19_1_2; float x_19_1_3; float x_19_1_4; } x19; float x20; struct { float x_21_1_1; float x_21_1_2; float x_21_1_3; float x_21_1_4; } x21; float x22; struct { float x_23_1_1; float x_23_1_2; float x_23_1_3; float x_23_1_4; } x23; float x24; bool x25; } * _mycaction;
}

+ (id)colorizeWithColor:(id)arg1 colorBlendFactor:(double)arg2 duration:(double)arg3;
+ (id)colorizeWithColorBlendFactor:(double)arg1 duration:(double)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
