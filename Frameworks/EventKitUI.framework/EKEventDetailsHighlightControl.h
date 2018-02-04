/* made by EzioChiu
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKEventDetailsHighlightControl : UIControl {
    UIColor * _actionColor;
    UILabel * _actionLabel;
    NSString * _actionText;
    NSLayoutConstraint * _bottomMarginConstraint;
    UIImageView * _iconStack;
    NSLayoutConstraint * _interLabelPaddingConstraint;
    NSArray * _justSubtitleVisibleContraints;
    NSArray * _justTitleAndActionVisibleContraints;
    NSArray * _justTitleVisibleContraints;
    UILabel * _subtitleLabel;
    NSString * _subtitleText;
    NSArray * _titleAndSubtitleVisibleContraints;
    UILabel * _titleLabel;
    NSLayoutConstraint * _topMarginConstraint;
}

@property (nonatomic, readonly) UILabel *actionLabel;
@property (nonatomic, readonly, retain) NSLayoutConstraint *bottomMarginConstraint;
@property (nonatomic, readonly) UIImageView *iconStack;
@property (nonatomic, readonly, retain) NSLayoutConstraint *interLabelPaddingConstraint;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (nonatomic, readonly, retain) NSLayoutConstraint *topMarginConstraint;

+ (double)bottomMarginConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (bool)requiresConstraintBasedLayout;
+ (id)subtitleColor;
+ (id)subtitleFont;
+ (id)titleFont;
+ (double)topMarginConstant;

- (void).cxx_destruct;
- (void)_updateSubtitleAndActionText;
- (void)_updateTitleAndSubtitleConstraints;
- (id)actionLabel;
- (id)bottomMarginConstraint;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)iconStack;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)interLabelPaddingConstraint;
- (void)setActionText:(id)arg1 color:(id)arg2;
- (void)setIconImage:(id)arg1;
- (void)setSubtitleAttributedText:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)topMarginConstraint;

@end
