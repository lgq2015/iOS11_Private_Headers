/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKLegacyUIListHeaderCell : UIView {
    EKLegacyUIListHeaderCellContentView * _contentView;
    bool  _showWeekNumber;
}

@property (nonatomic) double date;
@property (nonatomic) bool indentsForDots;
@property (nonatomic, readonly) bool reusable;
@property (nonatomic) bool showWeekNumber;

- (void).cxx_destruct;
- (id)_backgroundImage;
- (double)date;
- (bool)indentsForDots;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 date:(double)arg2;
- (bool)reusable;
- (void)setDate:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIndentsForDots:(bool)arg1;
- (void)setNeedsDisplay;
- (void)setOpaque:(bool)arg1;
- (void)setShowWeekNumber:(bool)arg1;
- (bool)showWeekNumber;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
