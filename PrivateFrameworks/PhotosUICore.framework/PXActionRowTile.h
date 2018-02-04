/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXActionRowTile : UIView <PXReusableObject, PXUIViewBasicTile, PXUIWidgetFooterViewDelegate> {
    UIButton * __button;
    PXUIWidgetFooterView * __footer;
    UIColor * __highlightedBackgroundColor;
    UIColor * __normalBackgroundColor;
    <PXActionRowTileDelegate> * _delegate;
    long long  _idiom;
    NSString * _title;
}

@property (nonatomic, readonly) UIButton *_button;
@property (nonatomic, readonly) PXUIWidgetFooterView *_footer;
@property (nonatomic, readonly) UIColor *_highlightedBackgroundColor;
@property (nonatomic, readonly) UIColor *_normalBackgroundColor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXActionRowTileDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long idiom;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (id)_button;
- (id)_footer;
- (id)_highlightedBackgroundColor;
- (id)_normalBackgroundColor;
- (void)_setupButton;
- (void)_setupDecoratedButton;
- (void)_updateButtonTitle;
- (void)becomeReusable;
- (id)delegate;
- (void)didApplyGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; })arg1 withUserData:(id)arg2;
- (void)handleButtonTap:(id)arg1 forEvent:(id)arg2;
- (long long)idiom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isEnabled;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdiom:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)tintColorDidChange;
- (id)title;
- (id)view;
- (void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2;

@end
