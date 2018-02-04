/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUParallaxComputer : NSObject {
    int  _axis;
    long long  _model;
    double  _parallaxFactor;
}

@property (nonatomic) int axis;
@property (nonatomic) long long model;
@property (nonatomic) double parallaxFactor;

- (int)axis;
- (struct CGPoint { double x1; double x2; })contentParallaxOffsetForViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 visibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (long long)model;
- (double)parallaxFactor;
- (void)setAxis:(int)arg1;
- (void)setModel:(long long)arg1;
- (void)setParallaxFactor:(double)arg1;

@end
