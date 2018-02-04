/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUGridMagnifiedImageViewController : UIViewController {
    bool  _canShowFullScreen;
    id  _delegate;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gestureWindLocation;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSIndexPath * _itemIndexPath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _itemWindFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastLocation;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _magnifiedDragEdgeInsets;
    struct CGSize { 
        double width; 
        double height; 
    }  _magnifiedSize;
    PUGridMagnifiedView * _magnifiedView;
    double  _magnifiedYOffset;
    struct CGSize { 
        double width; 
        double height; 
    }  _shadowOffset;
    double  _shadowOpacity;
    double  _shadowRadius;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trackingWindFrame;
}

@property (nonatomic, readonly) bool canShowFullScreen;
@property (nonatomic) id delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } gestureWindLocation;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) NSIndexPath *itemIndexPath;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } itemWindFrame;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastLocation;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } magnifiedDragEdgeInsets;
@property (nonatomic) struct CGSize { double x1; double x2; } magnifiedSize;
@property (nonatomic, retain) PUGridMagnifiedView *magnifiedView;
@property (nonatomic) double magnifiedYOffset;
@property (nonatomic) struct CGSize { double x1; double x2; } shadowOffset;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackingWindFrame;

- (void).cxx_destruct;
- (void)beginMagnificationAnimated:(bool)arg1;
- (bool)canShowFullScreen;
- (void)continueMagnification;
- (id)delegate;
- (bool)gestureInNewLocation;
- (struct CGPoint { double x1; double x2; })gestureWindLocation;
- (void)hideMagnifiedThumbnailWithAnimation:(bool)arg1;
- (id)imageForIndexPath:(id)arg1;
- (id)imageForMagnifyLocation:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithDelegate:(id)arg1;
- (id)installMagnifiedView;
- (bool)isValidMagnifyLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)itemIndexPath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })itemWindFrame;
- (struct CGPoint { double x1; double x2; })lastLocation;
- (void)loadView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })magnifiedDragEdgeInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })magnifiedImageWindFrame;
- (struct CGSize { double x1; double x2; })magnifiedSize;
- (id)magnifiedView;
- (double)magnifiedYOffset;
- (void)prepareForRelease;
- (void)setDelegate:(id)arg1;
- (void)setGestureWindLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setItemIndexPath:(id)arg1;
- (void)setItemWindFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLastLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setMagnifiedDragEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMagnifiedSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMagnifiedView:(id)arg1;
- (void)setMagnifiedYOffset:(double)arg1;
- (void)setShadowOffset:(struct CGSize { double x1; double x2; })arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (void)setTrackingWindFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setupMagnifiedView;
- (struct CGSize { double x1; double x2; })shadowOffset;
- (double)shadowOpacity;
- (double)shadowRadius;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackingWindFrame;

@end
