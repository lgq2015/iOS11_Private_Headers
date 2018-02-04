/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSwipeDownTracker : NSObject {
    bool  _didStartTracking;
    double  _dismissalProgress;
    double  _finalAnimationDuration;
    double  _finalAnimationSpringDamping;
    PXInitialHysteresisNumberFilter * _horizontalTranslationFilter;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialCenter;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialTouchLocation;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _initialTransform;
    unsigned long long  _options;
    bool  _shouldFinishDismissal;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _trackedBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  _trackedCenter;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  _trackedTransform;
    struct PXDisplayVelocity { 
        double x; 
        double y; 
        double scale; 
        double rotation; 
    }  _trackedVelocity;
    PXChangeDirectionNumberFilter * _verticalDirectionFilter;
}

@property (nonatomic) double dismissalProgress;
@property (nonatomic, readonly) double finalAnimationDuration;
@property (nonatomic, readonly) double finalAnimationSpringDamping;
@property (nonatomic, retain) PXInitialHysteresisNumberFilter *horizontalTranslationFilter;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic) bool shouldFinishDismissal;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } trackedBounds;
@property (nonatomic) struct CGPoint { double x1; double x2; } trackedCenter;
@property (nonatomic) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } trackedTransform;
@property (nonatomic) struct PXDisplayVelocity { double x1; double x2; double x3; double x4; } trackedVelocity;
@property (nonatomic, retain) PXChangeDirectionNumberFilter *verticalDirectionFilter;

- (void).cxx_destruct;
- (double)dismissalProgress;
- (double)finalAnimationDuration;
- (double)finalAnimationSpringDamping;
- (id)horizontalTranslationFilter;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (unsigned long long)options;
- (void)setDismissalProgress:(double)arg1;
- (void)setHorizontalTranslationFilter:(id)arg1;
- (void)setShouldFinishDismissal:(bool)arg1;
- (void)setTrackedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTrackedCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setTrackedTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setTrackedVelocity:(struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })arg1;
- (void)setVerticalDirectionFilter:(id)arg1;
- (bool)shouldFinishDismissal;
- (void)startTrackingCenter:(struct CGPoint { double x1; double x2; })arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 transform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 withInitialGestureLocation:(struct CGPoint { double x1; double x2; })arg4;
- (void)trackGestureTranslation:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackedBounds;
- (struct CGPoint { double x1; double x2; })trackedCenter;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })trackedTransform;
- (struct PXDisplayVelocity { double x1; double x2; double x3; double x4; })trackedVelocity;
- (id)verticalDirectionFilter;

@end
