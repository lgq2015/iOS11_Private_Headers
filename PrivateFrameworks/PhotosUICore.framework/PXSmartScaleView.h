/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSmartScaleView : UIView {
    struct CGSize { 
        double width; 
        double height; 
    }  _displaySize;
}

@property (readonly) double displayScale;
@property struct CGSize { double x1; double x2; } displaySize;

- (double)displayScale;
- (struct CGSize { double x1; double x2; })displaySize;
- (void)setDisplaySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewScaleDidChange;

@end
