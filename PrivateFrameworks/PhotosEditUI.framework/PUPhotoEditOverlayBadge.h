/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditOverlayBadge : UIView {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _insets;
    UILabel * _label;
    NSString * _text;
}

@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } insets;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_updateLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })insets;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;
- (void)setText:(id)arg1;
- (id)text;

@end
