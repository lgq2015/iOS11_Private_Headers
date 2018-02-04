/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXUpNextView : AVBackgroundView {
    NSArray * _accessoryViews;
    NSMutableDictionary * _backgroundViews;
    UIView * _contentView;
    NSLayoutConstraint * _contentViewTrailingLayoutConstraint;
}

@property (nonatomic, retain) NSArray *accessoryViews;
@property (nonatomic, retain) NSMutableDictionary *backgroundViews;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) NSLayoutConstraint *contentViewTrailingLayoutConstraint;

- (void).cxx_destruct;
- (id)accessoryViews;
- (id)backgroundViewForView:(id)arg1;
- (id)backgroundViews;
- (id)contentView;
- (id)contentViewTrailingLayoutConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)keyForView:(id)arg1;
- (void)removeBackgroundViewForView:(id)arg1;
- (void)setAccessoryViews:(id)arg1;
- (void)setAccessoryViews:(id)arg1 animated:(bool)arg2;
- (void)setBackgroundView:(id)arg1 forView:(id)arg2;
- (void)setBackgroundViews:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewTrailingLayoutConstraint:(id)arg1;
- (void)updateConstraints;

@end
