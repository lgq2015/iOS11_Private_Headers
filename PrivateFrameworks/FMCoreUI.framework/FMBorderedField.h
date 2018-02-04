/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMBorderedField : UIView {
    UIColor * _borderColor;
    FMHorizontalRule * _bottomRule;
    bool  _isConfigured;
    FMHorizontalRule * _topRule;
}

@property (nonatomic, retain) UIColor *borderColor;
@property (nonatomic, retain) FMHorizontalRule *bottomRule;
@property (nonatomic) bool isConfigured;
@property (nonatomic, retain) FMHorizontalRule *topRule;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)borderColor;
- (id)bottomRule;
- (void)commonSetup;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isConfigured;
- (void)prepareForInterfaceBuilder;
- (void)setBorderColor:(id)arg1;
- (void)setBottomRule:(id)arg1;
- (void)setIsConfigured:(bool)arg1;
- (void)setTopRule:(id)arg1;
- (id)topRule;

@end
