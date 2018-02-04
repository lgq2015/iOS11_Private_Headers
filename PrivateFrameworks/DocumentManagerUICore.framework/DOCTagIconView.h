/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
 */

@interface DOCTagIconView : UIView {
    UIVibrancyEffect * _noneVibrancyEffect;
    UIView<DOCTagIconView> * _subview;
    UIVisualEffectView * _vibrantEffectView;
}

@property (nonatomic, readonly) UIVibrancyEffect *noneVibrancyEffect;
@property (nonatomic, readonly) UIView<DOCTagIconView> *subview;
@property (nonatomic) long long tagColor;
@property (nonatomic, readonly) UIVisualEffectView *vibrantEffectView;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 subview:(id)arg2;
- (id)noneVibrancyEffect;
- (void)setTagColor:(long long)arg1;
- (id)subview;
- (long long)tagColor;
- (id)vibrancyEffect;
- (id)vibrantEffectView;

@end
