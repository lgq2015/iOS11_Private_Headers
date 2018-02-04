/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView {
    SKUIAttributedStringView * _delegateView;
}

@property (nonatomic, readonly) SKUIAttributedStringView *delegateView;

- (void).cxx_destruct;
- (long long)badgePlacement;
- (double)baselineOffset;
- (id)delegateView;
- (double)firstBaselineOffset;
- (long long)firstLineTopInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layout;
- (void)layoutSubviews;
- (id)requiredBadges;
- (void)setBadgePlacement:(long long)arg1;
- (void)setFirstLineTopInset:(long long)arg1;
- (void)setLayout:(id)arg1;
- (void)setRequiredBadges:(id)arg1;
- (void)setStringTreatment:(long long)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextColorFollowsTintColor:(bool)arg1;
- (void)setTreatmentColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)stringTreatment;
- (id)textColor;
- (bool)textColorFollowsTintColor;
- (id)treatmentColor;
- (bool)usesTallCharacterSet;
- (void)viewWasRecycled;

@end
