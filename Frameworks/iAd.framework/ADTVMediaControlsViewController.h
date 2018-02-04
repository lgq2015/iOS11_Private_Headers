/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADTVMediaControlsViewController : UIViewController <ADTVMediaControlsViewDelegate, UIGestureRecognizerDelegate> {
    <ADTVMediaControlsViewControllerDelegate> * _delegate;
    ADAdImpressionPublicAttributes * _impressionProperties;
    ADTVMediaControlsView * _mediaControlsView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ADTVMediaControlsViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ADAdImpressionPublicAttributes *impressionProperties;
@property (nonatomic, retain) ADTVMediaControlsView *mediaControlsView;
@property (readonly) Class superclass;

- (void)_addViewConstraints;
- (void)adtvMediaControlsViewActionButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsViewPrivacyButtonWasPressed:(id)arg1;
- (void)adtvMediaControlsViewSkipButtonWasPressed:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)impressionProperties;
- (id)initWithImpressionProperties:(id)arg1;
- (void)loadView;
- (id)mediaControlsView;
- (void)setDelegate:(id)arg1;
- (void)setImpressionProperties:(id)arg1;
- (void)setMediaControlsView:(id)arg1;
- (void)startSkipThresholdTimer;
- (void)updateElapsedTime:(double)arg1 totalTime:(double)arg2;

@end
