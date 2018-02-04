/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKFade : SKAction {
    struct SKCFade { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; bool x22; } * _mycaction;
}

+ (id)fadeAlphaBy:(double)arg1 duration:(double)arg2;
+ (id)fadeAlphaTo:(double)arg1 duration:(double)arg2;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)fadeOutWithDuration:(double)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;

@end
