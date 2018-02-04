/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

@interface MUPDFPageLabelView : UIView {
    UIBlurEffect * _blurEffect;
    UIVisualEffectView * _blurView;
    UILabel * _label;
    NSTimer * _timer;
    unsigned long long  currentPageIndex;
}

@property (nonatomic) unsigned long long currentPageIndex;
@property (getter=isTimerInstalled, nonatomic, readonly) bool timerInstalled;

- (void).cxx_destruct;
- (double)_fadeOutDelay;
- (double)_fadeOutDuration;
- (void)clearTimer;
- (unsigned long long)currentPageIndex;
- (void)dealloc;
- (void)fadeOut;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isTimerInstalled;
- (void)setCurrentPageIndex:(unsigned long long)arg1;
- (void)setText:(id)arg1;
- (void)showNowInSuperView:(id)arg1 atOrigin:(struct CGPoint { double x1; double x2; })arg2 withText:(id)arg3 animated:(bool)arg4;
- (void)sizeToFit;

@end
