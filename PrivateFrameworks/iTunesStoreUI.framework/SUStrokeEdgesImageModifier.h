/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUStrokeEdgesImageModifier : SUImageModifier {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    bool  _fitToImage;
    UIColor * _strokeColor;
    bool  _strokeCurrentPath;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) bool fitToImage;
@property (nonatomic, retain) UIColor *strokeColor;
@property (nonatomic) bool strokeCurrentPath;

- (void)dealloc;
- (void)drawAfterImageForContext:(struct CGContext { }*)arg1 imageFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 finalSize:(struct CGSize { double x1; double x2; })arg3;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (bool)fitToImage;
- (bool)isEqual:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setFitToImage:(bool)arg1;
- (void)setStrokeColor:(id)arg1;
- (void)setStrokeCurrentPath:(bool)arg1;
- (id)strokeColor;
- (bool)strokeCurrentPath;

@end
