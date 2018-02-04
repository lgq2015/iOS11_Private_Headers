/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKAnimate : SKAction {
    struct SKCAnimate { int (**x1)(); unsigned int x2; float x3; id /* block */ x4; id x5; double x6; double x7; float x8; float x9; double x10; bool x11; bool x12; id /* block */ x13; long long x14; float x15; float x16; float x17; float x18; struct vector<SKTexture *, std::__1::allocator<SKTexture *> > { id *x_19_1_1; id x_19_1_2; /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_19_1_3; void*x_19_1_4; BOOL x_19_1_5; out void*x_19_1_6; void*x_19_1_7; const void*x_19_1_8; short x_19_1_9; short x_19_1_10; void*x_19_1_11; double x_19_1_12; void*x_19_1_13; void*x_19_1_14; void*x_19_1_15; int x_19_1_16; const void*x_19_1_17; unsigned short x_19_1_18; void*x_19_1_19; void*x_19_1_20; void*x_19_1_21; void*x_19_1_22; void*x_19_1_23; void*x_19_1_24; const void*x_19_1_25; void*x_19_1_26; char *x_19_1_27; void*x_19_1_28; void*x_19_1_29; short x_19_1_30; void*x_19_1_31; const out in void*x_19_1_32; void*x_19_1_33; char *x_19_1_34; void*x_19_1_35; void*x_19_1_36; short x_19_1_37; void*x_19_1_38; double x_19_1_39; SEL x_19_1_40; SEL x_19_1_41; void*x_19_1_42; void*x_19_1_43; void*x_19_1_44; SEL x_19_1_45; SEL x_19_1_46; void*x_19_1_47; long x_19_1_48; long x_19_1_49; out BOOL x_19_1_50; void*x_19_1_51; void*x_19_1_52; out const void*x_19_1_53; unsigned short x_19_1_54; void*x_19_1_55; void*x_19_1_56; void*x_19_1_57; } x19; } * _mycaction;
    NSArray * _textures;
}

@property (nonatomic) double timePerFrame;

+ (id)animateWithNormalTextures:(id)arg1 timePerFrame:(double)arg2 resize:(bool)arg3 restore:(bool)arg4;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(bool)arg3 restore:(bool)arg4;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)setDuration:(double)arg1;
- (void)setTimePerFrame:(double)arg1;
- (double)timePerFrame;

@end
