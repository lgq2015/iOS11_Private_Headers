/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface KenBurnsInfo : NSObject <NSCoding, NSCopying> {
    bool  _allowEffect;
    bool  _effectDisabled;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _endFrame;
    float  _outputAspectRatio;
    struct CGSize { 
        double width; 
        double height; 
    }  _playbackImageSize;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _startFrame;
}

@property (nonatomic) bool allowEffect;
@property (nonatomic) bool effectDisabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } endFrame;
@property (nonatomic) float outputAspectRatio;
@property (nonatomic) struct CGSize { double x1; double x2; } playbackImageSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } startFrame;

+ (id)defaultKBInfo;
+ (id)objectFromPlist:(id)arg1;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adjustRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forRenderingIntent:(int)arg2 currentImageSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)allowEffect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)effectDisabled;
- (void)encodeWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })endFrameForRenderingIntent:(int)arg1 currentImageSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })endTransformToViewSize:(struct CGSize { double x1; double x2; })arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (float)outputAspectRatio;
- (struct CGSize { double x1; double x2; })playbackImageSize;
- (id)plistRepresentation;
- (void)setAllowEffect:(bool)arg1;
- (void)setEffectDisabled:(bool)arg1;
- (void)setEndFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOutputAspectRatio:(float)arg1;
- (void)setPlaybackImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setStartFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })startFrameForRenderingIntent:(int)arg1 currentImageSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })startTransformToViewSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toViewSize:(struct CGSize { double x1; double x2; })arg2;
- (bool)updateKBInfoForNewPlaybackSize:(struct CGSize { double x1; double x2; })arg1;

@end
