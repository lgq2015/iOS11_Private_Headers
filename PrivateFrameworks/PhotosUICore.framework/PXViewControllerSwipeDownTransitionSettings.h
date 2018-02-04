/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXViewControllerSwipeDownTransitionSettings : PXSettings {
    bool  _allowSwipeDown;
    double  _minimumDimmingOpacity;
    PXSwipeDownSettings * _swipeDownSettings;
}

@property (nonatomic) bool allowSwipeDown;
@property (nonatomic) double minimumDimmingOpacity;
@property (nonatomic, retain) PXSwipeDownSettings *swipeDownSettings;

+ (id)settingsControllerModule;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)allowSwipeDown;
- (double)minimumDimmingOpacity;
- (id)parentSettings;
- (void)setAllowSwipeDown:(bool)arg1;
- (void)setDefaultValues;
- (void)setMinimumDimmingOpacity:(double)arg1;
- (void)setSwipeDownSettings:(id)arg1;
- (id)swipeDownSettings;

@end
