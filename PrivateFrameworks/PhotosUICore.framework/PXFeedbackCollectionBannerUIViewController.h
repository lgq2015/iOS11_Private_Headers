/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFeedbackCollectionBannerUIViewController : UIViewController <UIGestureRecognizerDelegate> {
    bool  _alreadyShowingBanner;
    UIDynamicAnimator * _animator;
    double  _autoDismissDuration;
    UIView * _bannerContentView;
    double  _bannerHeight;
    NSString * _bannerMessage;
    NSString * _bannerTitle;
    bool  _bounce;
    unsigned long long  _feedbackCollectionContext;
    double  _hideBannerAnimationDuration;
    bool  _isMSGOnlyBanner;
    double  _showBannerAnimationDuration;
}

@property (nonatomic) double autoDismissDuration;
@property (nonatomic, copy) NSString *bannerMessage;
@property (nonatomic, copy) NSString *bannerTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long feedbackCollectionContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedFeedbackCollectionBanner;

- (void).cxx_destruct;
- (double)autoDismissDuration;
- (void)autoDismissFeedbackBanner:(id)arg1;
- (id)bannerMessage;
- (id)bannerTitle;
- (void)didReceiveMemoryWarning;
- (unsigned long long)feedbackCollectionContext;
- (void)handleTap:(id)arg1;
- (void)hideBanner;
- (void)hideBanner:(bool)arg1;
- (id)init;
- (id)initWithTitle:(id)arg1 inContext:(unsigned long long)arg2;
- (id)initWithTitle:(id)arg1 msg:(id)arg2 inContext:(unsigned long long)arg3;
- (void)setAutoDismissDuration:(double)arg1;
- (void)setBannerMessage:(id)arg1;
- (void)setBannerTitle:(id)arg1;
- (void)setFeedbackCollectionContext:(unsigned long long)arg1;
- (void)setupUIIfNeeded;
- (void)showBanner;
- (void)showBannerWithDelay:(double)arg1;
- (void)showBannerWithDelay:(double)arg1 forDuration:(double)arg2;
- (void)showFeedbackCollectionUI;
- (void)upSwipe:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
