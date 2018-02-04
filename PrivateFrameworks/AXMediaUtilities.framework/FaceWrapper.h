/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface FaceWrapper : NSObject {
    bool  _blinking;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    int  _imageHeight;
    bool  _imageMirrored;
    int  _imageWidth;
    long long  _screenOrientation;
    int  _size;
    bool  _smiling;
}

@property (nonatomic) bool blinking;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) int imageHeight;
@property (nonatomic) bool imageMirrored;
@property (nonatomic) int imageWidth;
@property (nonatomic) long long screenOrientation;
@property (nonatomic) int size;
@property (nonatomic) bool smiling;

- (bool)blinking;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (int)computeFaceLocationUsingLeftRightLoc:(long long)arg1 andTopBottomLoc:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getFaceCoordsInImage;
- (long long)getFaceLeftRightLocationInImage;
- (int)getFaceLocationInImage;
- (int)getFaceLocationOnScreen;
- (long long)getFaceTopBottomLocationInImage;
- (int)imageHeight;
- (bool)imageMirrored;
- (int)imageWidth;
- (bool)isLargeFace;
- (long long)screenOrientation;
- (void)setBlinking:(bool)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImageHeight:(int)arg1;
- (void)setImageMirrored:(bool)arg1;
- (void)setImageWidth:(int)arg1;
- (void)setScreenOrientation:(long long)arg1;
- (void)setSize:(int)arg1;
- (void)setSmiling:(bool)arg1;
- (int)size;
- (bool)smiling;
- (void)swap:(long long*)arg1 with:(long long*)arg2;

@end
