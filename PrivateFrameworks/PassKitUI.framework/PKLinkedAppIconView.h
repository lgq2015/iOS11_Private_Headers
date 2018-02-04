/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKLinkedAppIconView : UIView <PKLinkedApplicationObserver> {
    UIVisualEffectView * _blurView;
    WLEasyToHitCustomButton * _iconButton;
    UIImage * _iconImage;
    PKLinkedApplication * _linkedApplication;
    bool  _translucent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PKLinkedApplication *linkedApplication;
@property (readonly) Class superclass;
@property (getter=isTranslucent, nonatomic) bool translucent;

- (void).cxx_destruct;
- (void)_updateBlurMask;
- (void)_updateWithIconImage:(id)arg1 animated:(bool)arg2;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithLinkedApplication:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isTranslucent;
- (void)layoutSubviews;
- (id)linkedApplication;
- (void)linkedApplicationDidChangeState:(id)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setTranslucent:(bool)arg1;
- (void)tapped:(id)arg1;

@end
