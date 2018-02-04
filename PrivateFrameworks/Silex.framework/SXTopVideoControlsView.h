/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTopVideoControlsView : UIView {
    NSArray * _leadingAccessoryViews;
    NSArray * _trailingAccessoryViews;
}

@property (nonatomic, retain) NSArray *leadingAccessoryViews;
@property (nonatomic, retain) NSArray *trailingAccessoryViews;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)leadingAccessoryViews;
- (void)setLeadingAccessoryViews:(id)arg1;
- (void)setLeadingAccessoryViews:(id)arg1 animated:(bool)arg2;
- (void)setTrailingAccessoryViews:(id)arg1;
- (void)setTrailingAccessoryViews:(id)arg1 animated:(bool)arg2;
- (id)trailingAccessoryViews;
- (void)updateConstraints;

@end
