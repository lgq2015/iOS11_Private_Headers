/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeSMIMELockButton : UIButton {
    bool  _canEncrypt;
    UIImageView * _lockedImageView;
    UIImageView * _unlockedImageView;
    bool  _wantsEncryption;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  touchInsets;
}

@property (nonatomic) bool canEncrypt;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } touchInsets;
@property (nonatomic) bool wantsEncryption;

- (void)_closeLock;
- (void)_openLock;
- (void)_updateButtonAppearance;
- (void)_updateButtonAppearanceAnimated:(bool)arg1;
- (bool)canEncrypt;
- (void)dealloc;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCanEncrypt:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setTouchInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setWantsEncryption:(bool)arg1;
- (void)setWantsEncryption:(bool)arg1 canEncrypt:(bool)arg2 animated:(bool)arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })touchInsets;
- (bool)wantsEncryption;

@end
