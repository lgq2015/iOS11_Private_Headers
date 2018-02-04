/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface RoundProgressViewController : UIViewController <UIGestureRecognizerDelegate> {
    bool  _didFadeOut;
    UILabel * _label;
    UIButton * _leftCancelButton;
    RoundProgressView * _progressView;
    UIButton * _rightCancelButton;
    UIScreenEdgePanGestureRecognizer * _screenEdgePanLeftGestureRecognizer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didFadeOut;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) NSString *labelText;
@property (nonatomic, retain) UIButton *leftCancelButton;
@property (nonatomic) float progress;
@property (nonatomic, retain) RoundProgressView *progressView;
@property (nonatomic, retain) UIButton *rightCancelButton;
@property (nonatomic, retain) UIScreenEdgePanGestureRecognizer *screenEdgePanLeftGestureRecognizer;
@property (nonatomic) bool showCancelButton;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cancelButton;
- (void)configureView;
- (bool)didFadeOut;
- (void)handlePanFromEdge:(id)arg1;
- (id)label;
- (id)labelText;
- (id)leftCancelButton;
- (id)nibBundle;
- (bool)prefersStatusBarHidden;
- (float)progress;
- (id)progressView;
- (id)rightCancelButton;
- (id)screenEdgePanLeftGestureRecognizer;
- (void)setCancelTarget:(id)arg1 action:(SEL)arg2;
- (void)setDidFadeOut:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelText:(id)arg1;
- (void)setLeftCancelButton:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)setProgressView:(id)arg1;
- (void)setRightCancelButton:(id)arg1;
- (void)setScreenEdgePanLeftGestureRecognizer:(id)arg1;
- (void)setShowCancelButton:(bool)arg1;
- (bool)showCancelButton;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
