/* made by EzioChiu
   Image: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
 */

@interface RPPictureInPictureWindow : UIWindow {
    UIView * _contentView;
}

@property (nonatomic, retain) UIView *contentView;

- (void).cxx_destruct;
- (id)contentView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setContentView:(id)arg1;

@end
