/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKResize : SKAction {
    struct SKCResize { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; float x19; struct { float x_20_1_1; float x_20_1_2; } x20; struct { float x_21_1_1; float x_21_1_2; } x21; struct { float x_22_1_1; float x_22_1_2; } x22; bool x23; bool x24; bool x25; bool x26; } * _mycaction;
}

+ (id)resizeByWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;
+ (id)resizeToHeight:(double)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(double)arg1 duration:(double)arg2;
+ (id)resizeToWidth:(double)arg1 height:(double)arg2 duration:(double)arg3;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
