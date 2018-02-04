/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIAppIconForceTouchControllerDataProvider : NSObject {
    SBUIAppIconForceTouchController * _controller;
    <SBUIAppIconForceTouchControllerDataSource> * _dataSource;
    struct { 
        unsigned int appIconForceTouchController_applicationBundleIdentifierForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_applicationBundleURLForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_applicationShortcutWidgetBundleIdentifierForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_applicationShortcutItemsForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_iconImageInsetsForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_iconImageCornerRadiusForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_parallaxSettingsForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_zoomDownViewForGestureRecognizer : 1; 
        unsigned int appIconForceTouchController_zoomDownCenterForGestureRecognizer : 1; 
    }  _dataSourceRespondsTo;
    SBUIForceTouchGestureRecognizer * _gestureRecognizer;
}

@property (nonatomic, readonly) NSString *applicationBundleIdentifier;
@property (nonatomic, readonly) NSURL *applicationBundleURL;
@property (nonatomic, readonly) NSArray *applicationShortcutItems;
@property (nonatomic, readonly) NSString *applicationShortcutWidgetBundleIdentifier;
@property (nonatomic, readonly) SBUIAppIconForceTouchController *controller;
@property (nonatomic, readonly) <SBUIAppIconForceTouchControllerDataSource> *dataSource;
@property (nonatomic, readonly) SBUIForceTouchGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly) double iconImageCornerRadius;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } iconImageInsets;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } iconViewFrame;
@property (nonatomic, readonly) SBFParallaxSettings *parallaxSettings;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } zoomDownCenter;
@property (nonatomic, readonly) UIView *zoomDownView;

- (void).cxx_destruct;
- (id)applicationBundleIdentifier;
- (id)applicationBundleURL;
- (id)applicationShortcutItems;
- (id)applicationShortcutWidgetBundleIdentifier;
- (id)controller;
- (id)dataSource;
- (id)gestureRecognizer;
- (double)iconImageCornerRadius;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })iconImageInsets;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })iconViewFrame;
- (id)init;
- (id)initWithDataSource:(id)arg1 controller:(id)arg2 gestureRecognizer:(id)arg3;
- (id)newIconViewCopy;
- (id)parallaxSettings;
- (struct CGPoint { double x1; double x2; })zoomDownCenter;
- (id)zoomDownView;

@end