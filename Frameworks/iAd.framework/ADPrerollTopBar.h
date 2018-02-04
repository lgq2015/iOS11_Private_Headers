/* made by EzioChiu
   Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollTopBar : UIView {
    <ADPrerollTopBarDelegate> * _delegate;
    ADPrerollButton * _doneButton;
    bool  _isFullscreen;
    bool  _layoutForExpandedSize;
    ADProgressView * _progressView;
    UIStatusBar * _statusBar;
}

@property (nonatomic) <ADPrerollTopBarDelegate> *delegate;
@property (nonatomic, retain) ADPrerollButton *doneButton;
@property (nonatomic) bool isFullscreen;
@property (nonatomic) bool layoutForExpandedSize;
@property (nonatomic, retain) ADProgressView *progressView;
@property (nonatomic, retain) UIStatusBar *statusBar;

- (void)_doneButtonTapped:(id)arg1;
- (void)_scaleToFillButtonTapped:(id)arg1;
- (void)_scaleToFitButtonTapped:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)doneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isFullscreen;
- (bool)layoutForExpandedSize;
- (void)layoutSubviews;
- (id)progressView;
- (double)requiredHeight;
- (void)setDelegate:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void)setElapsedTime:(double)arg1 totalTime:(double)arg2;
- (void)setIsFullscreen:(bool)arg1;
- (void)setLayoutForExpandedSize:(bool)arg1;
- (void)setProgressView:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)statusBar;

@end
