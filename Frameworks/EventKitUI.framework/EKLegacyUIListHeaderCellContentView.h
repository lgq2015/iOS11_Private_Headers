/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKLegacyUIListHeaderCellContentView : UIView {
    double  _date;
    bool  _indentsForDots;
    bool  _showWeekNumber;
}

@property (nonatomic) double date;
@property (nonatomic) bool indentsForDots;
@property (nonatomic) bool showWeekNumber;

- (id)_normalTextColor;
- (id)_normalTextShadowColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_rectForOffetTextShadow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_weekNumberFont;
- (double)date;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)drawTitle:(id)arg1 withColor:(id)arg2 withShadowColor:(id)arg3 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (bool)indentsForDots;
- (void)setDate:(double)arg1;
- (void)setIndentsForDots:(bool)arg1;
- (void)setShowWeekNumber:(bool)arg1;
- (bool)showWeekNumber;

@end
