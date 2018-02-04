/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface UnderlineButton : UIButton {
    float  _linePadding;
}

@property (nonatomic) float linePadding;

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (float)linePadding;
- (void)setLinePadding:(float)arg1;

@end
