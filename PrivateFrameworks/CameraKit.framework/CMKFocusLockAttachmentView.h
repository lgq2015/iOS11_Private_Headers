/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKFocusLockAttachmentView : CMKFocusAttachmentView {
    bool  _locked;
}

@property (getter=isLocked, nonatomic) bool locked;

- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isLocked;
- (void)setLocked:(bool)arg1;

@end
