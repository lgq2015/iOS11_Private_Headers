/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXFocusableUIImageView : UIImageView {
    bool  _allowsFocus;
}

@property (nonatomic) bool allowsFocus;

- (bool)allowsFocus;
- (bool)canBecomeFocused;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAllowsFocus:(bool)arg1;

@end
