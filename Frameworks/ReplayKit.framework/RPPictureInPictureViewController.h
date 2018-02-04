/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPPictureInPictureViewController : UIViewController {
    UIView * _contentView;
    long long  _currentAlignment;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchPoint;
}

@property (nonatomic) UIView *contentView;
@property (nonatomic) long long currentAlignment;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastTouchPoint;

- (id)contentView;
- (long long)currentAlignment;
- (struct CGPoint { double x1; double x2; })lastTouchPoint;
- (void)setContentView:(id)arg1;
- (void)setCurrentAlignment:(long long)arg1;
- (void)setLastTouchPoint:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)updateContentViewWithAlignment:(long long)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (void)viewDidPan:(id)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
