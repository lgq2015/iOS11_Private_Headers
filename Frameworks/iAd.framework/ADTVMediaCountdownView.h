/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADTVMediaCountdownView : UIView {
    UILabel * _adLabel;
    UILabel * _remainingTimeLabel;
}

@property (nonatomic, retain) UILabel *adLabel;
@property (nonatomic, retain) UILabel *remainingTimeLabel;

- (void)_addViewConstraints;
- (id)adLabel;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)remainingTimeLabel;
- (void)setAdLabel:(id)arg1;
- (void)setRemainingTimeLabel:(id)arg1;
- (void)updateElapsedTime:(double)arg1 totalTime:(double)arg2;

@end
