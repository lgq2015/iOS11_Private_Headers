/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDataTableDrawView : UIView {
    NSMutableArray * _drawBlocks;
}

@property (nonatomic, retain) NSMutableArray *drawBlocks;

- (void).cxx_destruct;
- (id)drawBlocks;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGPoint { double x1; double x2; })originOffset;
- (void)setDrawBlocks:(id)arg1;

@end
