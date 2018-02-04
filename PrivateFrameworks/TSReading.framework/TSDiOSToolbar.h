/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDiOSToolbar : UIToolbar {
    UIImage * mBackgroundImage;
    bool  mDrawsBackground;
    struct CGSize { 
        double width; 
        double height; 
    }  mShadowOffset;
    double  mShadowOpacity;
    double  mShadowRadius;
    double  mShadowX;
}

@property (nonatomic, retain) UIImage *backgroundImage;
@property (nonatomic) bool drawsBackground;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) double shadowX;

- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)backgroundImage;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)drawsBackground;
- (void)layoutSubviews;
- (void)p_updateLayerFlags;
- (void)setBackgroundImage:(id)arg1;
- (void)setDrawsBackground:(bool)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setShadowX:(double)arg1;
- (void)setupShadowPath;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (double)shadowRadius;
- (double)shadowX;

@end
