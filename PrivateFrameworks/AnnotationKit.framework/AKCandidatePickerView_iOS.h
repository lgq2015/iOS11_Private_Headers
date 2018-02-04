/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKCandidatePickerView_iOS : UIView {
    SEL  _action;
    NSArray * _annotations;
    long long  _blurStyle;
    UIStackView * _buttonContainer;
    NSArray * _buttons;
    NSArray * _itemTags;
    id  _target;
    UIVisualEffectView * _visualEffectView;
}

@property (nonatomic) SEL action;
@property (nonatomic, retain) NSArray *annotations;
@property (nonatomic) long long blurStyle;
@property (nonatomic, retain) UIStackView *buttonContainer;
@property (nonatomic, retain) NSArray *buttons;
@property (nonatomic, retain) NSArray *itemTags;
@property (nonatomic) id target;
@property (nonatomic, retain) UIVisualEffectView *visualEffectView;

- (void).cxx_destruct;
- (void)_createButtonsWithBlurStyle:(long long)arg1;
- (void)_selectBackground:(id)arg1;
- (void)_selectBackground:(id)arg1 animated:(bool)arg2;
- (SEL)action;
- (id)annotations;
- (long long)blurStyle;
- (id)buttonContainer;
- (id)buttons;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 items:(id)arg2 annotations:(id)arg3 target:(id)arg4 action:(SEL)arg5 visualStyle:(long long)arg6;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)itemTags;
- (void)setAction:(SEL)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setBarHidden:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setBlurStyle:(long long)arg1;
- (void)setButtonContainer:(id)arg1;
- (void)setButtons:(id)arg1;
- (void)setItemTags:(id)arg1;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setVisualEffectView:(id)arg1;
- (long long)tagForCandidateItemAtIndex:(unsigned long long)arg1;
- (id)target;
- (id)visualEffectView;

@end
