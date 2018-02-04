/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMFocusLockBadge : CAMBadgeTextView {
    bool  _exposureLocked;
    bool  _focusLocked;
}

@property (getter=isExposureLocked, nonatomic) bool exposureLocked;
@property (getter=isFocusLocked, nonatomic) bool focusLocked;

- (void)_updateText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExposureLocked;
- (bool)isFocusLocked;
- (void)setExposureLocked:(bool)arg1;
- (void)setFocusLocked:(bool)arg1;

@end
