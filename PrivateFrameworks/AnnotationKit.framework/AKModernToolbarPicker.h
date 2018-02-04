/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKModernToolbarPicker : UIControl {
    AKController * _controller;
    long long  _currentTag;
    UIStackView * _stackview;
}

@property (nonatomic) AKController *controller;
@property (nonatomic) long long currentTag;
@property (nonatomic, retain) UIStackView *stackview;

- (void).cxx_destruct;
- (id)controller;
- (long long)currentTag;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 controller:(id)arg2;
- (void)revalidateItems:(id)arg1;
- (void)setController:(id)arg1;
- (void)setCurrentTag:(long long)arg1;
- (void)setStackview:(id)arg1;
- (id)stackview;

@end
