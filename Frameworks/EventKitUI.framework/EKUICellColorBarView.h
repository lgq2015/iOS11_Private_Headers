/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUICellColorBarView : UIView {
    UIColor * _color;
    bool  _dashedLines;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic) bool dashedLines;

- (void).cxx_destruct;
- (id)color;
- (bool)dashedLines;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setColor:(id)arg1;
- (void)setDashedLines:(bool)arg1;

@end