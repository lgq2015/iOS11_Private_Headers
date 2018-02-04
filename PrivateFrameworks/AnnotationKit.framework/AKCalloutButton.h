/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKCalloutButton : UIButton {
    AKCalloutBar * _bar;
    int  _position;
}

@property (nonatomic) AKCalloutBar *bar;
@property (nonatomic) int position;

- (void).cxx_destruct;
- (id)bar;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (int)position;
- (void)setBar:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setPosition:(int)arg1;

@end
