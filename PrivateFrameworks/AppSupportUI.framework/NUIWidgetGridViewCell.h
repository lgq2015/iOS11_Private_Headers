/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
 */

@interface NUIWidgetGridViewCell : NUIContainerStackView <NUIContainerStackViewDelegate, NUIWidgetGridViewCell> {
    bool  _accessibilityEnabled;
    struct { 
        double leading; 
        double trailing; 
    }  _donatableSpace;
    bool  _donatableSpaceIsValid;
    NUIWidgetGridView * _gridView;
    unsigned long long  _index;
    struct CGSize { 
        double width; 
        double height; 
    }  _measuredSize;
    double  _width;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NUIWidgetGridView *gridView;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)_createButtonWithGridView:(id)arg1 item:(id)arg2;
- (id)_createLabelForStyle:(long long)arg1;
- (void)_didTapButton:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (id)currentFont;
- (struct { double x1; double x2; })donatableSpace;
- (struct { double x1; double x2; })donatableSpaceAllowRemeasure:(bool)arg1;
- (id)gridView;
- (id)imageView;
- (unsigned long long)index;
- (id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3;
- (void)invalidateIntrinsicContentSize;
- (id)subtitleLabel;
- (id)titleLabel;

@end
