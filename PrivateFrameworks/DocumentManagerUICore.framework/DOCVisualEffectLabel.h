/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCVisualEffectLabel : UIView {
    UILabel * _label;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic, copy) UIVisualEffect *effect;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, readonly) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)DOCVisualEffectLabelSharedInitWithEffect:(id)arg1;
- (id)effect;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 effect:(id)arg2;
- (id)label;
- (void)setEffect:(id)arg1;
- (id)viewForLastBaselineLayout;
- (id)visualEffectView;

@end