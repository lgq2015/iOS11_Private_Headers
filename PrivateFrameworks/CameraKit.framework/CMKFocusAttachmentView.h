/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKFocusAttachmentView : UIView {
    UILabel * __label;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _textInsets;
}

@property (nonatomic, retain) UILabel *_label;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } textInsets;

- (void).cxx_destruct;
- (id)_label;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setText:(id)arg1;
- (void)setTextInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)set_label:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsets;

@end
