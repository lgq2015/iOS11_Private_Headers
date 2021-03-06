/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextCollectionViewFlowLayoutAttributes : UICollectionViewLayoutAttributes {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _computedFrame;
    double  _darkeningAlphaUniform;
    long long  _layoutMode;
    double  _scale;
    double  _shadowAlpha;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unitFrameOnScreen;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } computedFrame;
@property (nonatomic) double darkeningAlphaUniform;
@property (nonatomic) long long layoutMode;
@property (nonatomic) double scale;
@property (nonatomic) double shadowAlpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unitFrameOnScreen;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computedFrame;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)darkeningAlphaUniform;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)layoutMode;
- (double)scale;
- (void)setComputedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDarkeningAlphaUniform:(double)arg1;
- (void)setLayoutMode:(long long)arg1;
- (void)setScale:(double)arg1;
- (void)setShadowAlpha:(double)arg1;
- (void)setUnitFrameOnScreen:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)shadowAlpha;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unitFrameOnScreen;

@end
