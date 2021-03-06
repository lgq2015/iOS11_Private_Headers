/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCHomeButton : CCUIControlCenterButton {
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;

- (struct CGSize { double x1; double x2; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setHighlighted:(bool)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;

@end
