/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKFingerPotView : UIButton {
    UIImageView * _highlight;
    UIImageView * _selectedOutline;
}

@property (nonatomic, retain) UIImageView *highlight;
@property (nonatomic, retain) UIImage *menuImage;
@property (nonatomic, retain) UIImageView *selectedOutline;

- (void).cxx_destruct;
- (id)highlight;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)menuImage;
- (id)selectedOutline;
- (void)setHighlight:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setMenuImage:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectedOutline:(id)arg1;

@end
