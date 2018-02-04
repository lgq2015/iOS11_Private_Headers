/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKBitmapFIFO : CHPointFIFO {
    struct CGContext { } * _bitmapContext;
    char * _bitmapDataPtr;
    struct CGImage { } * _bitmapImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _bitmapSize;
    bool  _bitmapSizeHasBeenUpdatedOnceForLiveDraw;
    double  _bitmapSizeMultiplier;
    struct CGPath { } * _cachedPath;
    bool  _isInLiveDraw;
    void _lastPoint;
    double  _shadowRadiusInView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _unionDirtyRect;
    UIView * _view;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _viewToBitmapTransform;
}

@property struct CGSize { double x1; double x2; } bitmapSize;
@property bool bitmapSizeHasBeenUpdatedOnceForLiveDraw;
@property double bitmapSizeMultiplier;
@property (nonatomic) bool isInLiveDraw;
@property void lastPoint;
@property double shadowRadiusInView;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } unionDirtyRect;
@property (nonatomic, retain) UIView *view;
@property struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } viewToBitmapTransform;

- (void).cxx_destruct;
- (void)_addPointToBitmap;
- (void)_addSinglePointToBitmap;
- (void)_addToDirtyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_applyDirtyRectToView;
- (void)_clearAllBitmapData;
- (void)_clearCachedPath;
- (struct CGPoint { double x1; double x2; })_convertPointToScreenBacking:(struct CGPoint { double x1; double x2; })arg1;
- (void)_createBitmapContextIfNecessary;
- (void)_createBitmapIfNecessary;
- (void)_updateBitmapSizeFromViewIfNecessary;
- (void)addPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bitmapRectInView;
- (struct CGSize { double x1; double x2; })bitmapSize;
- (bool)bitmapSizeHasBeenUpdatedOnceForLiveDraw;
- (double)bitmapSizeMultiplier;
- (void)clear;
- (struct CGImage { }*)currentBitmap;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (bool)isInLiveDraw;
- (void)lastPoint;
- (struct CGPath { }*)newPathFromCurrentBitmap;
- (void)resetDirtyRect;
- (void)setBitmapSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setBitmapSizeHasBeenUpdatedOnceForLiveDraw:(bool)arg1;
- (void)setBitmapSizeMultiplier:(double)arg1;
- (void)setIsInLiveDraw:(bool)arg1;
- (void)setLastPoint;
- (void)setShadowRadiusInView:(double)arg1;
- (void)setUnionDirtyRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setView:(id)arg1;
- (void)setViewToBitmapTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (double)shadowRadiusInView;
- (void)teardown;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unionDirtyRect;
- (id)view;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })viewToBitmapTransform;

@end
