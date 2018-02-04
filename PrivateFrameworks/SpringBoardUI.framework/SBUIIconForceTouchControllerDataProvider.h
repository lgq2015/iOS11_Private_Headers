/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIIconForceTouchControllerDataProvider : NSObject {
    SBUIIconForceTouchController * _controller;
    <SBUIIconForceTouchControllerDataSource> * _dataSource;
    struct { 
        unsigned int iconForceTouchController_iconImageInsetsForGestureRecognizer : 1; 
        unsigned int iconForceTouchController_iconImageCornerRadiusForGestureRecognizer : 1; 
        unsigned int iconForceTouchController_wrapperViewCornerRadiusForGestureRecognizer : 1; 
        unsigned int iconForceTouchController_parallaxSettingsForGestureRecognizer : 1; 
        unsigned int iconForceTouchController_zoomDownViewForGestureRecognizer : 1; 
        unsigned int iconForceTouchController_zoomDownCenterForGestureRecognizer : 1; 
    }  _dataSourceRespondsTo;
    SBUIForceTouchGestureRecognizer * _gestureRecognizer;
}

@property (nonatomic, readonly) SBUIIconForceTouchController *controller;
@property (nonatomic, readonly) <SBUIIconForceTouchControllerDataSource> *dataSource;
@property (nonatomic, readonly) SBUIForceTouchGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) UIWindow *gestureRecognizerWindow;
@property (nonatomic, readonly) double iconImageCornerRadius;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } iconImageInsets;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } iconViewFrame;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly) long long layoutStyle;
@property (nonatomic, readonly) SBFParallaxSettings *parallaxSettings;
@property (nonatomic, readonly) UIViewController *primaryViewController;
@property (nonatomic, readonly) UIViewController *secondaryViewController;
@property (nonatomic, readonly) double wrapperViewCornerRadius;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } zoomDownCenter;
@property (nonatomic, readonly) UIView *zoomDownView;

- (void).cxx_destruct;
- (id)controller;
- (id)dataSource;
- (id)gestureRecognizer;
- (id)gestureRecognizerWindow;
- (double)iconImageCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconImageInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconViewFrame;
- (id)init;
- (id)initWithDataSource:(id)arg1 controller:(id)arg2 gestureRecognizer:(id)arg3;
- (long long)interfaceOrientation;
- (long long)layoutStyle;
- (id)newIconViewCopy;
- (id)parallaxSettings;
- (id)primaryViewController;
- (id)secondaryViewController;
- (double)wrapperViewCornerRadius;
- (struct CGPoint { double x1; double x2; })zoomDownCenter;
- (id)zoomDownView;

@end
